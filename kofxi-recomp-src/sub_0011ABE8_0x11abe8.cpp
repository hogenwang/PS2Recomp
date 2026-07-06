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

// Function: sub_0011ABE8
// Address: 0x11abe8 - 0x11acc0
void sub_0011ABE8_0x11abe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ABE8_0x11abe8");
#endif

    switch (ctx->pc) {
        case 0x11ac44u: goto label_11ac44;
        case 0x11ac48u: goto label_11ac48;
        default: break;
    }

    ctx->pc = 0x11abe8u;

    // 0x11abe8: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11abe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11abec: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11abecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11abf0: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11abf0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11abf4: 0x1ee5824  and         $t3, $t7, $t6
    ctx->pc = 0x11abf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x11abf8: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x11abf8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abfc: 0xb7dc2  srl         $t7, $t3, 23
    ctx->pc = 0x11abfcu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 11), 23));
    // 0x11ac00: 0x25edff81  addiu       $t5, $t7, -0x7F
    ctx->pc = 0x11ac00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967169));
    // 0x11ac04: 0x29ae0017  slti        $t6, $t5, 0x17
    ctx->pc = 0x11ac04u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x11ac08: 0x11c0000f  beqz        $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x11AC08u;
    {
        const bool branch_taken_0x11ac08 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC08u;
        // 0x11ac0c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac08) {
            ctx->pc = 0x11AC48u;
            goto label_11ac48;
        }
    }
    ctx->pc = 0x11AC10u;
    // 0x11ac10: 0x5a10015  bgez        $t5, . + 4 + (0x15 << 2)
    ctx->pc = 0x11AC10u;
    {
        const bool branch_taken_0x11ac10 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x11AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC10u;
        // 0x11ac14: 0x3c0f007f  lui         $t7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac10) {
            ctx->pc = 0x11AC68u;
            goto label_11ac68;
        }
    }
    ctx->pc = 0x11AC18u;
    // 0x11ac18: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11ac18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11ac1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11ac1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ac20: 0x25efb16c  addiu       $t7, $t7, -0x4E94
    ctx->pc = 0x11ac20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947180));
    // 0x11ac24: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ac24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ac28: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11ac28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11ac2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11ac2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ac30: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x11AC30u;
    {
        const bool branch_taken_0x11ac30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC30u;
        // 0x11ac34: 0x448c0000  mtc1        $t4, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac30) {
            ctx->pc = 0x11AC48u;
            goto label_11ac48;
        }
    }
    ctx->pc = 0x11AC38u;
    // 0x11ac38: 0x5800005  bltz        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AC38u;
    {
        const bool branch_taken_0x11ac38 = (GPR_S32(ctx, 12) < 0);
        ctx->pc = 0x11AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC38u;
        // 0x11ac3c: 0x3c0f007f  lui         $t7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac38) {
            ctx->pc = 0x11AC50u;
            goto label_11ac50;
        }
    }
    ctx->pc = 0x11AC40u;
    // 0x11ac40: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x11ac40u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ac44:
    // 0x11ac44: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x11ac44u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11ac48:
    // 0x11ac48: 0x3e00008  jr          $ra
    ctx->pc = 0x11AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AC50u;
label_11ac50:
    // 0x11ac50: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11ac50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11ac54: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x11ac54u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x11ac58: 0x55e0fffa  bnel        $t7, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11AC58u;
    {
        const bool branch_taken_0x11ac58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ac58) {
            ctx->pc = 0x11AC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AC58u;
            // 0x11ac5c: 0x3c0cbf80  lui         $t4, 0xBF80 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)49024 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AC44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ac44;
        }
    }
    ctx->pc = 0x11AC60u;
    // 0x11ac60: 0x3e00008  jr          $ra
    ctx->pc = 0x11AC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC60u;
        // 0x11ac64: 0x448c0000  mtc1        $t4, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AC68u;
label_11ac68:
    // 0x11ac68: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11ac68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11ac6c: 0x1af5807  srav        $t3, $t7, $t5
    ctx->pc = 0x11ac6cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x11ac70: 0x18b7024  and         $t6, $t4, $t3
    ctx->pc = 0x11ac70u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x11ac74: 0x11c0fff4  beqz        $t6, . + 4 + (-0xC << 2)
    ctx->pc = 0x11AC74u;
    {
        const bool branch_taken_0x11ac74 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC74u;
        // 0x11ac78: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac74) {
            ctx->pc = 0x11AC48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ac48;
        }
    }
    ctx->pc = 0x11AC7Cu;
    // 0x11ac7c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11ac7cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11ac80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11ac80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ac84: 0x25efb16c  addiu       $t7, $t7, -0x4E94
    ctx->pc = 0x11ac84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947180));
    // 0x11ac88: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ac88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ac8c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11ac8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11ac90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11ac90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ac94: 0x4500ffec  bc1f        . + 4 + (-0x14 << 2)
    ctx->pc = 0x11AC94u;
    {
        const bool branch_taken_0x11ac94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC94u;
        // 0x11ac98: 0x448c0000  mtc1        $t4, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac94) {
            ctx->pc = 0x11AC48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ac48;
        }
    }
    ctx->pc = 0x11AC9Cu;
    // 0x11ac9c: 0x5810005  bgez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AC9Cu;
    {
        const bool branch_taken_0x11ac9c = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x11ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC9Cu;
        // 0x11aca0: 0xb7827  nor         $t7, $zero, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac9c) {
            ctx->pc = 0x11ACB4u;
            goto label_11acb4;
        }
    }
    ctx->pc = 0x11ACA4u;
    // 0x11aca4: 0x3c0f0080  lui         $t7, 0x80
    ctx->pc = 0x11aca4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)128 << 16));
    // 0x11aca8: 0x1af7807  srav        $t7, $t7, $t5
    ctx->pc = 0x11aca8u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x11acac: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x11acacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11acb0: 0xb7827  nor         $t7, $zero, $t3
    ctx->pc = 0x11acb0u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
label_11acb4:
    // 0x11acb4: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x11ACB4u;
    {
        const bool branch_taken_0x11acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACB4u;
        // 0x11acb8: 0x18f6024  and         $t4, $t4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acb4) {
            ctx->pc = 0x11AC44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ac44;
        }
    }
    ctx->pc = 0x11ACBCu;
    // 0x11acbc: 0x0  nop
    ctx->pc = 0x11acbcu;
    // NOP
}
