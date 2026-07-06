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

// Function: sub_002E67F0
// Address: 0x2e67f0 - 0x2e6900
void sub_002E67F0_0x2e67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E67F0_0x2e67f0");
#endif

    switch (ctx->pc) {
        case 0x2e68d8u: goto label_2e68d8;
        default: break;
    }

    ctx->pc = 0x2e67f0u;

    // 0x2e67f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e67f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e67f4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2e67f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e67f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e67fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e67fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e6800: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e6800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e6804: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e6804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6808: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x2e6808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2e680c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E680Cu;
    {
        const bool branch_taken_0x2e680c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E680Cu;
        // 0x2e6810: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e680c) {
            ctx->pc = 0x2E681Cu;
            goto label_2e681c;
        }
    }
    ctx->pc = 0x2E6814u;
    // 0x2e6814: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2E6814u;
    {
        const bool branch_taken_0x2e6814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6814u;
        // 0x2e6818: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6814) {
            ctx->pc = 0x2E68E8u;
            goto label_2e68e8;
        }
    }
    ctx->pc = 0x2E681Cu;
label_2e681c:
    // 0x2e681c: 0x14e00016  bnez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E681Cu;
    {
        const bool branch_taken_0x2e681c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E681Cu;
        // 0x2e6820: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e681c) {
            ctx->pc = 0x2E6878u;
            goto label_2e6878;
        }
    }
    ctx->pc = 0x2E6824u;
    // 0x2e6824: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2e6824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2e6828: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2e6828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2e682c: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x2e682cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e6830: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x2e6830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2e6834: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2e6834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2e6838: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e6838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e683c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E683Cu;
    {
        const bool branch_taken_0x2e683c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E683Cu;
        // 0x2e6840: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e683c) {
            ctx->pc = 0x2E6874u;
            goto label_2e6874;
        }
    }
    ctx->pc = 0x2E6844u;
    // 0x2e6844: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2e6844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2e6848: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E6848u;
    {
        const bool branch_taken_0x2e6848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6848u;
        // 0x2e684c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6848) {
            ctx->pc = 0x2E6878u;
            goto label_2e6878;
        }
    }
    ctx->pc = 0x2E6850u;
    // 0x2e6850: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2e6850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e6854: 0x8ca37b38  lw          $v1, 0x7B38($a1)
    ctx->pc = 0x2e6854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31544)));
    // 0x2e6858: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e6858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e685c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2e685cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e6860: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6860u;
    {
        const bool branch_taken_0x2e6860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6860u;
        // 0x2e6864: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6860) {
            ctx->pc = 0x2E686Cu;
            goto label_2e686c;
        }
    }
    ctx->pc = 0x2E6868u;
    // 0x2e6868: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x2e6868u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_2e686c:
    // 0x2e686c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E686Cu;
    {
        const bool branch_taken_0x2e686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E686Cu;
        // 0x2e6870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e686c) {
            ctx->pc = 0x2E68E8u;
            goto label_2e68e8;
        }
    }
    ctx->pc = 0x2E6874u;
label_2e6874:
    // 0x2e6874: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e6874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2e6878:
    // 0x2e6878: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e6878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e687c: 0x90420d7c  lbu         $v0, 0xD7C($v0)
    ctx->pc = 0x2e687cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3452)));
    // 0x2e6880: 0x28430007  slti        $v1, $v0, 0x7
    ctx->pc = 0x2e6880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e6884: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E6884u;
    {
        const bool branch_taken_0x2e6884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6884u;
        // 0x2e6888: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6884) {
            ctx->pc = 0x2E68E4u;
            goto label_2e68e4;
        }
    }
    ctx->pc = 0x2E688Cu;
    // 0x2e688c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E688Cu;
    {
        const bool branch_taken_0x2e688c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E688Cu;
        // 0x2e6890: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e688c) {
            ctx->pc = 0x2E68E8u;
            goto label_2e68e8;
        }
    }
    ctx->pc = 0x2E6894u;
    // 0x2e6894: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6894u;
    {
        const bool branch_taken_0x2e6894 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6894u;
        // 0x2e6898: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6894) {
            ctx->pc = 0x2E68B8u;
            goto label_2e68b8;
        }
    }
    ctx->pc = 0x2E689Cu;
    // 0x2e689c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2e689cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2e68a0: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2e68a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e68a4: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2e68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e68a8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2e68a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2e68ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e68acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2e68b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E68B0u;
    {
        const bool branch_taken_0x2e68b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e68b0) {
            ctx->pc = 0x2E68C0u;
            goto label_2e68c0;
        }
    }
    ctx->pc = 0x2E68B8u;
label_2e68b8:
    // 0x2e68b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E68B8u;
    {
        const bool branch_taken_0x2e68b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68B8u;
        // 0x2e68bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68b8) {
            ctx->pc = 0x2E68E4u;
            goto label_2e68e4;
        }
    }
    ctx->pc = 0x2E68C0u;
label_2e68c0:
    // 0x2e68c0: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E68C0u;
    {
        const bool branch_taken_0x2e68c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e68c0) {
            ctx->pc = 0x2E68C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E68C0u;
            // 0x2e68c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E68E0u;
            goto label_2e68e0;
        }
    }
    ctx->pc = 0x2E68C8u;
    // 0x2e68c8: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2e68c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e68cc: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2e68ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68d0: 0xc0b998a  jal         func_2E6628
    ctx->pc = 0x2E68D0u;
    SET_GPR_U32(ctx, 31, 0x2E68D8u);
    ctx->pc = 0x2E68D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68D0u;
    // 0x2e68d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6628u, 0x2E68D0u, 0x2E68D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68D8u;
label_2e68d8:
    // 0x2e68d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e68d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e68dc: 0x42180b  movn        $v1, $v0, $v0
    ctx->pc = 0x2e68dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_2e68e0:
    // 0x2e68e0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2e68e4:
    // 0x2e68e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e68e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e68e8:
    // 0x2e68e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e68e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e68ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e68ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e68f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e68f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e68f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E68F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E68F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68F4u;
        // 0x2e68f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E68F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E68FCu;
    // 0x2e68fc: 0x0  nop
    ctx->pc = 0x2e68fcu;
    // NOP
}
