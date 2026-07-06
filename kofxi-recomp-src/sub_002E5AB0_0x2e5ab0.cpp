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

// Function: sub_002E5AB0
// Address: 0x2e5ab0 - 0x2e5e68
void sub_002E5AB0_0x2e5ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5AB0_0x2e5ab0");
#endif

    switch (ctx->pc) {
        case 0x2e5b60u: goto label_2e5b60;
        case 0x2e5b90u: goto label_2e5b90;
        case 0x2e5bc0u: goto label_2e5bc0;
        case 0x2e5bf4u: goto label_2e5bf4;
        case 0x2e5c30u: goto label_2e5c30;
        case 0x2e5d20u: goto label_2e5d20;
        case 0x2e5d60u: goto label_2e5d60;
        case 0x2e5d98u: goto label_2e5d98;
        case 0x2e5dd4u: goto label_2e5dd4;
        case 0x2e5e10u: goto label_2e5e10;
        default: break;
    }

    ctx->pc = 0x2e5ab0u;

    // 0x2e5ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5ab4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e5ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e5ab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e5ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e5abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e5abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ac0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5AC0u;
    {
        const bool branch_taken_0x2e5ac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AC0u;
        // 0x2e5ac4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ac0) {
            ctx->pc = 0x2E5ADCu;
            goto label_2e5adc;
        }
    }
    ctx->pc = 0x2E5AC8u;
    // 0x2e5ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5acc: 0x10a2006b  beq         $a1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2E5ACCu;
    {
        const bool branch_taken_0x2e5acc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5ACCu;
        // 0x2e5ad0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5acc) {
            ctx->pc = 0x2E5C7Cu;
            goto label_2e5c7c;
        }
    }
    ctx->pc = 0x2E5AD4u;
    // 0x2e5ad4: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2E5AD4u;
    {
        const bool branch_taken_0x2e5ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AD4u;
        // 0x2e5ad8: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ad4) {
            ctx->pc = 0x2E5E5Cu;
            goto label_2e5e5c;
        }
    }
    ctx->pc = 0x2E5ADCu;
label_2e5adc:
    // 0x2e5adc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5ae0: 0x92237e58  lbu         $v1, 0x7E58($s1)
    ctx->pc = 0x2e5ae0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32344)));
    // 0x2e5ae4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5AE4u;
    {
        const bool branch_taken_0x2e5ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AE4u;
        // 0x2e5ae8: 0x2445f1d8  addiu       $a1, $v0, -0xE28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ae4) {
            ctx->pc = 0x2E5AF8u;
            goto label_2e5af8;
        }
    }
    ctx->pc = 0x2E5AECu;
    // 0x2e5aec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5af0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5AF0u;
    {
        const bool branch_taken_0x2e5af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AF0u;
        // 0x2e5af4: 0x2447f210  addiu       $a3, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5af0) {
            ctx->pc = 0x2E5B00u;
            goto label_2e5b00;
        }
    }
    ctx->pc = 0x2E5AF8u;
label_2e5af8:
    // 0x2e5af8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5afc: 0x2447f218  addiu       $a3, $v0, -0xDE8
    ctx->pc = 0x2e5afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5b00:
    // 0x2e5b00: 0x92227e59  lbu         $v0, 0x7E59($s1)
    ctx->pc = 0x2e5b00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32345)));
    // 0x2e5b04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5B04u;
    {
        const bool branch_taken_0x2e5b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B04u;
        // 0x2e5b08: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b04) {
            ctx->pc = 0x2E5B14u;
            goto label_2e5b14;
        }
    }
    ctx->pc = 0x2E5B0Cu;
    // 0x2e5b0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5B0Cu;
    {
        const bool branch_taken_0x2e5b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B0Cu;
        // 0x2e5b10: 0x2448f210  addiu       $t0, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b0c) {
            ctx->pc = 0x2E5B1Cu;
            goto label_2e5b1c;
        }
    }
    ctx->pc = 0x2E5B14u;
label_2e5b14:
    // 0x2e5b14: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5b18: 0x2448f218  addiu       $t0, $v0, -0xDE8
    ctx->pc = 0x2e5b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5b1c:
    // 0x2e5b1c: 0x92227e5a  lbu         $v0, 0x7E5A($s1)
    ctx->pc = 0x2e5b1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32346)));
    // 0x2e5b20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5B20u;
    {
        const bool branch_taken_0x2e5b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B20u;
        // 0x2e5b24: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b20) {
            ctx->pc = 0x2E5B30u;
            goto label_2e5b30;
        }
    }
    ctx->pc = 0x2E5B28u;
    // 0x2e5b28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5B28u;
    {
        const bool branch_taken_0x2e5b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B28u;
        // 0x2e5b2c: 0x2449f210  addiu       $t1, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b28) {
            ctx->pc = 0x2E5B38u;
            goto label_2e5b38;
        }
    }
    ctx->pc = 0x2E5B30u;
label_2e5b30:
    // 0x2e5b30: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5b34: 0x2449f218  addiu       $t1, $v0, -0xDE8
    ctx->pc = 0x2e5b34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5b38:
    // 0x2e5b38: 0x92227e5b  lbu         $v0, 0x7E5B($s1)
    ctx->pc = 0x2e5b38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32347)));
    // 0x2e5b3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5B3Cu;
    {
        const bool branch_taken_0x2e5b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B3Cu;
        // 0x2e5b40: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b3c) {
            ctx->pc = 0x2E5B4Cu;
            goto label_2e5b4c;
        }
    }
    ctx->pc = 0x2E5B44u;
    // 0x2e5b44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5B44u;
    {
        const bool branch_taken_0x2e5b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B44u;
        // 0x2e5b48: 0x244af210  addiu       $t2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b44) {
            ctx->pc = 0x2E5B54u;
            goto label_2e5b54;
        }
    }
    ctx->pc = 0x2E5B4Cu;
label_2e5b4c:
    // 0x2e5b4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5b50: 0x244af218  addiu       $t2, $v0, -0xDE8
    ctx->pc = 0x2e5b50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5b54:
    // 0x2e5b54: 0x8e267e44  lw          $a2, 0x7E44($s1)
    ctx->pc = 0x2e5b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32324)));
    // 0x2e5b58: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5B58u;
    SET_GPR_U32(ctx, 31, 0x2E5B60u);
    ctx->pc = 0x2E5B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B58u;
    // 0x2e5b5c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5B58u, 0x2E5B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B60u;
label_2e5b60:
    // 0x2e5b60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5b64: 0x92237e48  lbu         $v1, 0x7E48($s1)
    ctx->pc = 0x2e5b64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32328)));
    // 0x2e5b68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5B68u;
    {
        const bool branch_taken_0x2e5b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B68u;
        // 0x2e5b6c: 0x2445f220  addiu       $a1, $v0, -0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b68) {
            ctx->pc = 0x2E5B7Cu;
            goto label_2e5b7c;
        }
    }
    ctx->pc = 0x2E5B70u;
    // 0x2e5b70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5b74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5B74u;
    {
        const bool branch_taken_0x2e5b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B74u;
        // 0x2e5b78: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b74) {
            ctx->pc = 0x2E5B84u;
            goto label_2e5b84;
        }
    }
    ctx->pc = 0x2E5B7Cu;
label_2e5b7c:
    // 0x2e5b7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5b80: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e5b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5b84:
    // 0x2e5b84: 0x8e277e4c  lw          $a3, 0x7E4C($s1)
    ctx->pc = 0x2e5b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32332)));
    // 0x2e5b88: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5B88u;
    SET_GPR_U32(ctx, 31, 0x2E5B90u);
    ctx->pc = 0x2E5B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B88u;
    // 0x2e5b8c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5B88u, 0x2E5B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B90u;
label_2e5b90:
    // 0x2e5b90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5b94: 0x92237e50  lbu         $v1, 0x7E50($s1)
    ctx->pc = 0x2e5b94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32336)));
    // 0x2e5b98: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5B98u;
    {
        const bool branch_taken_0x2e5b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B98u;
        // 0x2e5b9c: 0x2445f240  addiu       $a1, $v0, -0xDC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b98) {
            ctx->pc = 0x2E5BACu;
            goto label_2e5bac;
        }
    }
    ctx->pc = 0x2E5BA0u;
    // 0x2e5ba0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5ba4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5BA4u;
    {
        const bool branch_taken_0x2e5ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BA4u;
        // 0x2e5ba8: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ba4) {
            ctx->pc = 0x2E5BB4u;
            goto label_2e5bb4;
        }
    }
    ctx->pc = 0x2E5BACu;
label_2e5bac:
    // 0x2e5bac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5bb0: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e5bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5bb4:
    // 0x2e5bb4: 0x8e277e54  lw          $a3, 0x7E54($s1)
    ctx->pc = 0x2e5bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32340)));
    // 0x2e5bb8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5BB8u;
    SET_GPR_U32(ctx, 31, 0x2E5BC0u);
    ctx->pc = 0x2E5BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5BB8u;
    // 0x2e5bbc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5BB8u, 0x2E5BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5BC0u;
label_2e5bc0:
    // 0x2e5bc0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5bc4: 0x92237e5c  lbu         $v1, 0x7E5C($s1)
    ctx->pc = 0x2e5bc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32348)));
    // 0x2e5bc8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5BC8u;
    {
        const bool branch_taken_0x2e5bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BC8u;
        // 0x2e5bcc: 0x2445f260  addiu       $a1, $v0, -0xDA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bc8) {
            ctx->pc = 0x2E5BDCu;
            goto label_2e5bdc;
        }
    }
    ctx->pc = 0x2E5BD0u;
    // 0x2e5bd0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5bd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5BD4u;
    {
        const bool branch_taken_0x2e5bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BD4u;
        // 0x2e5bd8: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bd4) {
            ctx->pc = 0x2E5BE4u;
            goto label_2e5be4;
        }
    }
    ctx->pc = 0x2E5BDCu;
label_2e5bdc:
    // 0x2e5bdc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5be0: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e5be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5be4:
    // 0x2e5be4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5be8: 0x26277e5d  addiu       $a3, $s1, 0x7E5D
    ctx->pc = 0x2e5be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32349));
    // 0x2e5bec: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5BECu;
    SET_GPR_U32(ctx, 31, 0x2E5BF4u);
    ctx->pc = 0x2E5BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5BECu;
    // 0x2e5bf0: 0x26287f5d  addiu       $t0, $s1, 0x7F5D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32605));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5BECu, 0x2E5BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5BF4u;
label_2e5bf4:
    // 0x2e5bf4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e5bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e5bf8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2e5bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2e5bfc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5c00: 0x9043005d  lbu         $v1, 0x5D($v0)
    ctx->pc = 0x2e5c00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 93)));
    // 0x2e5c04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5C04u;
    {
        const bool branch_taken_0x2e5c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C04u;
        // 0x2e5c08: 0x2485f288  addiu       $a1, $a0, -0xD78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c04) {
            ctx->pc = 0x2E5C18u;
            goto label_2e5c18;
        }
    }
    ctx->pc = 0x2E5C0Cu;
    // 0x2e5c0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5c10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5C10u;
    {
        const bool branch_taken_0x2e5c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C10u;
        // 0x2e5c14: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c10) {
            ctx->pc = 0x2E5C20u;
            goto label_2e5c20;
        }
    }
    ctx->pc = 0x2E5C18u;
label_2e5c18:
    // 0x2e5c18: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5c1c: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e5c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5c20:
    // 0x2e5c20: 0x3407805e  ori         $a3, $zero, 0x805E
    ctx->pc = 0x2e5c20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32862);
    // 0x2e5c24: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5c28: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5C28u;
    SET_GPR_U32(ctx, 31, 0x2E5C30u);
    ctx->pc = 0x2E5C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C28u;
    // 0x2e5c2c: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5C28u, 0x2E5C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C30u;
label_2e5c30:
    // 0x2e5c30: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e5c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e5c34: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2e5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2e5c38: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5c3c: 0x9043015e  lbu         $v1, 0x15E($v0)
    ctx->pc = 0x2e5c3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 350)));
    // 0x2e5c40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5C40u;
    {
        const bool branch_taken_0x2e5c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C40u;
        // 0x2e5c44: 0x2485f2b8  addiu       $a1, $a0, -0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c40) {
            ctx->pc = 0x2E5C54u;
            goto label_2e5c54;
        }
    }
    ctx->pc = 0x2E5C48u;
    // 0x2e5c48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5c4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5C4Cu;
    {
        const bool branch_taken_0x2e5c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C4Cu;
        // 0x2e5c50: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c4c) {
            ctx->pc = 0x2E5C5Cu;
            goto label_2e5c5c;
        }
    }
    ctx->pc = 0x2E5C54u;
label_2e5c54:
    // 0x2e5c54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5c58: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e5c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5c5c:
    // 0x2e5c5c: 0x3407815f  ori         $a3, $zero, 0x815F
    ctx->pc = 0x2e5c5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33119);
    // 0x2e5c60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e5c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5c64: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x2e5c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2e5c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5c6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e5c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5c70: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5c74: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2E5C74u;
    ctx->pc = 0x2E5C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C74u;
    // 0x2e5c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E5C7Cu;
label_2e5c7c:
    // 0x2e5c7c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e5c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e5c80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e5c84: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2e5c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5c88: 0x90820274  lbu         $v0, 0x274($a0)
    ctx->pc = 0x2e5c88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2e5c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5C8Cu;
    {
        const bool branch_taken_0x2e5c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C8Cu;
        // 0x2e5c90: 0x2465f1d8  addiu       $a1, $v1, -0xE28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c8c) {
            ctx->pc = 0x2E5CA0u;
            goto label_2e5ca0;
        }
    }
    ctx->pc = 0x2E5C94u;
    // 0x2e5c94: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5C98u;
    {
        const bool branch_taken_0x2e5c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C98u;
        // 0x2e5c9c: 0x2447f210  addiu       $a3, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c98) {
            ctx->pc = 0x2E5CA8u;
            goto label_2e5ca8;
        }
    }
    ctx->pc = 0x2E5CA0u;
label_2e5ca0:
    // 0x2e5ca0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5ca4: 0x2447f218  addiu       $a3, $v0, -0xDE8
    ctx->pc = 0x2e5ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5ca8:
    // 0x2e5ca8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e5ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e5cac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5cb0: 0x90430275  lbu         $v1, 0x275($v0)
    ctx->pc = 0x2e5cb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 629)));
    // 0x2e5cb4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5CB4u;
    {
        const bool branch_taken_0x2e5cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CB4u;
        // 0x2e5cb8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cb4) {
            ctx->pc = 0x2E5CC4u;
            goto label_2e5cc4;
        }
    }
    ctx->pc = 0x2E5CBCu;
    // 0x2e5cbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5CBCu;
    {
        const bool branch_taken_0x2e5cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CBCu;
        // 0x2e5cc0: 0x2448f210  addiu       $t0, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cbc) {
            ctx->pc = 0x2E5CCCu;
            goto label_2e5ccc;
        }
    }
    ctx->pc = 0x2E5CC4u;
label_2e5cc4:
    // 0x2e5cc4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5cc8: 0x2448f218  addiu       $t0, $v0, -0xDE8
    ctx->pc = 0x2e5cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5ccc:
    // 0x2e5ccc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e5cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e5cd0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5cd4: 0x90430276  lbu         $v1, 0x276($v0)
    ctx->pc = 0x2e5cd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 630)));
    // 0x2e5cd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5CD8u;
    {
        const bool branch_taken_0x2e5cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CD8u;
        // 0x2e5cdc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cd8) {
            ctx->pc = 0x2E5CE8u;
            goto label_2e5ce8;
        }
    }
    ctx->pc = 0x2E5CE0u;
    // 0x2e5ce0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5CE0u;
    {
        const bool branch_taken_0x2e5ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CE0u;
        // 0x2e5ce4: 0x2449f210  addiu       $t1, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ce0) {
            ctx->pc = 0x2E5CF0u;
            goto label_2e5cf0;
        }
    }
    ctx->pc = 0x2E5CE8u;
label_2e5ce8:
    // 0x2e5ce8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5cec: 0x2449f218  addiu       $t1, $v0, -0xDE8
    ctx->pc = 0x2e5cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5cf0:
    // 0x2e5cf0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e5cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e5cf4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5cf8: 0x90430277  lbu         $v1, 0x277($v0)
    ctx->pc = 0x2e5cf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 631)));
    // 0x2e5cfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5CFCu;
    {
        const bool branch_taken_0x2e5cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CFCu;
        // 0x2e5d00: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cfc) {
            ctx->pc = 0x2E5D0Cu;
            goto label_2e5d0c;
        }
    }
    ctx->pc = 0x2E5D04u;
    // 0x2e5d04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5D04u;
    {
        const bool branch_taken_0x2e5d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D04u;
        // 0x2e5d08: 0x244af210  addiu       $t2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d04) {
            ctx->pc = 0x2E5D14u;
            goto label_2e5d14;
        }
    }
    ctx->pc = 0x2E5D0Cu;
label_2e5d0c:
    // 0x2e5d0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5d10: 0x244af218  addiu       $t2, $v0, -0xDE8
    ctx->pc = 0x2e5d10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5d14:
    // 0x2e5d14: 0x8c860260  lw          $a2, 0x260($a0)
    ctx->pc = 0x2e5d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
    // 0x2e5d18: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5D18u;
    SET_GPR_U32(ctx, 31, 0x2E5D20u);
    ctx->pc = 0x2E5D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D18u;
    // 0x2e5d1c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5D18u, 0x2E5D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D20u;
label_2e5d20:
    // 0x2e5d20: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e5d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e5d24: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2e5d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2e5d28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5d2c: 0x90430264  lbu         $v1, 0x264($v0)
    ctx->pc = 0x2e5d2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x2e5d30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5D30u;
    {
        const bool branch_taken_0x2e5d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D30u;
        // 0x2e5d34: 0x2485f220  addiu       $a1, $a0, -0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d30) {
            ctx->pc = 0x2E5D44u;
            goto label_2e5d44;
        }
    }
    ctx->pc = 0x2E5D38u;
    // 0x2e5d38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5d3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5D3Cu;
    {
        const bool branch_taken_0x2e5d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D3Cu;
        // 0x2e5d40: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d3c) {
            ctx->pc = 0x2E5D4Cu;
            goto label_2e5d4c;
        }
    }
    ctx->pc = 0x2E5D44u;
label_2e5d44:
    // 0x2e5d44: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5d48: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e5d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5d4c:
    // 0x2e5d4c: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2e5d4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e5d50: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5d54: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x2e5d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e5d58: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5D58u;
    SET_GPR_U32(ctx, 31, 0x2E5D60u);
    ctx->pc = 0x2E5D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D58u;
    // 0x2e5d5c: 0x8e070268  lw          $a3, 0x268($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5D58u, 0x2E5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D60u;
label_2e5d60:
    // 0x2e5d60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5d64: 0x9203026c  lbu         $v1, 0x26C($s0)
    ctx->pc = 0x2e5d64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x2e5d68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5D68u;
    {
        const bool branch_taken_0x2e5d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D68u;
        // 0x2e5d6c: 0x2445f240  addiu       $a1, $v0, -0xDC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d68) {
            ctx->pc = 0x2E5D7Cu;
            goto label_2e5d7c;
        }
    }
    ctx->pc = 0x2E5D70u;
    // 0x2e5d70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5d74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5D74u;
    {
        const bool branch_taken_0x2e5d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D74u;
        // 0x2e5d78: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d74) {
            ctx->pc = 0x2E5D84u;
            goto label_2e5d84;
        }
    }
    ctx->pc = 0x2E5D7Cu;
label_2e5d7c:
    // 0x2e5d7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5d80: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e5d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5d84:
    // 0x2e5d84: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2e5d84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e5d88: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5d8c: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x2e5d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e5d90: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5D90u;
    SET_GPR_U32(ctx, 31, 0x2E5D98u);
    ctx->pc = 0x2E5D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D90u;
    // 0x2e5d94: 0x8e070270  lw          $a3, 0x270($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5D90u, 0x2E5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D98u;
label_2e5d98:
    // 0x2e5d98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5d9c: 0x92030278  lbu         $v1, 0x278($s0)
    ctx->pc = 0x2e5d9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2e5da0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5DA0u;
    {
        const bool branch_taken_0x2e5da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DA0u;
        // 0x2e5da4: 0x2445f260  addiu       $a1, $v0, -0xDA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5da0) {
            ctx->pc = 0x2E5DB4u;
            goto label_2e5db4;
        }
    }
    ctx->pc = 0x2E5DA8u;
    // 0x2e5da8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5dac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5DACu;
    {
        const bool branch_taken_0x2e5dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DACu;
        // 0x2e5db0: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5dac) {
            ctx->pc = 0x2E5DBCu;
            goto label_2e5dbc;
        }
    }
    ctx->pc = 0x2E5DB4u;
label_2e5db4:
    // 0x2e5db4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5db8: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e5db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5dbc:
    // 0x2e5dbc: 0x34078279  ori         $a3, $zero, 0x8279
    ctx->pc = 0x2e5dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33401);
    // 0x2e5dc0: 0x34088379  ori         $t0, $zero, 0x8379
    ctx->pc = 0x2e5dc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33657);
    // 0x2e5dc4: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x2e5dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2e5dc8: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x2e5dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2e5dcc: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5DCCu;
    SET_GPR_U32(ctx, 31, 0x2E5DD4u);
    ctx->pc = 0x2E5DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5DCCu;
    // 0x2e5dd0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5DCCu, 0x2E5DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DD4u;
label_2e5dd4:
    // 0x2e5dd4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e5dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e5dd8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2e5dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2e5ddc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5de0: 0x90430479  lbu         $v1, 0x479($v0)
    ctx->pc = 0x2e5de0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1145)));
    // 0x2e5de4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5DE4u;
    {
        const bool branch_taken_0x2e5de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DE4u;
        // 0x2e5de8: 0x2485f288  addiu       $a1, $a0, -0xD78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5de4) {
            ctx->pc = 0x2E5DF8u;
            goto label_2e5df8;
        }
    }
    ctx->pc = 0x2E5DECu;
    // 0x2e5dec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5df0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5DF0u;
    {
        const bool branch_taken_0x2e5df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DF0u;
        // 0x2e5df4: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5df0) {
            ctx->pc = 0x2E5E00u;
            goto label_2e5e00;
        }
    }
    ctx->pc = 0x2E5DF8u;
label_2e5df8:
    // 0x2e5df8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5dfc: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e5dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5e00:
    // 0x2e5e00: 0x3407847a  ori         $a3, $zero, 0x847A
    ctx->pc = 0x2e5e00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33914);
    // 0x2e5e04: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5e08: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E5E08u;
    SET_GPR_U32(ctx, 31, 0x2E5E10u);
    ctx->pc = 0x2E5E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E08u;
    // 0x2e5e0c: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E5E08u, 0x2E5E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E10u;
label_2e5e10:
    // 0x2e5e10: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e5e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e5e14: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2e5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2e5e18: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e5e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5e1c: 0x9043057a  lbu         $v1, 0x57A($v0)
    ctx->pc = 0x2e5e1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1402)));
    // 0x2e5e20: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5E20u;
    {
        const bool branch_taken_0x2e5e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E20u;
        // 0x2e5e24: 0x2485f2b8  addiu       $a1, $a0, -0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e20) {
            ctx->pc = 0x2E5E34u;
            goto label_2e5e34;
        }
    }
    ctx->pc = 0x2E5E28u;
    // 0x2e5e28: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5e2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5E2Cu;
    {
        const bool branch_taken_0x2e5e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E2Cu;
        // 0x2e5e30: 0x2446f210  addiu       $a2, $v0, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e2c) {
            ctx->pc = 0x2E5E3Cu;
            goto label_2e5e3c;
        }
    }
    ctx->pc = 0x2E5E34u;
label_2e5e34:
    // 0x2e5e34: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5e38: 0x2446f218  addiu       $a2, $v0, -0xDE8
    ctx->pc = 0x2e5e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
label_2e5e3c:
    // 0x2e5e3c: 0x3407857b  ori         $a3, $zero, 0x857B
    ctx->pc = 0x2e5e3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34171);
    // 0x2e5e40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e5e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5e44: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x2e5e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2e5e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5e4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e5e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5e50: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e5e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5e54: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2E5E54u;
    ctx->pc = 0x2E5E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E54u;
    // 0x2e5e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E5E5Cu;
label_2e5e5c:
    // 0x2e5e5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5e60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E60u;
        // 0x2e5e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5E68u;
}
