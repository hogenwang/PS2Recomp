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

// Function: sub_002F8DE8
// Address: 0x2f8de8 - 0x2f8f50
void sub_002F8DE8_0x2f8de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8DE8_0x2f8de8");
#endif

    switch (ctx->pc) {
        case 0x2f8dfcu: goto label_2f8dfc;
        case 0x2f8e20u: goto label_2f8e20;
        case 0x2f8e40u: goto label_2f8e40;
        case 0x2f8e50u: goto label_2f8e50;
        case 0x2f8e64u: goto label_2f8e64;
        case 0x2f8e74u: goto label_2f8e74;
        case 0x2f8e88u: goto label_2f8e88;
        case 0x2f8eb4u: goto label_2f8eb4;
        case 0x2f8f3cu: goto label_2f8f3c;
        default: break;
    }

    ctx->pc = 0x2f8de8u;

    // 0x2f8de8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f8de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f8dec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f8decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f8df0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f8df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f8df4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x2F8DF4u;
    SET_GPR_U32(ctx, 31, 0x2F8DFCu);
    ctx->pc = 0x2F8DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8DF4u;
    // 0x2f8df8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x2F8DF4u, 0x2F8DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8DFCu;
label_2f8dfc:
    // 0x2f8dfc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f8dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2f8e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f8e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e04: 0x8c62064c  lw          $v0, 0x64C($v1)
    ctx->pc = 0x2f8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1612)));
    // 0x2f8e08: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F8E08u;
    {
        const bool branch_taken_0x2f8e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E08u;
        // 0x2f8e0c: 0x2471064c  addiu       $s1, $v1, 0x64C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e08) {
            ctx->pc = 0x2F8EA4u;
            goto label_2f8ea4;
        }
    }
    ctx->pc = 0x2F8E10u;
    // 0x2f8e10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8E10u;
    {
        const bool branch_taken_0x2f8e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e10) {
            ctx->pc = 0x2F8E20u;
            goto label_2f8e20;
        }
    }
    ctx->pc = 0x2F8E18u;
    // 0x2f8e18: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x2F8E18u;
    SET_GPR_U32(ctx, 31, 0x2F8E20u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x2F8E18u, 0x2F8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E20u;
label_2f8e20:
    // 0x2f8e20: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f8e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f8e24: 0x2405430c  addiu       $a1, $zero, 0x430C
    ctx->pc = 0x2f8e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17164));
    // 0x2f8e28: 0x248426d0  addiu       $a0, $a0, 0x26D0
    ctx->pc = 0x2f8e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9936));
    // 0x2f8e2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f8e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e34: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2f8e34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e38: 0xc045286  jal         func_114A18
    ctx->pc = 0x2F8E38u;
    SET_GPR_U32(ctx, 31, 0x2F8E40u);
    ctx->pc = 0x2F8E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E38u;
    // 0x2f8e3c: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A18u, 0x2F8E38u, 0x2F8E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E40u;
label_2f8e40:
    // 0x2f8e40: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2F8E40u;
    {
        const bool branch_taken_0x2f8e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E40u;
        // 0x2f8e44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e40) {
            ctx->pc = 0x2F8F3Cu;
            goto label_2f8f3c;
        }
    }
    ctx->pc = 0x2F8E48u;
    // 0x2f8e48: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x2F8E48u;
    SET_GPR_U32(ctx, 31, 0x2F8E50u);
    ctx->pc = 0x2F8E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E48u;
    // 0x2f8e4c: 0x3c1001cb  lui         $s0, 0x1CB (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)459 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x2F8E48u, 0x2F8E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E50u;
label_2f8e50:
    // 0x2f8e50: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x2f8e50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8e54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8E54u;
    {
        const bool branch_taken_0x2f8e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E54u;
        // 0x2f8e58: 0xfe030670  sd          $v1, 0x670($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1648), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e54) {
            ctx->pc = 0x2F8E64u;
            goto label_2f8e64;
        }
    }
    ctx->pc = 0x2F8E5Cu;
    // 0x2f8e5c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x2F8E5Cu;
    SET_GPR_U32(ctx, 31, 0x2F8E64u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x2F8E5Cu, 0x2F8E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E64u;
label_2f8e64:
    // 0x2f8e64: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2f8e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x2f8e68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e6c: 0xc046278  jal         func_1189E0
    ctx->pc = 0x2F8E6Cu;
    SET_GPR_U32(ctx, 31, 0x2F8E74u);
    ctx->pc = 0x2F8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E6Cu;
    // 0x2f8e70: 0x34a5a120  ori         $a1, $a1, 0xA120 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189E0u, 0x2F8E6Cu, 0x2F8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E74u;
label_2f8e74:
    // 0x2f8e74: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2f8e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2f8e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f8e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e7c: 0x24a58dc8  addiu       $a1, $a1, -0x7238
    ctx->pc = 0x2f8e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938056));
    // 0x2f8e80: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x2F8E80u;
    SET_GPR_U32(ctx, 31, 0x2F8E88u);
    ctx->pc = 0x2F8E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E80u;
    // 0x2f8e84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x2F8E80u, 0x2F8E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E88u;
label_2f8e88:
    // 0x2f8e88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f8e88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e8c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8E8Cu;
    {
        const bool branch_taken_0x2f8e8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F8E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E8Cu;
        // 0x2f8e90: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e8c) {
            ctx->pc = 0x2F8E9Cu;
            goto label_2f8e9c;
        }
    }
    ctx->pc = 0x2F8E94u;
    // 0x2f8e94: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F8E94u;
    {
        const bool branch_taken_0x2f8e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E94u;
        // 0x2f8e98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e94) {
            ctx->pc = 0x2F8F3Cu;
            goto label_2f8f3c;
        }
    }
    ctx->pc = 0x2F8E9Cu;
label_2f8e9c:
    // 0x2f8e9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8E9Cu;
    {
        const bool branch_taken_0x2f8e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E9Cu;
        // 0x2f8ea0: 0xac430648  sw          $v1, 0x648($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e9c) {
            ctx->pc = 0x2F8EB4u;
            goto label_2f8eb4;
        }
    }
    ctx->pc = 0x2F8EA4u;
label_2f8ea4:
    // 0x2f8ea4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8EA4u;
    {
        const bool branch_taken_0x2f8ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EA4u;
        // 0x2f8ea8: 0x3c1001cb  lui         $s0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ea4) {
            ctx->pc = 0x2F8EB4u;
            goto label_2f8eb4;
        }
    }
    ctx->pc = 0x2F8EACu;
    // 0x2f8eac: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x2F8EACu;
    SET_GPR_U32(ctx, 31, 0x2F8EB4u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x2F8EACu, 0x2F8EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EB4u;
label_2f8eb4:
    // 0x2f8eb4: 0x26020670  addiu       $v0, $s0, 0x670
    ctx->pc = 0x2f8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x2f8eb8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f8eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8ebc: 0x904a0007  lbu         $t2, 0x7($v0)
    ctx->pc = 0x2f8ebcu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x2f8ec0: 0x904e0001  lbu         $t6, 0x1($v0)
    ctx->pc = 0x2f8ec0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2f8ec4: 0x904d0006  lbu         $t5, 0x6($v0)
    ctx->pc = 0x2f8ec4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2f8ec8: 0xa2102  srl         $a0, $t2, 4
    ctx->pc = 0x2f8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
    // 0x2f8ecc: 0x904c0005  lbu         $t4, 0x5($v0)
    ctx->pc = 0x2f8eccu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2f8ed0: 0xe4902  srl         $t1, $t6, 4
    ctx->pc = 0x2f8ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x2f8ed4: 0x904b0002  lbu         $t3, 0x2($v0)
    ctx->pc = 0x2f8ed4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2f8ed8: 0xd2902  srl         $a1, $t5, 4
    ctx->pc = 0x2f8ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x2f8edc: 0x90470003  lbu         $a3, 0x3($v0)
    ctx->pc = 0x2f8edcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2f8ee0: 0xc3102  srl         $a2, $t4, 4
    ctx->pc = 0x2f8ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x2f8ee4: 0xb4102  srl         $t0, $t3, 4
    ctx->pc = 0x2f8ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x2f8ee8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2f8ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f8eec: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x2f8eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x2f8ef0: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x2f8ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2f8ef4: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x2f8ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2f8ef8: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x2f8ef8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x2f8efc: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x2f8efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2f8f00: 0x31ad000f  andi        $t5, $t5, 0xF
    ctx->pc = 0x2f8f00u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x2f8f04: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x2f8f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f8f08: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x2f8f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2f8f0c: 0x1034018  mult        $t0, $t0, $v1
    ctx->pc = 0x2f8f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f8f10: 0x318c000f  andi        $t4, $t4, 0xF
    ctx->pc = 0x2f8f10u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x2f8f14: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x2f8f14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2f8f18: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x2f8f18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x2f8f1c: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x2f8f1cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2f8f20: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x2f8f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x2f8f24: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x2f8f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2f8f28: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2f8f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f8f2c: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x2f8f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x2f8f30: 0x12e4821  addu        $t1, $t1, $t6
    ctx->pc = 0x2f8f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x2f8f34: 0xc0be174  jal         func_2F85D0
    ctx->pc = 0x2F8F34u;
    SET_GPR_U32(ctx, 31, 0x2F8F3Cu);
    ctx->pc = 0x2F8F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8F34u;
    // 0x2f8f38: 0x248407d0  addiu       $a0, $a0, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F85D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F85D0u, 0x2F8F34u, 0x2F8F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F3Cu;
label_2f8f3c:
    // 0x2f8f3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f8f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8f40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f8f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8f44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f8f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8f48: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F48u;
        // 0x2f8f4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8F50u;
}
