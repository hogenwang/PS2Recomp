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

// Function: sub_001C6B20
// Address: 0x1c6b20 - 0x1c6bb0
void sub_001C6B20_0x1c6b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6B20_0x1c6b20");
#endif

    switch (ctx->pc) {
        case 0x1c6b20u: goto label_1c6b20;
        case 0x1c6b24u: goto label_1c6b24;
        case 0x1c6b28u: goto label_1c6b28;
        case 0x1c6b2cu: goto label_1c6b2c;
        case 0x1c6b30u: goto label_1c6b30;
        case 0x1c6b34u: goto label_1c6b34;
        case 0x1c6b38u: goto label_1c6b38;
        case 0x1c6b3cu: goto label_1c6b3c;
        case 0x1c6b40u: goto label_1c6b40;
        case 0x1c6b44u: goto label_1c6b44;
        case 0x1c6b48u: goto label_1c6b48;
        case 0x1c6b4cu: goto label_1c6b4c;
        case 0x1c6b50u: goto label_1c6b50;
        case 0x1c6b54u: goto label_1c6b54;
        case 0x1c6b58u: goto label_1c6b58;
        case 0x1c6b5cu: goto label_1c6b5c;
        case 0x1c6b60u: goto label_1c6b60;
        case 0x1c6b64u: goto label_1c6b64;
        case 0x1c6b68u: goto label_1c6b68;
        case 0x1c6b6cu: goto label_1c6b6c;
        case 0x1c6b70u: goto label_1c6b70;
        case 0x1c6b74u: goto label_1c6b74;
        case 0x1c6b78u: goto label_1c6b78;
        case 0x1c6b7cu: goto label_1c6b7c;
        case 0x1c6b80u: goto label_1c6b80;
        case 0x1c6b84u: goto label_1c6b84;
        case 0x1c6b88u: goto label_1c6b88;
        case 0x1c6b8cu: goto label_1c6b8c;
        case 0x1c6b90u: goto label_1c6b90;
        case 0x1c6b94u: goto label_1c6b94;
        case 0x1c6b98u: goto label_1c6b98;
        case 0x1c6b9cu: goto label_1c6b9c;
        case 0x1c6ba0u: goto label_1c6ba0;
        case 0x1c6ba4u: goto label_1c6ba4;
        case 0x1c6ba8u: goto label_1c6ba8;
        case 0x1c6bacu: goto label_1c6bac;
        default: break;
    }

    ctx->pc = 0x1c6b20u;

label_1c6b20:
    // 0x1c6b20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c6b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c6b24:
    // 0x1c6b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c6b28:
    // 0x1c6b28: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c6b28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_1c6b2c:
    // 0x1c6b2c: 0x2610f0b0  addiu       $s0, $s0, -0xF50
    ctx->pc = 0x1c6b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963376));
label_1c6b30:
    // 0x1c6b30: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x1c6b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
label_1c6b34:
    // 0x1c6b34: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x1c6b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_1c6b38:
    // 0x1c6b38: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1c6b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1c6b3c:
    // 0x1c6b3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c6b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6b40:
    // 0x1c6b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6b44:
    // 0x1c6b44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c6b48:
    // 0x1c6b48: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x1c6b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
label_1c6b4c:
    // 0x1c6b4c: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x1c6b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
label_1c6b50:
    // 0x1c6b50: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x1c6b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
label_1c6b54:
    // 0x1c6b54: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x1c6b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
label_1c6b58:
    // 0x1c6b58: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x1c6b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
label_1c6b5c:
    // 0x1c6b5c: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x1c6b5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1c6b60:
    // 0x1c6b60: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x1c6b60u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1c6b64:
    // 0x1c6b64: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x1c6b64u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c6b68:
    // 0x1c6b68: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x1c6b68u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c6b6c:
    // 0x1c6b6c: 0xe7b00028  swc1        $f16, 0x28($sp)
    ctx->pc = 0x1c6b6cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c6b70:
    // 0x1c6b70: 0xe7b1002c  swc1        $f17, 0x2C($sp)
    ctx->pc = 0x1c6b70u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1c6b74:
    // 0x1c6b74: 0xe7b20030  swc1        $f18, 0x30($sp)
    ctx->pc = 0x1c6b74u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c6b78:
    // 0x1c6b78: 0xc04b984  jal         func_12E610
label_1c6b7c:
    if (ctx->pc == 0x1C6B7Cu) {
        ctx->pc = 0x1C6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B78u;
        // 0x1c6b7c: 0xe7b30034  swc1        $f19, 0x34($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B80u;
        goto label_1c6b80;
    }
    ctx->pc = 0x1C6B78u;
    SET_GPR_U32(ctx, 31, 0x1C6B80u);
    ctx->pc = 0x1C6B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B78u;
    // 0x1c6b7c: 0xe7b30034  swc1        $f19, 0x34($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E610u, 0x1C6B78u, 0x1C6B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B80u;
label_1c6b80:
    // 0x1c6b80: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c6b84:
    // 0x1c6b84: 0x8c63f0a8  lw          $v1, -0xF58($v1)
    ctx->pc = 0x1c6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963368)));
label_1c6b88:
    // 0x1c6b88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c6b8c:
    if (ctx->pc == 0x1C6B8Cu) {
        ctx->pc = 0x1C6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B88u;
        // 0x1c6b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B90u;
        goto label_1c6b90;
    }
    ctx->pc = 0x1C6B88u;
    {
        const bool branch_taken_0x1c6b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B88u;
        // 0x1c6b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b88) {
            ctx->pc = 0x1C6B9Cu;
            goto label_1c6b9c;
        }
    }
    ctx->pc = 0x1C6B90u;
label_1c6b90:
    // 0x1c6b90: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c6b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c6b94:
    // 0x1c6b94: 0x60f809  jalr        $v1
label_1c6b98:
    if (ctx->pc == 0x1C6B98u) {
        ctx->pc = 0x1C6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B94u;
        // 0x1c6b98: 0x8c44f0ac  lw          $a0, -0xF54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B9Cu;
        goto label_1c6b9c;
    }
    ctx->pc = 0x1C6B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C6B9Cu);
        ctx->pc = 0x1C6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B94u;
        // 0x1c6b98: 0x8c44f0ac  lw          $a0, -0xF54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963372)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B94u, 0x1C6B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6B9Cu;
label_1c6b9c:
    // 0x1c6b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6ba0:
    // 0x1c6ba0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c6ba4:
    // 0x1c6ba4: 0x3e00008  jr          $ra
label_1c6ba8:
    if (ctx->pc == 0x1C6BA8u) {
        ctx->pc = 0x1C6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BA4u;
        // 0x1c6ba8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6BACu;
        goto label_1c6bac;
    }
    ctx->pc = 0x1C6BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BA4u;
        // 0x1c6ba8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BACu;
label_1c6bac:
    // 0x1c6bac: 0x0  nop
    ctx->pc = 0x1c6bacu;
    // NOP
    if (ctx->pc == 0x1c6bacu) { ctx->pc = 0x1c6bb0u; }
}
