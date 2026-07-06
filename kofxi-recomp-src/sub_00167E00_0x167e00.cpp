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

// Function: sub_00167E00
// Address: 0x167e00 - 0x167f60
void sub_00167E00_0x167e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167E00_0x167e00");
#endif

    switch (ctx->pc) {
        case 0x167e38u: goto label_167e38;
        case 0x167e54u: goto label_167e54;
        default: break;
    }

    ctx->pc = 0x167e00u;

    // 0x167e00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x167e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x167e04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x167e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x167e08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x167e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x167e0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x167e10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x167e10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x167e18: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x167e18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167e20: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x167e20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x167e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167e28: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x167e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e30: 0xc0592e4  jal         func_164B90
    ctx->pc = 0x167E30u;
    SET_GPR_U32(ctx, 31, 0x167E38u);
    ctx->pc = 0x167E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E30u;
    // 0x167e34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x167E30u, 0x167E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E38u;
label_167e38:
    // 0x167e38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x167e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x167e3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e40: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x167e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x167e44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x167e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x167e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e4c: 0xc0592e4  jal         func_164B90
    ctx->pc = 0x167E4Cu;
    SET_GPR_U32(ctx, 31, 0x167E54u);
    ctx->pc = 0x167E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E4Cu;
    // 0x167e50: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x167E4Cu, 0x167E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E54u;
label_167e54:
    // 0x167e54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x167e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x167e58: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x167e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x167e5c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x167e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x167e60: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x167e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x167e64: 0x10c5002e  beq         $a2, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x167E64u;
    {
        const bool branch_taken_0x167e64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x167E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E64u;
        // 0x167e68: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e64) {
            ctx->pc = 0x167F20u;
            goto label_167f20;
        }
    }
    ctx->pc = 0x167E6Cu;
    // 0x167e6c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x167e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x167e70: 0x50c40025  beql        $a2, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x167E70u;
    {
        const bool branch_taken_0x167e70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x167e70) {
            ctx->pc = 0x167E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167E70u;
            // 0x167e74: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F08u;
            goto label_167f08;
        }
    }
    ctx->pc = 0x167E78u;
    // 0x167e78: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x167e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x167e7c: 0x50c3000e  beql        $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x167E7Cu;
    {
        const bool branch_taken_0x167e7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x167e7c) {
            ctx->pc = 0x167E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167E7Cu;
            // 0x167e80: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167EB8u;
            goto label_167eb8;
        }
    }
    ctx->pc = 0x167E84u;
    // 0x167e84: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x167e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x167e88: 0x50c2002c  beql        $a2, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x167E88u;
    {
        const bool branch_taken_0x167e88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x167e88) {
            ctx->pc = 0x167E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167E88u;
            // 0x167e8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F3Cu;
            goto label_167f3c;
        }
    }
    ctx->pc = 0x167E90u;
    // 0x167e90: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x167e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x167e94: 0x10c20028  beq         $a2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x167E94u;
    {
        const bool branch_taken_0x167e94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x167e94) {
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167E9Cu;
    // 0x167e9c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x167e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x167ea0: 0x10c20025  beq         $a2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x167EA0u;
    {
        const bool branch_taken_0x167ea0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x167ea0) {
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167EA8u;
    // 0x167ea8: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x167EA8u;
    {
        const bool branch_taken_0x167ea8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ea8) {
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167EB0u;
    // 0x167eb0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x167EB0u;
    {
        const bool branch_taken_0x167eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167eb0) {
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167EB8u;
label_167eb8:
    // 0x167eb8: 0x5045001f  beql        $v0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x167EB8u;
    {
        const bool branch_taken_0x167eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x167eb8) {
            ctx->pc = 0x167EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167EB8u;
            // 0x167ebc: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167EC0u;
    // 0x167ec0: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x167EC0u;
    {
        const bool branch_taken_0x167ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x167ec0) {
            ctx->pc = 0x167EFCu;
            goto label_167efc;
        }
    }
    ctx->pc = 0x167EC8u;
    // 0x167ec8: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167EC8u;
    {
        const bool branch_taken_0x167ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x167ec8) {
            ctx->pc = 0x167ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167EC8u;
            // 0x167ecc: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167ED8u;
            goto label_167ed8;
        }
    }
    ctx->pc = 0x167ED0u;
    // 0x167ed0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x167ED0u;
    {
        const bool branch_taken_0x167ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ed0) {
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167ED8u;
label_167ed8:
    // 0x167ed8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x167ED8u;
    {
        const bool branch_taken_0x167ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167ed8) {
            ctx->pc = 0x167EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167ED8u;
            // 0x167edc: 0x64100004  daddiu      $s0, $zero, 0x4 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167EE0u;
    // 0x167ee0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x167ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x167ee4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x167ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x167ee8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x167EE8u;
    {
        const bool branch_taken_0x167ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ee8) {
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167EF0u;
    // 0x167ef0: 0x64100004  daddiu      $s0, $zero, 0x4
    ctx->pc = 0x167ef0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x167ef4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x167EF4u;
    {
        const bool branch_taken_0x167ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ef4) {
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167EFCu;
label_167efc:
    // 0x167efc: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x167efcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x167f00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x167F00u;
    {
        const bool branch_taken_0x167f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167f00) {
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167F08u;
label_167f08:
    // 0x167f08: 0x5045000b  beql        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x167F08u;
    {
        const bool branch_taken_0x167f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x167f08) {
            ctx->pc = 0x167F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167F08u;
            // 0x167f0c: 0x64100002  daddiu      $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167F10u;
    // 0x167f10: 0x50440009  beql        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x167F10u;
    {
        const bool branch_taken_0x167f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x167f10) {
            ctx->pc = 0x167F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167F10u;
            // 0x167f14: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167F18u;
    // 0x167f18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x167F18u;
    {
        const bool branch_taken_0x167f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167f18) {
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167F20u;
label_167f20:
    // 0x167f20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x167f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x167f24: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x167F24u;
    {
        const bool branch_taken_0x167f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x167f24) {
            ctx->pc = 0x167F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167F24u;
            // 0x167f28: 0x64100002  daddiu      $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167F2Cu;
    // 0x167f2c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x167f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x167f30: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x167F30u;
    {
        const bool branch_taken_0x167f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167f30) {
            ctx->pc = 0x167F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167F30u;
            // 0x167f34: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167F38u;
label_167f38:
    // 0x167f38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167f3c:
    // 0x167f3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x167f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167f40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x167f40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167f44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x167f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167f48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167f54: 0x3e00008  jr          $ra
    ctx->pc = 0x167F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F54u;
        // 0x167f58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167F5Cu;
    // 0x167f5c: 0x0  nop
    ctx->pc = 0x167f5cu;
    // NOP
    if (ctx->pc == 0x167f5cu) { ctx->pc = 0x167f60u; }
}
