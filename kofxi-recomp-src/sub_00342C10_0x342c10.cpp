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

// Function: sub_00342C10
// Address: 0x342c10 - 0x342ca0
void sub_00342C10_0x342c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342C10_0x342c10");
#endif

    switch (ctx->pc) {
        case 0x342c80u: goto label_342c80;
        default: break;
    }

    ctx->pc = 0x342c10u;

    // 0x342c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x342c14: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x342c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x342c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x342c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x342c1c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x342c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x342c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x342c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x342c24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x342c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x342C28u;
    {
        const bool branch_taken_0x342c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C28u;
        // 0x342c2c: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342c28) {
            ctx->pc = 0x342C44u;
            goto label_342c44;
        }
    }
    ctx->pc = 0x342C30u;
    // 0x342c30: 0x54a00002  bnel        $a1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x342C30u;
    {
        const bool branch_taken_0x342c30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x342c30) {
            ctx->pc = 0x342C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342C30u;
            // 0x342c34: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342C3Cu;
            goto label_342c3c;
        }
    }
    ctx->pc = 0x342C38u;
    // 0x342c38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342c3c:
    // 0x342c3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x342C3Cu;
    {
        const bool branch_taken_0x342c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C3Cu;
        // 0x342c40: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342c3c) {
            ctx->pc = 0x342C64u;
            goto label_342c64;
        }
    }
    ctx->pc = 0x342C44u;
label_342c44:
    // 0x342c44: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x342c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x342c48: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x342C48u;
    {
        const bool branch_taken_0x342c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342c48) {
            ctx->pc = 0x342C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342C48u;
            // 0x342c4c: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x342C68u;
            goto label_342c68;
        }
    }
    ctx->pc = 0x342C50u;
    // 0x342c50: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x342c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x342c54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x342c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x342c58: 0x54a20001  bnel        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x342C58u;
    {
        const bool branch_taken_0x342c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x342c58) {
            ctx->pc = 0x342C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342C58u;
            // 0x342c5c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342C60u;
            goto label_342c60;
        }
    }
    ctx->pc = 0x342C60u;
label_342c60:
    // 0x342c60: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x342c60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_342c64:
    // 0x342c64: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x342c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_342c68:
    // 0x342c68: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x342c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x342c6c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x342C6Cu;
    {
        const bool branch_taken_0x342c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x342c6c) {
            ctx->pc = 0x342C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342C6Cu;
            // 0x342c70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342C84u;
            goto label_342c84;
        }
    }
    ctx->pc = 0x342C74u;
    // 0x342c74: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x342c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x342c78: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x342C78u;
    SET_GPR_U32(ctx, 31, 0x342C80u);
    ctx->pc = 0x342C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342C78u;
    // 0x342c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x342C78u, 0x342C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342C80u;
label_342c80:
    // 0x342c80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342c84:
    // 0x342c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x342c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x342C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C8Cu;
        // 0x342c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342C94u;
    // 0x342c94: 0x0  nop
    ctx->pc = 0x342c94u;
    // NOP
    // 0x342c98: 0x0  nop
    ctx->pc = 0x342c98u;
    // NOP
    // 0x342c9c: 0x0  nop
    ctx->pc = 0x342c9cu;
    // NOP
}
