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

// Function: sub_002E6628
// Address: 0x2e6628 - 0x2e67f0
void sub_002E6628_0x2e6628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6628_0x2e6628");
#endif

    switch (ctx->pc) {
        case 0x2e6660u: goto label_2e6660;
        case 0x2e6680u: goto label_2e6680;
        case 0x2e670cu: goto label_2e670c;
        case 0x2e6744u: goto label_2e6744;
        case 0x2e6770u: goto label_2e6770;
        case 0x2e67a0u: goto label_2e67a0;
        case 0x2e67c4u: goto label_2e67c4;
        default: break;
    }

    ctx->pc = 0x2e6628u;

    // 0x2e6628: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e6628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e662c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2e662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2e6630: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e6630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e6634: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e6634u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6638: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e6638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e663c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e6640: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6644: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e6644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e6648: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e6648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e664c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e6650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e6650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e6654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e6658: 0xc0b9906  jal         func_2E6418
    ctx->pc = 0x2E6658u;
    SET_GPR_U32(ctx, 31, 0x2E6660u);
    ctx->pc = 0x2E665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6658u;
    // 0x2e665c: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6418u, 0x2E6658u, 0x2E6660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6660u;
label_2e6660:
    // 0x2e6660: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e6660u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6664: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6664u;
    {
        const bool branch_taken_0x2e6664 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2E6668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6664u;
        // 0x2e6668: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6664) {
            ctx->pc = 0x2E6674u;
            goto label_2e6674;
        }
    }
    ctx->pc = 0x2E666Cu;
    // 0x2e666c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2E666Cu;
    {
        const bool branch_taken_0x2e666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E666Cu;
        // 0x2e6670: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e666c) {
            ctx->pc = 0x2E67CCu;
            goto label_2e67cc;
        }
    }
    ctx->pc = 0x2E6674u;
label_2e6674:
    // 0x2e6674: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2e6674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e6678: 0xc098590  jal         func_261640
    ctx->pc = 0x2E6678u;
    SET_GPR_U32(ctx, 31, 0x2E6680u);
    ctx->pc = 0x2E667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6678u;
    // 0x2e667c: 0x8e65ea24  lw          $a1, -0x15DC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261640u, 0x2E6678u, 0x2E6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6680u;
label_2e6680:
    // 0x2e6680: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2e6680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2e6684: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x2e6684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x2e6688: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2e6688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e668c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2e668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e6690: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6690u;
    {
        const bool branch_taken_0x2e6690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6690u;
        // 0x2e6694: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6690) {
            ctx->pc = 0x2E66A0u;
            goto label_2e66a0;
        }
    }
    ctx->pc = 0x2E6698u;
    // 0x2e6698: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2E6698u;
    {
        const bool branch_taken_0x2e6698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6698u;
        // 0x2e669c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6698) {
            ctx->pc = 0x2E67CCu;
            goto label_2e67cc;
        }
    }
    ctx->pc = 0x2E66A0u;
label_2e66a0:
    // 0x2e66a0: 0x1640004a  bnez        $s2, . + 4 + (0x4A << 2)
    ctx->pc = 0x2E66A0u;
    {
        const bool branch_taken_0x2e66a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66A0u;
        // 0x2e66a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66a0) {
            ctx->pc = 0x2E67CCu;
            goto label_2e67cc;
        }
    }
    ctx->pc = 0x2E66A8u;
    // 0x2e66a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e66ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e66acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e66b0: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E66B0u;
    {
        const bool branch_taken_0x2e66b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66B0u;
        // 0x2e66b4: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66b0) {
            ctx->pc = 0x2E677Cu;
            goto label_2e677c;
        }
    }
    ctx->pc = 0x2E66B8u;
    // 0x2e66b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E66B8u;
    {
        const bool branch_taken_0x2e66b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66B8u;
        // 0x2e66bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66b8) {
            ctx->pc = 0x2E66D0u;
            goto label_2e66d0;
        }
    }
    ctx->pc = 0x2E66C0u;
    // 0x2e66c0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E66C0u;
    {
        const bool branch_taken_0x2e66c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66C0u;
        // 0x2e66c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66c0) {
            ctx->pc = 0x2E66DCu;
            goto label_2e66dc;
        }
    }
    ctx->pc = 0x2E66C8u;
    // 0x2e66c8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2E66C8u;
    {
        const bool branch_taken_0x2e66c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66C8u;
        // 0x2e66cc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66c8) {
            ctx->pc = 0x2E67D0u;
            goto label_2e67d0;
        }
    }
    ctx->pc = 0x2E66D0u;
label_2e66d0:
    // 0x2e66d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e66d4: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2E66D4u;
    {
        const bool branch_taken_0x2e66d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66D4u;
        // 0x2e66d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66d4) {
            ctx->pc = 0x2E67CCu;
            goto label_2e67cc;
        }
    }
    ctx->pc = 0x2E66DCu;
label_2e66dc:
    // 0x2e66dc: 0x92026708  lbu         $v0, 0x6708($s0)
    ctx->pc = 0x2e66dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26376)));
    // 0x2e66e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E66E0u;
    {
        const bool branch_taken_0x2e66e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66E0u;
        // 0x2e66e4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66e0) {
            ctx->pc = 0x2E6714u;
            goto label_2e6714;
        }
    }
    ctx->pc = 0x2E66E8u;
    // 0x2e66e8: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x2e66e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2e66ec: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x2e66ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2e66f0: 0x8c47ea28  lw          $a3, -0x15D8($v0)
    ctx->pc = 0x2e66f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961704)));
    // 0x2e66f4: 0x8e66ea24  lw          $a2, -0x15DC($s3)
    ctx->pc = 0x2e66f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961700)));
    // 0x2e66f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e66f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e66fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6700: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2e6700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2e6704: 0xc09abfc  jal         func_26AFF0
    ctx->pc = 0x2E6704u;
    SET_GPR_U32(ctx, 31, 0x2E670Cu);
    ctx->pc = 0x2E6708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6704u;
    // 0x2e6708: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AFF0u, 0x2E6704u, 0x2E670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E670Cu;
label_2e670c:
    // 0x2e670c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E670Cu;
    {
        const bool branch_taken_0x2e670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E670Cu;
        // 0x2e6710: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e670c) {
            ctx->pc = 0x2E6774u;
            goto label_2e6774;
        }
    }
    ctx->pc = 0x2E6714u;
label_2e6714:
    // 0x2e6714: 0x92026a10  lbu         $v0, 0x6A10($s0)
    ctx->pc = 0x2e6714u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27152)));
    // 0x2e6718: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E6718u;
    {
        const bool branch_taken_0x2e6718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6718u;
        // 0x2e671c: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6718) {
            ctx->pc = 0x2E674Cu;
            goto label_2e674c;
        }
    }
    ctx->pc = 0x2E6720u;
    // 0x2e6720: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e6720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e6724: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x2e6724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2e6728: 0x8c47ea28  lw          $a3, -0x15D8($v0)
    ctx->pc = 0x2e6728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961704)));
    // 0x2e672c: 0x8e66ea24  lw          $a2, -0x15DC($s3)
    ctx->pc = 0x2e672cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961700)));
    // 0x2e6730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e6734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6738: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2e6738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2e673c: 0xc09bcfa  jal         func_26F3E8
    ctx->pc = 0x2E673Cu;
    SET_GPR_U32(ctx, 31, 0x2E6744u);
    ctx->pc = 0x2E6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E673Cu;
    // 0x2e6740: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F3E8u, 0x2E673Cu, 0x2E6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6744u;
label_2e6744:
    // 0x2e6744: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E6744u;
    {
        const bool branch_taken_0x2e6744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6744u;
        // 0x2e6748: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6744) {
            ctx->pc = 0x2E6774u;
            goto label_2e6774;
        }
    }
    ctx->pc = 0x2E674Cu;
label_2e674c:
    // 0x2e674c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e674cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e6750: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x2e6750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2e6754: 0x8c47ea28  lw          $a3, -0x15D8($v0)
    ctx->pc = 0x2e6754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961704)));
    // 0x2e6758: 0x8e66ea24  lw          $a2, -0x15DC($s3)
    ctx->pc = 0x2e6758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961700)));
    // 0x2e675c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e675cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6764: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2e6764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2e6768: 0xc09c330  jal         func_270CC0
    ctx->pc = 0x2E6768u;
    SET_GPR_U32(ctx, 31, 0x2E6770u);
    ctx->pc = 0x2E676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6768u;
    // 0x2e676c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270CC0u, 0x2E6768u, 0x2E6770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6770u;
label_2e6770:
    // 0x2e6770: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x2e6770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2e6774:
    // 0x2e6774: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E6774u;
    {
        const bool branch_taken_0x2e6774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6774u;
        // 0x2e6778: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6774) {
            ctx->pc = 0x2E67C8u;
            goto label_2e67c8;
        }
    }
    ctx->pc = 0x2E677Cu;
label_2e677c:
    // 0x2e677c: 0x92026a10  lbu         $v0, 0x6A10($s0)
    ctx->pc = 0x2e677cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27152)));
    // 0x2e6780: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6780u;
    {
        const bool branch_taken_0x2e6780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6780u;
        // 0x2e6784: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6780) {
            ctx->pc = 0x2E67A8u;
            goto label_2e67a8;
        }
    }
    ctx->pc = 0x2E6788u;
    // 0x2e6788: 0x8e66ea24  lw          $a2, -0x15DC($s3)
    ctx->pc = 0x2e6788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961700)));
    // 0x2e678c: 0x8c47ea28  lw          $a3, -0x15D8($v0)
    ctx->pc = 0x2e678cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961704)));
    // 0x2e6790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6794: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x2e6794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2e6798: 0xc09bcfa  jal         func_26F3E8
    ctx->pc = 0x2E6798u;
    SET_GPR_U32(ctx, 31, 0x2E67A0u);
    ctx->pc = 0x2E679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6798u;
    // 0x2e679c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F3E8u, 0x2E6798u, 0x2E67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67A0u;
label_2e67a0:
    // 0x2e67a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E67A0u;
    {
        const bool branch_taken_0x2e67a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67A0u;
        // 0x2e67a4: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67a0) {
            ctx->pc = 0x2E67C8u;
            goto label_2e67c8;
        }
    }
    ctx->pc = 0x2E67A8u;
label_2e67a8:
    // 0x2e67a8: 0x8e66ea24  lw          $a2, -0x15DC($s3)
    ctx->pc = 0x2e67a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961700)));
    // 0x2e67ac: 0x8c47ea28  lw          $a3, -0x15D8($v0)
    ctx->pc = 0x2e67acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961704)));
    // 0x2e67b0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2e67b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67b4: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x2e67b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2e67b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e67b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67bc: 0xc09c0cc  jal         func_270330
    ctx->pc = 0x2E67BCu;
    SET_GPR_U32(ctx, 31, 0x2E67C4u);
    ctx->pc = 0x2E67C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67BCu;
    // 0x2e67c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270330u, 0x2E67BCu, 0x2E67C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67C4u;
label_2e67c4:
    // 0x2e67c4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2e67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_2e67c8:
    // 0x2e67c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e67c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e67cc:
    // 0x2e67cc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e67ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e67d0:
    // 0x2e67d0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2e67d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e67d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e67d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e67d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e67d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e67dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e67dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e67e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e67e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e67e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e67e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e67e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E67E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67E8u;
        // 0x2e67ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E67E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E67F0u;
}
