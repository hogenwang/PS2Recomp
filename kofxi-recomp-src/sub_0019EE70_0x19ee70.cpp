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

// Function: sub_0019EE70
// Address: 0x19ee70 - 0x19ef10
void sub_0019EE70_0x19ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EE70_0x19ee70");
#endif

    switch (ctx->pc) {
        case 0x19eea8u: goto label_19eea8;
        default: break;
    }

    ctx->pc = 0x19ee70u;

    // 0x19ee70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ee74: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ee78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ee7c: 0x2442db64  addiu       $v0, $v0, -0x249C
    ctx->pc = 0x19ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957924));
    // 0x19ee80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ee80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ee84: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x19ee84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19ee88: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x19ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19ee8c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ee90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ee94: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ee98: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ee9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19eea0: 0xc05f104  jal         func_17C410
    ctx->pc = 0x19EEA0u;
    SET_GPR_U32(ctx, 31, 0x19EEA8u);
    ctx->pc = 0x19EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EEA0u;
    // 0x19eea4: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C410u, 0x19EEA0u, 0x19EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EEA8u;
label_19eea8:
    // 0x19eea8: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x19eea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19eeac: 0x50200013  beql        $at, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x19EEACu;
    {
        const bool branch_taken_0x19eeac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eeac) {
            ctx->pc = 0x19EEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EEACu;
            // 0x19eeb0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EEFCu;
            goto label_19eefc;
        }
    }
    ctx->pc = 0x19EEB4u;
    // 0x19eeb4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19eeb8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19eebc: 0x2463b820  addiu       $v1, $v1, -0x47E0
    ctx->pc = 0x19eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948896));
    // 0x19eec0: 0x2484da58  addiu       $a0, $a0, -0x25A8
    ctx->pc = 0x19eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957656));
    // 0x19eec4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19eec8: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x19eec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x19eecc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19eeccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19eed0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19eed4: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x19eed4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19eed8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19eedc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x19eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19eee0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19eee4: 0x2463b6f4  addiu       $v1, $v1, -0x490C
    ctx->pc = 0x19eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948596));
    // 0x19eee8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19eeec: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19eeecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19eef0: 0x34a30002  ori         $v1, $a1, 0x2
    ctx->pc = 0x19eef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x19eef4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x19eef4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19eef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19eef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19eefc:
    // 0x19eefc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19eefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ef00: 0x3e00008  jr          $ra
    ctx->pc = 0x19EF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF00u;
        // 0x19ef04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EF08u;
    // 0x19ef08: 0x0  nop
    ctx->pc = 0x19ef08u;
    // NOP
    // 0x19ef0c: 0x0  nop
    ctx->pc = 0x19ef0cu;
    // NOP
    if (ctx->pc == 0x19ef0cu) { ctx->pc = 0x19ef10u; }
}
