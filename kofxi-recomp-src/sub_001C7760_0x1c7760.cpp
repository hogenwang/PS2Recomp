#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7760
// Address: 0x1c7760 - 0x1c78a0
void sub_001C7760_0x1c7760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7760_0x1c7760");
#endif

    switch (ctx->pc) {
        case 0x1c7798u: goto label_1c7798;
        case 0x1c77ccu: goto label_1c77cc;
        case 0x1c7804u: goto label_1c7804;
        default: break;
    }

    ctx->pc = 0x1c7760u;

    // 0x1c7760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7768: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c776c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C776Cu;
    {
        const bool branch_taken_0x1c776c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C776Cu;
        // 0x1c7770: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c776c) {
            ctx->pc = 0x1C7790u;
            goto label_1c7790;
        }
    }
    ctx->pc = 0x1C7774u;
    // 0x1c7774: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c7774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c7778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c777c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c777cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7780: 0x24a5abd8  addiu       $a1, $a1, -0x5428
    ctx->pc = 0x1c7780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945752));
    // 0x1c7784: 0x8071c44  j           func_1C7110
    ctx->pc = 0x1C7784u;
    ctx->pc = 0x1C7788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7784u;
    // 0x1c7788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7110u;
    sub_001C7110_0x1c7110(rdram, ctx, runtime); return;
    ctx->pc = 0x1C778Cu;
    // 0x1c778c: 0x0  nop
    ctx->pc = 0x1c778cu;
    // NOP
label_1c7790:
    // 0x1c7790: 0xc071c32  jal         func_1C70C8
    ctx->pc = 0x1C7790u;
    SET_GPR_U32(ctx, 31, 0x1C7798u);
    ctx->pc = 0x1C70C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C70C8u, 0x1C7790u, 0x1C7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7798u;
label_1c7798:
    // 0x1c7798: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1c7798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c779c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c779cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77a4: 0x8071c38  j           func_1C70E0
    ctx->pc = 0x1C77A4u;
    ctx->pc = 0x1C77A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77A4u;
    // 0x1c77a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C70E0u;
    sub_001C70E0_0x1c70e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C77ACu;
    // 0x1c77ac: 0x0  nop
    ctx->pc = 0x1c77acu;
    // NOP
    // 0x1c77b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c77b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c77b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C77B8u;
    {
        const bool branch_taken_0x1c77b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77B8u;
        // 0x1c77bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77b8) {
            ctx->pc = 0x1C77D8u;
            goto label_1c77d8;
        }
    }
    ctx->pc = 0x1C77C0u;
    // 0x1c77c0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c77c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c77c4: 0xc071c44  jal         func_1C7110
    ctx->pc = 0x1C77C4u;
    SET_GPR_U32(ctx, 31, 0x1C77CCu);
    ctx->pc = 0x1C77C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77C4u;
    // 0x1c77c8: 0x24a5abd8  addiu       $a1, $a1, -0x5428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7110u, 0x1C77C4u, 0x1C77CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77CCu;
label_1c77cc:
    // 0x1c77cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C77CCu;
    {
        const bool branch_taken_0x1c77cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77CCu;
        // 0x1c77d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77cc) {
            ctx->pc = 0x1C77DCu;
            goto label_1c77dc;
        }
    }
    ctx->pc = 0x1C77D4u;
    // 0x1c77d4: 0x0  nop
    ctx->pc = 0x1c77d4u;
    // NOP
label_1c77d8:
    // 0x1c77d8: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x1c77d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1c77dc:
    // 0x1c77dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c77dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77E0u;
        // 0x1c77e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77E8u;
    // 0x1c77e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c77ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c77ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C77F0u;
    {
        const bool branch_taken_0x1c77f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77F0u;
        // 0x1c77f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77f0) {
            ctx->pc = 0x1C7810u;
            goto label_1c7810;
        }
    }
    ctx->pc = 0x1C77F8u;
    // 0x1c77f8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c77f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c77fc: 0xc071c44  jal         func_1C7110
    ctx->pc = 0x1C77FCu;
    SET_GPR_U32(ctx, 31, 0x1C7804u);
    ctx->pc = 0x1C7800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77FCu;
    // 0x1c7800: 0x24a5abf0  addiu       $a1, $a1, -0x5410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7110u, 0x1C77FCu, 0x1C7804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7804u;
label_1c7804:
    // 0x1c7804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7804u;
    {
        const bool branch_taken_0x1c7804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7804u;
        // 0x1c7808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7804) {
            ctx->pc = 0x1C7814u;
            goto label_1c7814;
        }
    }
    ctx->pc = 0x1C780Cu;
    // 0x1c780c: 0x0  nop
    ctx->pc = 0x1c780cu;
    // NOP
label_1c7810:
    // 0x1c7810: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1c7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c7814:
    // 0x1c7814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7818: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7818u;
        // 0x1c781c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7820u;
    // 0x1c7820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7824: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c7824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7828: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7828u;
    {
        const bool branch_taken_0x1c7828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7828u;
        // 0x1c782c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7828) {
            ctx->pc = 0x1C7848u;
            goto label_1c7848;
        }
    }
    ctx->pc = 0x1C7830u;
    // 0x1c7830: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c7830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c7834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7838: 0x24a5ac08  addiu       $a1, $a1, -0x53F8
    ctx->pc = 0x1c7838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945800));
    // 0x1c783c: 0x8071c44  j           func_1C7110
    ctx->pc = 0x1C783Cu;
    ctx->pc = 0x1C7840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C783Cu;
    // 0x1c7840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7110u;
    sub_001C7110_0x1c7110(rdram, ctx, runtime); return;
    ctx->pc = 0x1C7844u;
    // 0x1c7844: 0x0  nop
    ctx->pc = 0x1c7844u;
    // NOP
label_1c7848:
    // 0x1c7848: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c7848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c784c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1c784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1c7850: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c7850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c7854: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1c7854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c7858: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c7858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c785c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1c785cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1c7860: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1c7860u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c7864: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C7864u;
    {
        const bool branch_taken_0x1c7864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7864) {
            ctx->pc = 0x1C7868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7864u;
            // 0x1c7868: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C786Cu;
            goto label_1c786c;
        }
    }
    ctx->pc = 0x1C786Cu;
label_1c786c:
    // 0x1c786c: 0x1012  mflo        $v0
    ctx->pc = 0x1c786cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c7870: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1c7870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c7874: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1c7874u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x1c7878: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1c7878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1c787c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c787cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7880: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1c7880u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c7884: 0x1812  mflo        $v1
    ctx->pc = 0x1c7884u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1c7888: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1c7888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c788c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1c788cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1c7890: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x1c7890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x1c7894: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7894u;
        // 0x1c7898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C789Cu;
    // 0x1c789c: 0x0  nop
    ctx->pc = 0x1c789cu;
    // NOP
    if (ctx->pc == 0x1c789cu) { ctx->pc = 0x1c78a0u; }
}
