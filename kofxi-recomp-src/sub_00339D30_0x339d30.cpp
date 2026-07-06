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

// Function: sub_00339D30
// Address: 0x339d30 - 0x339e90
void sub_00339D30_0x339d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339D30_0x339d30");
#endif

    switch (ctx->pc) {
        case 0x339df4u: goto label_339df4;
        case 0x339e0cu: goto label_339e0c;
        case 0x339e2cu: goto label_339e2c;
        case 0x339e44u: goto label_339e44;
        case 0x339e68u: goto label_339e68;
        case 0x339e7cu: goto label_339e7c;
        default: break;
    }

    ctx->pc = 0x339d30u;

    // 0x339d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339d34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x339d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x339d38: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x339D38u;
    {
        const bool branch_taken_0x339d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x339D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D38u;
        // 0x339d3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d38) {
            ctx->pc = 0x339DCCu;
            goto label_339dcc;
        }
    }
    ctx->pc = 0x339D40u;
    // 0x339d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x339d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339d44: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x339D44u;
    {
        const bool branch_taken_0x339d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x339d44) {
            ctx->pc = 0x339D94u;
            goto label_339d94;
        }
    }
    ctx->pc = 0x339D4Cu;
    // 0x339d4c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x339D4Cu;
    {
        const bool branch_taken_0x339d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d4c) {
            ctx->pc = 0x339D5Cu;
            goto label_339d5c;
        }
    }
    ctx->pc = 0x339D54u;
    // 0x339d54: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x339D54u;
    {
        const bool branch_taken_0x339d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d54) {
            ctx->pc = 0x339E4Cu;
            goto label_339e4c;
        }
    }
    ctx->pc = 0x339D5Cu;
label_339d5c:
    // 0x339d5c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339d60: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x339d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x339d64: 0x8c44e8f0  lw          $a0, -0x1710($v0)
    ctx->pc = 0x339d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
    // 0x339d68: 0x24632830  addiu       $v1, $v1, 0x2830
    ctx->pc = 0x339d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10288));
    // 0x339d6c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x339d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x339d70: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x339d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x339d74: 0x24422834  addiu       $v0, $v0, 0x2834
    ctx->pc = 0x339d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10292));
    // 0x339d78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x339d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x339d7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x339d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x339d80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x339d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x339d84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339d88: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x339d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x339d8c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x339D8Cu;
    {
        const bool branch_taken_0x339d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D8Cu;
        // 0x339d90: 0x2446ffe8  addiu       $a2, $v0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d8c) {
            ctx->pc = 0x339E4Cu;
            goto label_339e4c;
        }
    }
    ctx->pc = 0x339D94u;
label_339d94:
    // 0x339d94: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339d98: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x339d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x339d9c: 0x8c44e8f0  lw          $a0, -0x1710($v0)
    ctx->pc = 0x339d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
    // 0x339da0: 0x24632830  addiu       $v1, $v1, 0x2830
    ctx->pc = 0x339da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10288));
    // 0x339da4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x339da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x339da8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x339da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x339dac: 0x24422834  addiu       $v0, $v0, 0x2834
    ctx->pc = 0x339dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10292));
    // 0x339db0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x339db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x339db4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x339db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x339db8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x339db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x339dbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339dc0: 0x2465ffa0  addiu       $a1, $v1, -0x60
    ctx->pc = 0x339dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
    // 0x339dc4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x339DC4u;
    {
        const bool branch_taken_0x339dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DC4u;
        // 0x339dc8: 0x2446ffe8  addiu       $a2, $v0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339dc4) {
            ctx->pc = 0x339E4Cu;
            goto label_339e4c;
        }
    }
    ctx->pc = 0x339DCCu;
label_339dcc:
    // 0x339dcc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339dd0: 0x8c42e8e8  lw          $v0, -0x1718($v0)
    ctx->pc = 0x339dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
    // 0x339dd4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x339DD4u;
    {
        const bool branch_taken_0x339dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339dd4) {
            ctx->pc = 0x339E14u;
            goto label_339e14;
        }
    }
    ctx->pc = 0x339DDCu;
    // 0x339ddc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339de0: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x339de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x339de4: 0x240500dc  addiu       $a1, $zero, 0xDC
    ctx->pc = 0x339de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x339de8: 0x24c64d68  addiu       $a2, $a2, 0x4D68
    ctx->pc = 0x339de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19816));
    // 0x339dec: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x339DECu;
    SET_GPR_U32(ctx, 31, 0x339DF4u);
    ctx->pc = 0x339DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339DECu;
    // 0x339df0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x339DECu, 0x339DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339DF4u;
label_339df4:
    // 0x339df4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339df8: 0x2404010a  addiu       $a0, $zero, 0x10A
    ctx->pc = 0x339df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x339dfc: 0x240500dc  addiu       $a1, $zero, 0xDC
    ctx->pc = 0x339dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x339e00: 0x24c64d70  addiu       $a2, $a2, 0x4D70
    ctx->pc = 0x339e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19824));
    // 0x339e04: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x339E04u;
    SET_GPR_U32(ctx, 31, 0x339E0Cu);
    ctx->pc = 0x339E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339E04u;
    // 0x339e08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x339E04u, 0x339E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339E0Cu;
label_339e0c:
    // 0x339e0c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x339E0Cu;
    {
        const bool branch_taken_0x339e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339e0c) {
            ctx->pc = 0x339E44u;
            goto label_339e44;
        }
    }
    ctx->pc = 0x339E14u;
label_339e14:
    // 0x339e14: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339e18: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x339e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x339e1c: 0x240500dc  addiu       $a1, $zero, 0xDC
    ctx->pc = 0x339e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x339e20: 0x24c64d78  addiu       $a2, $a2, 0x4D78
    ctx->pc = 0x339e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19832));
    // 0x339e24: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x339E24u;
    SET_GPR_U32(ctx, 31, 0x339E2Cu);
    ctx->pc = 0x339E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339E24u;
    // 0x339e28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x339E24u, 0x339E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339E2Cu;
label_339e2c:
    // 0x339e2c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339e30: 0x2404010a  addiu       $a0, $zero, 0x10A
    ctx->pc = 0x339e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x339e34: 0x240500dc  addiu       $a1, $zero, 0xDC
    ctx->pc = 0x339e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x339e38: 0x24c64d80  addiu       $a2, $a2, 0x4D80
    ctx->pc = 0x339e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19840));
    // 0x339e3c: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x339E3Cu;
    SET_GPR_U32(ctx, 31, 0x339E44u);
    ctx->pc = 0x339E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339E3Cu;
    // 0x339e40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x339E3Cu, 0x339E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339E44u;
label_339e44:
    // 0x339e44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x339E44u;
    {
        const bool branch_taken_0x339e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E44u;
        // 0x339e48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339e44) {
            ctx->pc = 0x339E80u;
            goto label_339e80;
        }
    }
    ctx->pc = 0x339E4Cu;
label_339e4c:
    // 0x339e4c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339e50: 0x8c42e8e8  lw          $v0, -0x1718($v0)
    ctx->pc = 0x339e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
    // 0x339e54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x339E54u;
    {
        const bool branch_taken_0x339e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339e54) {
            ctx->pc = 0x339E70u;
            goto label_339e70;
        }
    }
    ctx->pc = 0x339E5Cu;
    // 0x339e5c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x339e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x339e60: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x339E60u;
    SET_GPR_U32(ctx, 31, 0x339E68u);
    ctx->pc = 0x339E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339E60u;
    // 0x339e64: 0x24842640  addiu       $a0, $a0, 0x2640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x339E60u, 0x339E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339E68u;
label_339e68:
    // 0x339e68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x339E68u;
    {
        const bool branch_taken_0x339e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339e68) {
            ctx->pc = 0x339E7Cu;
            goto label_339e7c;
        }
    }
    ctx->pc = 0x339E70u;
label_339e70:
    // 0x339e70: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x339e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x339e74: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x339E74u;
    SET_GPR_U32(ctx, 31, 0x339E7Cu);
    ctx->pc = 0x339E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339E74u;
    // 0x339e78: 0x2484264c  addiu       $a0, $a0, 0x264C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9804));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x339E74u, 0x339E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339E7Cu;
label_339e7c:
    // 0x339e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339e80:
    // 0x339e80: 0x3e00008  jr          $ra
    ctx->pc = 0x339E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E80u;
        // 0x339e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339E88u;
    // 0x339e88: 0x0  nop
    ctx->pc = 0x339e88u;
    // NOP
    // 0x339e8c: 0x0  nop
    ctx->pc = 0x339e8cu;
    // NOP
}
