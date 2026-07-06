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

// Function: sub_00342AF0
// Address: 0x342af0 - 0x342b80
void sub_00342AF0_0x342af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342AF0_0x342af0");
#endif

    switch (ctx->pc) {
        case 0x342b68u: goto label_342b68;
        default: break;
    }

    ctx->pc = 0x342af0u;

    // 0x342af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x342af4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x342af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x342af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x342af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x342afc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x342afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x342b00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x342b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x342b04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x342b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342b08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x342B08u;
    {
        const bool branch_taken_0x342b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B08u;
        // 0x342b0c: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342b08) {
            ctx->pc = 0x342B28u;
            goto label_342b28;
        }
    }
    ctx->pc = 0x342B10u;
    // 0x342b10: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x342B10u;
    {
        const bool branch_taken_0x342b10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x342b10) {
            ctx->pc = 0x342B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342B10u;
            // 0x342b14: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342B20u;
            goto label_342b20;
        }
    }
    ctx->pc = 0x342B18u;
    // 0x342b18: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x342b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x342b1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x342b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_342b20:
    // 0x342b20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x342B20u;
    {
        const bool branch_taken_0x342b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B20u;
        // 0x342b24: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342b20) {
            ctx->pc = 0x342B4Cu;
            goto label_342b4c;
        }
    }
    ctx->pc = 0x342B28u;
label_342b28:
    // 0x342b28: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x342b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x342b2c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x342B2Cu;
    {
        const bool branch_taken_0x342b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342b2c) {
            ctx->pc = 0x342B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342B2Cu;
            // 0x342b30: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x342B50u;
            goto label_342b50;
        }
    }
    ctx->pc = 0x342B34u;
    // 0x342b34: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x342b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x342b38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x342b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x342b3c: 0x54a20002  bnel        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x342B3Cu;
    {
        const bool branch_taken_0x342b3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x342b3c) {
            ctx->pc = 0x342B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342B3Cu;
            // 0x342b40: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342B48u;
            goto label_342b48;
        }
    }
    ctx->pc = 0x342B44u;
    // 0x342b44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342b48:
    // 0x342b48: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x342b48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_342b4c:
    // 0x342b4c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x342b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_342b50:
    // 0x342b50: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x342b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x342b54: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x342B54u;
    {
        const bool branch_taken_0x342b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x342b54) {
            ctx->pc = 0x342B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342B54u;
            // 0x342b58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342B6Cu;
            goto label_342b6c;
        }
    }
    ctx->pc = 0x342B5Cu;
    // 0x342b5c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x342b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x342b60: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x342B60u;
    SET_GPR_U32(ctx, 31, 0x342B68u);
    ctx->pc = 0x342B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B60u;
    // 0x342b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x342B60u, 0x342B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B68u;
label_342b68:
    // 0x342b68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342b6c:
    // 0x342b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x342b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342b70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342b74: 0x3e00008  jr          $ra
    ctx->pc = 0x342B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B74u;
        // 0x342b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342B7Cu;
    // 0x342b7c: 0x0  nop
    ctx->pc = 0x342b7cu;
    // NOP
    if (ctx->pc == 0x342b7cu) { ctx->pc = 0x342b80u; }
}
