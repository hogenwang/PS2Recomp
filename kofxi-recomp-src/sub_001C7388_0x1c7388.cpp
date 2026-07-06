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

// Function: sub_001C7388
// Address: 0x1c7388 - 0x1c7760
void sub_001C7388_0x1c7388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7388_0x1c7388");
#endif

    switch (ctx->pc) {
        case 0x1c73a8u: goto label_1c73a8;
        case 0x1c7440u: goto label_1c7440;
        case 0x1c745cu: goto label_1c745c;
        case 0x1c7474u: goto label_1c7474;
        case 0x1c747cu: goto label_1c747c;
        case 0x1c74b4u: goto label_1c74b4;
        case 0x1c74ccu: goto label_1c74cc;
        case 0x1c7510u: goto label_1c7510;
        case 0x1c7520u: goto label_1c7520;
        case 0x1c7580u: goto label_1c7580;
        case 0x1c75bcu: goto label_1c75bc;
        case 0x1c7634u: goto label_1c7634;
        case 0x1c766cu: goto label_1c766c;
        case 0x1c76a4u: goto label_1c76a4;
        case 0x1c76c8u: goto label_1c76c8;
        case 0x1c76e8u: goto label_1c76e8;
        case 0x1c76fcu: goto label_1c76fc;
        case 0x1c7710u: goto label_1c7710;
        case 0x1c7718u: goto label_1c7718;
        case 0x1c7740u: goto label_1c7740;
        default: break;
    }

    ctx->pc = 0x1c7388u;

label_1c7388:
    // 0x1c7388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c738c: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1c738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1c7390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7398: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c7398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c739c: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x1c739cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1c73a0: 0xc071cbc  jal         func_1C72F0
    ctx->pc = 0x1C73A0u;
    SET_GPR_U32(ctx, 31, 0x1C73A8u);
    ctx->pc = 0x1C73A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73A0u;
    // 0x1c73a4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C72F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C72F0u, 0x1C73A0u, 0x1C73A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73A8u;
label_1c73a8:
    // 0x1c73a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c73a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c73ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c73acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c73b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c73b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c73b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c73b8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C73B8u;
    {
        const bool branch_taken_0x1c73b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c73b8) {
            ctx->pc = 0x1C73BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C73B8u;
            // 0x1c73bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C73C0u;
            goto label_1c73c0;
        }
    }
    ctx->pc = 0x1C73C0u;
label_1c73c0:
    // 0x1c73c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c73c4: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1c73c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c73c8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1c73c8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c73cc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1c73ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1c73d0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c73d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c73d4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c73d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c73d8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1c73d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c73dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c73dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c73e0: 0x1012  mflo        $v0
    ctx->pc = 0x1c73e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c73e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1c73e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c73e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c73ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C73ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73ECu;
        // 0x1c73f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C73ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C73F4u;
    // 0x1c73f4: 0x0  nop
    ctx->pc = 0x1c73f4u;
    // NOP
    // 0x1c73f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c73f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c73fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c73fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c7400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c7400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7408: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7408u;
    {
        const bool branch_taken_0x1c7408 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7408u;
        // 0x1c740c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7408) {
            ctx->pc = 0x1C7420u;
            goto label_1c7420;
        }
    }
    ctx->pc = 0x1C7410u;
    // 0x1c7410: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c7410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c7414: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C7414u;
    {
        const bool branch_taken_0x1c7414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7414u;
        // 0x1c7418: 0x24a5aab0  addiu       $a1, $a1, -0x5550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7414) {
            ctx->pc = 0x1C7454u;
            goto label_1c7454;
        }
    }
    ctx->pc = 0x1C741Cu;
    // 0x1c741c: 0x0  nop
    ctx->pc = 0x1c741cu;
    // NOP
label_1c7420:
    // 0x1c7420: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7420u;
    {
        const bool branch_taken_0x1c7420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7420u;
        // 0x1c7424: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7420) {
            ctx->pc = 0x1C7438u;
            goto label_1c7438;
        }
    }
    ctx->pc = 0x1C7428u;
    // 0x1c7428: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c7428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c742c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C742Cu;
    {
        const bool branch_taken_0x1c742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C742Cu;
        // 0x1c7430: 0x24a5aad8  addiu       $a1, $a1, -0x5528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c742c) {
            ctx->pc = 0x1C7454u;
            goto label_1c7454;
        }
    }
    ctx->pc = 0x1C7434u;
    // 0x1c7434: 0x0  nop
    ctx->pc = 0x1c7434u;
    // NOP
label_1c7438:
    // 0x1c7438: 0xc071cc4  jal         func_1C7310
    ctx->pc = 0x1C7438u;
    SET_GPR_U32(ctx, 31, 0x1C7440u);
    ctx->pc = 0x1C7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7310u, 0x1C7438u, 0x1C7440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7440u;
label_1c7440:
    // 0x1c7440: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c7440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c7444: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7448: 0x24a5ab00  addiu       $a1, $a1, -0x5500
    ctx->pc = 0x1c7448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945536));
    // 0x1c744c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C744Cu;
    {
        const bool branch_taken_0x1c744c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C744Cu;
        // 0x1c7450: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c744c) {
            ctx->pc = 0x1C7468u;
            goto label_1c7468;
        }
    }
    ctx->pc = 0x1C7454u;
label_1c7454:
    // 0x1c7454: 0xc071c44  jal         func_1C7110
    ctx->pc = 0x1C7454u;
    SET_GPR_U32(ctx, 31, 0x1C745Cu);
    ctx->pc = 0x1C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7110u, 0x1C7454u, 0x1C745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C745Cu;
label_1c745c:
    // 0x1c745c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C745Cu;
    {
        const bool branch_taken_0x1c745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C745Cu;
        // 0x1c7460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c745c) {
            ctx->pc = 0x1C7480u;
            goto label_1c7480;
        }
    }
    ctx->pc = 0x1C7464u;
    // 0x1c7464: 0x0  nop
    ctx->pc = 0x1c7464u;
    // NOP
label_1c7468:
    // 0x1c7468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c746c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1C746Cu;
    SET_GPR_U32(ctx, 31, 0x1C7474u);
    ctx->pc = 0x1C7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C746Cu;
    // 0x1c7470: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1C746Cu, 0x1C7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7474u;
label_1c7474:
    // 0x1c7474: 0xc071ce2  jal         func_1C7388
    ctx->pc = 0x1C7474u;
    SET_GPR_U32(ctx, 31, 0x1C747Cu);
    ctx->pc = 0x1C7478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7474u;
    // 0x1c7478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7388u;
    goto label_1c7388;
    ctx->pc = 0x1C747Cu;
label_1c747c:
    // 0x1c747c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c747cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7480:
    // 0x1c7480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c748c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C748Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C748Cu;
        // 0x1c7490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C748Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7494u;
    // 0x1c7494: 0x0  nop
    ctx->pc = 0x1c7494u;
    // NOP
    // 0x1c7498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c749c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c74a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c74a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74a4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C74A4u;
    {
        const bool branch_taken_0x1c74a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74A4u;
        // 0x1c74a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74a4) {
            ctx->pc = 0x1C74CCu;
            goto label_1c74cc;
        }
    }
    ctx->pc = 0x1C74ACu;
    // 0x1c74ac: 0xc071dd8  jal         func_1C7760
    ctx->pc = 0x1C74ACu;
    SET_GPR_U32(ctx, 31, 0x1C74B4u);
    ctx->pc = 0x1C7760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7760u, 0x1C74ACu, 0x1C74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74B4u;
label_1c74b4:
    // 0x1c74b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c74b8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c74b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c74bc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C74BCu;
    {
        const bool branch_taken_0x1c74bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C74C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74BCu;
        // 0x1c74c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74bc) {
            ctx->pc = 0x1C74CCu;
            goto label_1c74cc;
        }
    }
    ctx->pc = 0x1C74C4u;
    // 0x1c74c4: 0xc071cda  jal         func_1C7368
    ctx->pc = 0x1C74C4u;
    SET_GPR_U32(ctx, 31, 0x1C74CCu);
    ctx->pc = 0x1C74C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74C4u;
    // 0x1c74c8: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7368u, 0x1C74C4u, 0x1C74CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74CCu;
label_1c74cc:
    // 0x1c74cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c74ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c74d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c74d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c74d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C74D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74D4u;
        // 0x1c74d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C74D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C74DCu;
    // 0x1c74dc: 0x0  nop
    ctx->pc = 0x1c74dcu;
    // NOP
    // 0x1c74e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c74e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c74e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c74e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c74e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c74e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c74ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c74f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c74f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c74f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c74f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c74f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74fc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C74FCu;
    {
        const bool branch_taken_0x1c74fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74FCu;
        // 0x1c7500: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74fc) {
            ctx->pc = 0x1C7518u;
            goto label_1c7518;
        }
    }
    ctx->pc = 0x1C7504u;
    // 0x1c7504: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c7504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c7508: 0xc071c44  jal         func_1C7110
    ctx->pc = 0x1C7508u;
    SET_GPR_U32(ctx, 31, 0x1C7510u);
    ctx->pc = 0x1C750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7508u;
    // 0x1c750c: 0x24a5ab30  addiu       $a1, $a1, -0x54D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7110u, 0x1C7508u, 0x1C7510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7510u;
label_1c7510:
    // 0x1c7510: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C7510u;
    {
        const bool branch_taken_0x1c7510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7510u;
        // 0x1c7514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7510) {
            ctx->pc = 0x1C7584u;
            goto label_1c7584;
        }
    }
    ctx->pc = 0x1C7518u;
label_1c7518:
    // 0x1c7518: 0xc071c32  jal         func_1C70C8
    ctx->pc = 0x1C7518u;
    SET_GPR_U32(ctx, 31, 0x1C7520u);
    ctx->pc = 0x1C70C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C70C8u, 0x1C7518u, 0x1C7520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7520u;
label_1c7520:
    // 0x1c7520: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7520u;
    {
        const bool branch_taken_0x1c7520 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7520u;
        // 0x1c7524: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7520) {
            ctx->pc = 0x1C7530u;
            goto label_1c7530;
        }
    }
    ctx->pc = 0x1C7528u;
    // 0x1c7528: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C7528u;
    {
        const bool branch_taken_0x1c7528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7528u;
        // 0x1c752c: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7528) {
            ctx->pc = 0x1C7560u;
            goto label_1c7560;
        }
    }
    ctx->pc = 0x1C7530u;
label_1c7530:
    // 0x1c7530: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7530u;
    {
        const bool branch_taken_0x1c7530 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7530u;
        // 0x1c7534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7530) {
            ctx->pc = 0x1C7548u;
            goto label_1c7548;
        }
    }
    ctx->pc = 0x1C7538u;
    // 0x1c7538: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c7538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c753c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1c753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1c7540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7540u;
    {
        const bool branch_taken_0x1c7540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7540u;
        // 0x1c7544: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7540) {
            ctx->pc = 0x1C7564u;
            goto label_1c7564;
        }
    }
    ctx->pc = 0x1C7548u;
label_1c7548:
    // 0x1c7548: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7548u;
    {
        const bool branch_taken_0x1c7548 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7548u;
        // 0x1c754c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7548) {
            ctx->pc = 0x1C7564u;
            goto label_1c7564;
        }
    }
    ctx->pc = 0x1C7550u;
    // 0x1c7550: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c7550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c7554: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c7554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c7558: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7558u;
    {
        const bool branch_taken_0x1c7558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7558u;
        // 0x1c755c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7558) {
            ctx->pc = 0x1C7564u;
            goto label_1c7564;
        }
    }
    ctx->pc = 0x1C7560u;
label_1c7560:
    // 0x1c7560: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c7560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c7564:
    // 0x1c7564: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c7564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c7568: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1c7568u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c756c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1c756cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1c7570: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1c7570u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c7574: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x1c7574u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1c7578: 0xc071c38  jal         func_1C70E0
    ctx->pc = 0x1C7578u;
    SET_GPR_U32(ctx, 31, 0x1C7580u);
    ctx->pc = 0x1C757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7578u;
    // 0x1c757c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C70E0u, 0x1C7578u, 0x1C7580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7580u;
label_1c7580:
    // 0x1c7580: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c7584:
    // 0x1c7584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c758c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c758cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7590: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c7590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7594: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7594u;
        // 0x1c7598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C759Cu;
    // 0x1c759c: 0x0  nop
    ctx->pc = 0x1c759cu;
    // NOP
    // 0x1c75a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c75a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c75a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c75a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C75A8u;
    {
        const bool branch_taken_0x1c75a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C75ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75A8u;
        // 0x1c75ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75a8) {
            ctx->pc = 0x1C75C8u;
            goto label_1c75c8;
        }
    }
    ctx->pc = 0x1C75B0u;
    // 0x1c75b0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c75b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c75b4: 0xc071c44  jal         func_1C7110
    ctx->pc = 0x1C75B4u;
    SET_GPR_U32(ctx, 31, 0x1C75BCu);
    ctx->pc = 0x1C75B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75B4u;
    // 0x1c75b8: 0x24a5ab50  addiu       $a1, $a1, -0x54B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7110u, 0x1C75B4u, 0x1C75BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75BCu;
label_1c75bc:
    // 0x1c75bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C75BCu;
    {
        const bool branch_taken_0x1c75bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75BCu;
        // 0x1c75c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75bc) {
            ctx->pc = 0x1C75CCu;
            goto label_1c75cc;
        }
    }
    ctx->pc = 0x1C75C4u;
    // 0x1c75c4: 0x0  nop
    ctx->pc = 0x1c75c4u;
    // NOP
label_1c75c8:
    // 0x1c75c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1c75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1c75cc:
    // 0x1c75cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c75ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c75d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C75D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75D0u;
        // 0x1c75d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C75D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C75D8u;
    // 0x1c75d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c75d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c75dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c75dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c75e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c75e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c75e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c75e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c75e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75ec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c75ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c75f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c75f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c75f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c75f8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C75F8u;
    {
        const bool branch_taken_0x1c75f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75F8u;
        // 0x1c75fc: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75f8) {
            ctx->pc = 0x1C7610u;
            goto label_1c7610;
        }
    }
    ctx->pc = 0x1C7600u;
    // 0x1c7600: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c7600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c7604: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7604u;
    {
        const bool branch_taken_0x1c7604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7604u;
        // 0x1c7608: 0x24a5ab70  addiu       $a1, $a1, -0x5490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7604) {
            ctx->pc = 0x1C762Cu;
            goto label_1c762c;
        }
    }
    ctx->pc = 0x1C760Cu;
    // 0x1c760c: 0x0  nop
    ctx->pc = 0x1c760cu;
    // NOP
label_1c7610:
    // 0x1c7610: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7610u;
    {
        const bool branch_taken_0x1c7610 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7610u;
        // 0x1c7614: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7610) {
            ctx->pc = 0x1C7620u;
            goto label_1c7620;
        }
    }
    ctx->pc = 0x1C7618u;
    // 0x1c7618: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7618u;
    {
        const bool branch_taken_0x1c7618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7618u;
        // 0x1c761c: 0x24a5ab90  addiu       $a1, $a1, -0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7618) {
            ctx->pc = 0x1C762Cu;
            goto label_1c762c;
        }
    }
    ctx->pc = 0x1C7620u;
label_1c7620:
    // 0x1c7620: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7620u;
    {
        const bool branch_taken_0x1c7620 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7620u;
        // 0x1c7624: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7620) {
            ctx->pc = 0x1C7640u;
            goto label_1c7640;
        }
    }
    ctx->pc = 0x1C7628u;
    // 0x1c7628: 0x24a5abb0  addiu       $a1, $a1, -0x5450
    ctx->pc = 0x1c7628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945712));
label_1c762c:
    // 0x1c762c: 0xc071c44  jal         func_1C7110
    ctx->pc = 0x1C762Cu;
    SET_GPR_U32(ctx, 31, 0x1C7634u);
    ctx->pc = 0x1C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7110u, 0x1C762Cu, 0x1C7634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7634u;
label_1c7634:
    // 0x1c7634: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1C7634u;
    {
        const bool branch_taken_0x1c7634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7634u;
        // 0x1c7638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7634) {
            ctx->pc = 0x1C7744u;
            goto label_1c7744;
        }
    }
    ctx->pc = 0x1C763Cu;
    // 0x1c763c: 0x0  nop
    ctx->pc = 0x1c763cu;
    // NOP
label_1c7640:
    // 0x1c7640: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7640u;
    {
        const bool branch_taken_0x1c7640 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7640) {
            ctx->pc = 0x1C7644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7640u;
            // 0x1c7644: 0x82430001  lb          $v1, 0x1($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7658u;
            goto label_1c7658;
        }
    }
    ctx->pc = 0x1C7648u;
    // 0x1c7648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c764c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c764cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7650: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1C7650u;
    {
        const bool branch_taken_0x1c7650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7650u;
        // 0x1c7654: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7650) {
            ctx->pc = 0x1C7744u;
            goto label_1c7744;
        }
    }
    ctx->pc = 0x1C7658u;
label_1c7658:
    // 0x1c7658: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1c7658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c765c: 0x10710039  beq         $v1, $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1C765Cu;
    {
        const bool branch_taken_0x1c765c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C765Cu;
        // 0x1c7660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c765c) {
            ctx->pc = 0x1C7744u;
            goto label_1c7744;
        }
    }
    ctx->pc = 0x1C7664u;
    // 0x1c7664: 0xc071c32  jal         func_1C70C8
    ctx->pc = 0x1C7664u;
    SET_GPR_U32(ctx, 31, 0x1C766Cu);
    ctx->pc = 0x1C70C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C70C8u, 0x1C7664u, 0x1C766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C766Cu;
label_1c766c:
    // 0x1c766c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1c766cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1c7670: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1c7670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c7674: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1c7674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c7678: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c7678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c767c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1c767cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c7680: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x1c7680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c7684: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1c7684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c7688: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x1c7688u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x1c768c: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x1c768cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c7690: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7690u;
    {
        const bool branch_taken_0x1c7690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7690u;
        // 0x1c7694: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7690) {
            ctx->pc = 0x1C76B0u;
            goto label_1c76b0;
        }
    }
    ctx->pc = 0x1C7698u;
    // 0x1c7698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c769c: 0xc071c38  jal         func_1C70E0
    ctx->pc = 0x1C769Cu;
    SET_GPR_U32(ctx, 31, 0x1C76A4u);
    ctx->pc = 0x1C76A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C769Cu;
    // 0x1c76a0: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C70E0u, 0x1C769Cu, 0x1C76A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76A4u;
label_1c76a4:
    // 0x1c76a4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C76A4u;
    {
        const bool branch_taken_0x1c76a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76A4u;
        // 0x1c76a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76a4) {
            ctx->pc = 0x1C7744u;
            goto label_1c7744;
        }
    }
    ctx->pc = 0x1C76ACu;
    // 0x1c76ac: 0x0  nop
    ctx->pc = 0x1c76acu;
    // NOP
label_1c76b0:
    // 0x1c76b0: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x1c76b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    // 0x1c76b4: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1c76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1c76b8: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x1c76b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x1c76bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c76bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76c0: 0xc071c76  jal         func_1C71D8
    ctx->pc = 0x1C76C0u;
    SET_GPR_U32(ctx, 31, 0x1C76C8u);
    ctx->pc = 0x1C76C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76C0u;
    // 0x1c76c4: 0xa2510001  sb          $s1, 0x1($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C71D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C71D8u, 0x1C76C0u, 0x1C76C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76C8u;
label_1c76c8:
    // 0x1c76c8: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1c76c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1c76cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c76ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c76d4: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x1c76d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1c76d8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1c76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c76dc: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x1c76dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c76e0: 0xc071c38  jal         func_1C70E0
    ctx->pc = 0x1C76E0u;
    SET_GPR_U32(ctx, 31, 0x1C76E8u);
    ctx->pc = 0x1C76E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76E0u;
    // 0x1c76e4: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C70E0u, 0x1C76E0u, 0x1C76E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76E8u;
label_1c76e8:
    // 0x1c76e8: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x1c76e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1c76ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c76ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76f0: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x1c76f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1c76f4: 0xc049c48  jal         func_127120
    ctx->pc = 0x1C76F4u;
    SET_GPR_U32(ctx, 31, 0x1C76FCu);
    ctx->pc = 0x1C76F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76F4u;
    // 0x1c76f8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1C76F4u, 0x1C76FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76FCu;
label_1c76fc:
    // 0x1c76fc: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x1c76fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1c7700: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1c7700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c7704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7708: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C7708u;
    SET_GPR_U32(ctx, 31, 0x1C7710u);
    ctx->pc = 0x1C770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7708u;
    // 0x1c770c: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1C7708u, 0x1C7710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7710u;
label_1c7710:
    // 0x1c7710: 0xc071c32  jal         func_1C70C8
    ctx->pc = 0x1C7710u;
    SET_GPR_U32(ctx, 31, 0x1C7718u);
    ctx->pc = 0x1C70C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C70C8u, 0x1C7710u, 0x1C7718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7718u;
label_1c7718:
    // 0x1c7718: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1c7718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1c771c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7720: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c7720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c7724: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1c7724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c7728: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1c7728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c772c: 0xa2450001  sb          $a1, 0x1($s2)
    ctx->pc = 0x1c772cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c7730: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c7730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c7734: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1c7734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1c7738: 0xc071c38  jal         func_1C70E0
    ctx->pc = 0x1C7738u;
    SET_GPR_U32(ctx, 31, 0x1C7740u);
    ctx->pc = 0x1C773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7738u;
    // 0x1c773c: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C70E0u, 0x1C7738u, 0x1C7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7740u;
label_1c7740:
    // 0x1c7740: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1c7740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1c7744:
    // 0x1c7744: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c7744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7748: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c7748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c774c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c774cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7750: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c7750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c7754: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c7754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7758: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7758u;
        // 0x1c775c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7760u;
}
