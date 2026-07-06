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

// Function: sub_00312C20
// Address: 0x312c20 - 0x314430
void sub_00312C20_0x312c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312C20_0x312c20");
#endif

    switch (ctx->pc) {
        case 0x312ebcu: goto label_312ebc;
        case 0x312f78u: goto label_312f78;
        case 0x313098u: goto label_313098;
        case 0x3130a0u: goto label_3130a0;
        case 0x3130b0u: goto label_3130b0;
        case 0x3130bcu: goto label_3130bc;
        case 0x3130f8u: goto label_3130f8;
        case 0x313100u: goto label_313100;
        case 0x313110u: goto label_313110;
        case 0x31311cu: goto label_31311c;
        case 0x313194u: goto label_313194;
        case 0x3131b8u: goto label_3131b8;
        case 0x313200u: goto label_313200;
        case 0x313224u: goto label_313224;
        case 0x3134c4u: goto label_3134c4;
        case 0x3134d8u: goto label_3134d8;
        case 0x3134e0u: goto label_3134e0;
        case 0x31378cu: goto label_31378c;
        case 0x31379cu: goto label_31379c;
        case 0x3137c0u: goto label_3137c0;
        case 0x3137e0u: goto label_3137e0;
        case 0x313830u: goto label_313830;
        case 0x31386cu: goto label_31386c;
        case 0x31387cu: goto label_31387c;
        case 0x313884u: goto label_313884;
        case 0x3138a8u: goto label_3138a8;
        case 0x3138b8u: goto label_3138b8;
        case 0x3138c0u: goto label_3138c0;
        case 0x31393cu: goto label_31393c;
        case 0x313944u: goto label_313944;
        case 0x313954u: goto label_313954;
        case 0x313960u: goto label_313960;
        case 0x313998u: goto label_313998;
        case 0x3139a0u: goto label_3139a0;
        case 0x3139b0u: goto label_3139b0;
        case 0x3139bcu: goto label_3139bc;
        case 0x313a38u: goto label_313a38;
        case 0x313a58u: goto label_313a58;
        case 0x313a98u: goto label_313a98;
        case 0x313ab8u: goto label_313ab8;
        case 0x3140b0u: goto label_3140b0;
        case 0x3140c4u: goto label_3140c4;
        case 0x3140c8u: goto label_3140c8;
        case 0x314258u: goto label_314258;
        case 0x3143ccu: goto label_3143cc;
        case 0x3143e0u: goto label_3143e0;
        case 0x3143e4u: goto label_3143e4;
        default: break;
    }

    ctx->pc = 0x312c20u;

label_312c20:
    // 0x312c20: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x312c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x312c24: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312C24u;
    {
        const bool branch_taken_0x312c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312c24) {
            ctx->pc = 0x312C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C24u;
            // 0x312c28: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C34u;
            goto label_312c34;
        }
    }
    ctx->pc = 0x312C2Cu;
    // 0x312c2c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x312C2Cu;
    {
        const bool branch_taken_0x312c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C2Cu;
        // 0x312c30: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c2c) {
            ctx->pc = 0x312C9Cu;
            goto label_312c9c;
        }
    }
    ctx->pc = 0x312C34u;
label_312c34:
    // 0x312c34: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312C34u;
    {
        const bool branch_taken_0x312c34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312c34) {
            ctx->pc = 0x312C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C34u;
            // 0x312c38: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C44u;
            goto label_312c44;
        }
    }
    ctx->pc = 0x312C3Cu;
    // 0x312c3c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x312C3Cu;
    {
        const bool branch_taken_0x312c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C3Cu;
        // 0x312c40: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c3c) {
            ctx->pc = 0x312C9Cu;
            goto label_312c9c;
        }
    }
    ctx->pc = 0x312C44u;
label_312c44:
    // 0x312c44: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312C44u;
    {
        const bool branch_taken_0x312c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312c44) {
            ctx->pc = 0x312C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C44u;
            // 0x312c48: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C54u;
            goto label_312c54;
        }
    }
    ctx->pc = 0x312C4Cu;
    // 0x312c4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x312C4Cu;
    {
        const bool branch_taken_0x312c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C4Cu;
        // 0x312c50: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c4c) {
            ctx->pc = 0x312C9Cu;
            goto label_312c9c;
        }
    }
    ctx->pc = 0x312C54u;
label_312c54:
    // 0x312c54: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312C54u;
    {
        const bool branch_taken_0x312c54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312c54) {
            ctx->pc = 0x312C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C54u;
            // 0x312c58: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C64u;
            goto label_312c64;
        }
    }
    ctx->pc = 0x312C5Cu;
    // 0x312c5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x312C5Cu;
    {
        const bool branch_taken_0x312c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C5Cu;
        // 0x312c60: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c5c) {
            ctx->pc = 0x312C9Cu;
            goto label_312c9c;
        }
    }
    ctx->pc = 0x312C64u;
label_312c64:
    // 0x312c64: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312C64u;
    {
        const bool branch_taken_0x312c64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312c64) {
            ctx->pc = 0x312C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C64u;
            // 0x312c68: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C74u;
            goto label_312c74;
        }
    }
    ctx->pc = 0x312C6Cu;
    // 0x312c6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x312C6Cu;
    {
        const bool branch_taken_0x312c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C6Cu;
        // 0x312c70: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c6c) {
            ctx->pc = 0x312C9Cu;
            goto label_312c9c;
        }
    }
    ctx->pc = 0x312C74u;
label_312c74:
    // 0x312c74: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312C74u;
    {
        const bool branch_taken_0x312c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312c74) {
            ctx->pc = 0x312C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C74u;
            // 0x312c78: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C84u;
            goto label_312c84;
        }
    }
    ctx->pc = 0x312C7Cu;
    // 0x312c7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x312C7Cu;
    {
        const bool branch_taken_0x312c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C7Cu;
        // 0x312c80: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c7c) {
            ctx->pc = 0x312C9Cu;
            goto label_312c9c;
        }
    }
    ctx->pc = 0x312C84u;
label_312c84:
    // 0x312c84: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312C84u;
    {
        const bool branch_taken_0x312c84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312c84) {
            ctx->pc = 0x312C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C84u;
            // 0x312c88: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C94u;
            goto label_312c94;
        }
    }
    ctx->pc = 0x312C8Cu;
    // 0x312c8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x312C8Cu;
    {
        const bool branch_taken_0x312c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C8Cu;
        // 0x312c90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c8c) {
            ctx->pc = 0x312C9Cu;
            goto label_312c9c;
        }
    }
    ctx->pc = 0x312C94u;
label_312c94:
    // 0x312c94: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x312c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x312c98: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x312c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_312c9c:
    // 0x312c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x312C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312CA4u;
    // 0x312ca4: 0x0  nop
    ctx->pc = 0x312ca4u;
    // NOP
    // 0x312ca8: 0x0  nop
    ctx->pc = 0x312ca8u;
    // NOP
    // 0x312cac: 0x0  nop
    ctx->pc = 0x312cacu;
    // NOP
    // 0x312cb0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x312cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x312cb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x312cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x312cb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x312cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x312cbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x312cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x312cc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x312cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x312cc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x312cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x312cc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x312cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x312ccc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x312cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x312cd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x312cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x312cd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x312cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x312cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x312cdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x312cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312ce0: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x312ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
    // 0x312ce4: 0x90700014  lbu         $s0, 0x14($v1)
    ctx->pc = 0x312ce4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x312ce8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x312ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x312cec: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x312cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x312cf0: 0x90630015  lbu         $v1, 0x15($v1)
    ctx->pc = 0x312cf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21)));
    // 0x312cf4: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x312cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x312cf8: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x312cf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x312cfc: 0x847e0010  lh          $fp, 0x10($v1)
    ctx->pc = 0x312cfcu;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x312d00: 0x84630012  lh          $v1, 0x12($v1)
    ctx->pc = 0x312d00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x312d04: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x312d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x312d08: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x312d08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x312d0c: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x312d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x312d10: 0x90650018  lbu         $a1, 0x18($v1)
    ctx->pc = 0x312d10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x312d14: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x312d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x312d18: 0x3c33018  mult        $a2, $fp, $v1
    ctx->pc = 0x312d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x312d1c: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x312d1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x312d20: 0x6b840  sll         $s7, $a2, 1
    ctx->pc = 0x312d20u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x312d24: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x312D24u;
    {
        const bool branch_taken_0x312d24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x312D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D24u;
        // 0x312d28: 0x679821  addu        $s3, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d24) {
            ctx->pc = 0x312D30u;
            goto label_312d30;
        }
    }
    ctx->pc = 0x312D2Cu;
    // 0x312d2c: 0x6b880  sll         $s7, $a2, 2
    ctx->pc = 0x312d2cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_312d30:
    // 0x312d30: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x312d30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x312d34: 0x94630016  lhu         $v1, 0x16($v1)
    ctx->pc = 0x312d34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x312d38: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x312D38u;
    {
        const bool branch_taken_0x312d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x312d38) {
            ctx->pc = 0x312D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312D38u;
            // 0x312d3c: 0x8fa301bc  lw          $v1, 0x1BC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312D50u;
            goto label_312d50;
        }
    }
    ctx->pc = 0x312D40u;
    // 0x312d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x312d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312d44: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x312d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x312d48: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x312d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x312d4c: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x312d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_312d50:
    // 0x312d50: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x312d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x312d54: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x312d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x312d58: 0xafa30220  sw          $v1, 0x220($sp)
    ctx->pc = 0x312d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 3));
    // 0x312d5c: 0x3c42018  mult        $a0, $fp, $a0
    ctx->pc = 0x312d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x312d60: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x312d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x312d64: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x312d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x312d68: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x312d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x312d6c: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x312d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x312d70: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x312d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x312d74: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x312d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x312d78: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x312D78u;
    {
        const bool branch_taken_0x312d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D78u;
        // 0x312d7c: 0x4a202  srl         $s4, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d78) {
            ctx->pc = 0x312D98u;
            goto label_312d98;
        }
    }
    ctx->pc = 0x312D80u;
    // 0x312d80: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x312d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x312d84: 0x14a023  negu        $s4, $s4
    ctx->pc = 0x312d84u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x312d88: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x312d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x312d8c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x312d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x312d90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x312d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x312d94: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x312d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
label_312d98:
    // 0x312d98: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x312d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x312d9c: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x312d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x312da0: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x312da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x312da4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x312da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x312da8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x312da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x312dac: 0xafa30210  sw          $v1, 0x210($sp)
    ctx->pc = 0x312dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 3));
    // 0x312db0: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x312db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x312db4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x312db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x312db8: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x312db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
    // 0x312dbc: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x312dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x312dc0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x312dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x312dc4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x312dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x312dc8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x312DC8u;
    {
        const bool branch_taken_0x312dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x312DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DC8u;
        // 0x312dcc: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312dc8) {
            ctx->pc = 0x312DF0u;
            goto label_312df0;
        }
    }
    ctx->pc = 0x312DD0u;
    // 0x312dd0: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x312dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x312dd4: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x312dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x312dd8: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x312dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x312ddc: 0x31823  negu        $v1, $v1
    ctx->pc = 0x312ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x312de0: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x312de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
    // 0x312de4: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x312de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x312de8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x312de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x312dec: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x312decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
label_312df0:
    // 0x312df0: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x312df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x312df4: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x312df4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x312df8: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x312df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x312dfc: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x312dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x312e00: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x312e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x312e04: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x312e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x312e08: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x312e08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x312e0c: 0x1232824  and         $a1, $t1, $v1
    ctx->pc = 0x312e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x312e10: 0x74602  srl         $t0, $a3, 24
    ctx->pc = 0x312e10u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x312e14: 0x53c03  sra         $a3, $a1, 16
    ctx->pc = 0x312e14u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
    // 0x312e18: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x312e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x312e1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x312e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x312e20: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x312e20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x312e24: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x312e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
    // 0x312e28: 0x72843  sra         $a1, $a3, 1
    ctx->pc = 0x312e28u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
    // 0x312e2c: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x312e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x312e30: 0x3127ff00  andi        $a3, $t1, 0xFF00
    ctx->pc = 0x312e30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
    // 0x312e34: 0x312500ff  andi        $a1, $t1, 0xFF
    ctx->pc = 0x312e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x312e38: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x312e38u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x312e3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x312e40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x312e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x312e44: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x312e44u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x312e48: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x312e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x312e4c: 0x72843  sra         $a1, $a3, 1
    ctx->pc = 0x312e4cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
    // 0x312e50: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x312e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x312e54: 0x62a3c  dsll32      $a1, $a2, 8
    ctx->pc = 0x312e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 8));
    // 0x312e58: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x312e58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x312e5c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x312E5Cu;
    {
        const bool branch_taken_0x312e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x312E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E5Cu;
        // 0x312e60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e5c) {
            ctx->pc = 0x312E80u;
            goto label_312e80;
        }
    }
    ctx->pc = 0x312E64u;
    // 0x312e64: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x312e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x312e68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x312e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x312e6c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x312e6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x312e70: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x312e70u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x312e74: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x312e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x312e78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x312e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x312e7c: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x312e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_312e80:
    // 0x312e80: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x312e80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x312e84: 0x106001b4  beqz        $v1, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x312E84u;
    {
        const bool branch_taken_0x312e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E84u;
        // 0x312e88: 0xafa00200  sw          $zero, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e84) {
            ctx->pc = 0x313558u;
            goto label_313558;
        }
    }
    ctx->pc = 0x312E8Cu;
    // 0x312e8c: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x312e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x312e90: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x312e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x312e94: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x312e94u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x312e98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x312e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x312e9c: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x312e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x312ea0: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x312ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x312ea4: 0x418fc  dsll32      $v1, $a0, 3
    ctx->pc = 0x312ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 3));
    // 0x312ea8: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x312ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x312eac: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x312eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x312eb0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x312eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x312eb4: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x312eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x312eb8: 0x8fb101f0  lw          $s1, 0x1F0($sp)
    ctx->pc = 0x312eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_312ebc:
    // 0x312ebc: 0x12000196  beqz        $s0, . + 4 + (0x196 << 2)
    ctx->pc = 0x312EBCu;
    {
        const bool branch_taken_0x312ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EBCu;
        // 0x312ec0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ebc) {
            ctx->pc = 0x313518u;
            goto label_313518;
        }
    }
    ctx->pc = 0x312EC4u;
    // 0x312ec4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x312ec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ec8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x312ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x312ecc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x312eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x312ed0: 0x14b100  sll         $s6, $s4, 4
    ctx->pc = 0x312ed0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x312ed4: 0x24726c00  addiu       $s2, $v1, 0x6C00
    ctx->pc = 0x312ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x312ed8: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x312ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x312edc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x312edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x312ee0: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x312ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x312ee4: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x312ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x312ee8: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x312ee8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x312eec: 0x24658000  addiu       $a1, $v1, -0x8000
    ctx->pc = 0x312eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x312ef0: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x312ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x312ef4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x312ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x312ef8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x312ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x312efc: 0x24c67100  addiu       $a2, $a2, 0x7100
    ctx->pc = 0x312efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28928));
    // 0x312f00: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x312f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x312f04: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x312f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
    // 0x312f08: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x312f08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x312f0c: 0x24c78000  addiu       $a3, $a2, -0x8000
    ctx->pc = 0x312f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x312f10: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x312f10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x312f14: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x312f14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x312f18: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x312f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x312f1c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x312f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x312f20: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x312f20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x312f24: 0x54fc2  srl         $t1, $a1, 31
    ctx->pc = 0x312f24u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x312f28: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x312f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x312f2c: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x312f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x312f30: 0x4010  mfhi        $t0
    ctx->pc = 0x312f30u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x312f34: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x312f34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x312f38: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x312f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x312f3c: 0x52203  sra         $a0, $a1, 8
    ctx->pc = 0x312f3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 8));
    // 0x312f40: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x312f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x312f44: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x312f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x312f48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x312f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x312f4c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x312f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x312f50: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x312f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x312f54: 0x2010  mfhi        $a0
    ctx->pc = 0x312f54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x312f58: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x312f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x312f5c: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x312f5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x312f60: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x312f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x312f64: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x312f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x312f68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x312f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x312f6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x312f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x312f70: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x312f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x312f74: 0x0  nop
    ctx->pc = 0x312f74u;
    // NOP
label_312f78:
    // 0x312f78: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x312f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x312f7c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x312f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x312f80: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x312f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x312f84: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x312F84u;
    {
        const bool branch_taken_0x312f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F84u;
        // 0x312f88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f84) {
            ctx->pc = 0x312FB8u;
            goto label_312fb8;
        }
    }
    ctx->pc = 0x312F8Cu;
    // 0x312f8c: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x312f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x312f90: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312F90u;
    {
        const bool branch_taken_0x312f90 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x312F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F90u;
        // 0x312f94: 0xafa30160  sw          $v1, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f90) {
            ctx->pc = 0x312FA0u;
            goto label_312fa0;
        }
    }
    ctx->pc = 0x312F98u;
    // 0x312f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312f9c: 0x0  nop
    ctx->pc = 0x312f9cu;
    // NOP
label_312fa0:
    // 0x312fa0: 0x2a210281  slti        $at, $s1, 0x281
    ctx->pc = 0x312fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x312fa4: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x312FA4u;
    {
        const bool branch_taken_0x312fa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x312fa4) {
            ctx->pc = 0x312FE0u;
            goto label_312fe0;
        }
    }
    ctx->pc = 0x312FACu;
    // 0x312fac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x312FACu;
    {
        const bool branch_taken_0x312fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312FACu;
        // 0x312fb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312fac) {
            ctx->pc = 0x312FE0u;
            goto label_312fe0;
        }
    }
    ctx->pc = 0x312FB4u;
    // 0x312fb4: 0x0  nop
    ctx->pc = 0x312fb4u;
    // NOP
label_312fb8:
    // 0x312fb8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312FB8u;
    {
        const bool branch_taken_0x312fb8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x312fb8) {
            ctx->pc = 0x312FC8u;
            goto label_312fc8;
        }
    }
    ctx->pc = 0x312FC0u;
    // 0x312fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fc4: 0x0  nop
    ctx->pc = 0x312fc4u;
    // NOP
label_312fc8:
    // 0x312fc8: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x312fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x312fcc: 0x28610281  slti        $at, $v1, 0x281
    ctx->pc = 0x312fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x312fd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x312FD0u;
    {
        const bool branch_taken_0x312fd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x312FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312FD0u;
        // 0x312fd4: 0xafa30160  sw          $v1, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312fd0) {
            ctx->pc = 0x312FE0u;
            goto label_312fe0;
        }
    }
    ctx->pc = 0x312FD8u;
    // 0x312fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fdc: 0x0  nop
    ctx->pc = 0x312fdcu;
    // NOP
label_312fe0:
    // 0x312fe0: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x312fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x312fe4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x312FE4u;
    {
        const bool branch_taken_0x312fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312fe4) {
            ctx->pc = 0x313018u;
            goto label_313018;
        }
    }
    ctx->pc = 0x312FECu;
    // 0x312fec: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x312fecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x312ff0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312FF0u;
    {
        const bool branch_taken_0x312ff0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x312ff0) {
            ctx->pc = 0x313000u;
            goto label_313000;
        }
    }
    ctx->pc = 0x312FF8u;
    // 0x312ff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ffc: 0x0  nop
    ctx->pc = 0x312ffcu;
    // NOP
label_313000:
    // 0x313000: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x313000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x313004: 0x286101e1  slti        $at, $v1, 0x1E1
    ctx->pc = 0x313004u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)481) ? 1 : 0);
    // 0x313008: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x313008u;
    {
        const bool branch_taken_0x313008 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x313008) {
            ctx->pc = 0x313040u;
            goto label_313040;
        }
    }
    ctx->pc = 0x313010u;
    // 0x313010: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x313010u;
    {
        const bool branch_taken_0x313010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313010u;
        // 0x313014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313010) {
            ctx->pc = 0x313040u;
            goto label_313040;
        }
    }
    ctx->pc = 0x313018u;
label_313018:
    // 0x313018: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x313018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x31301c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31301Cu;
    {
        const bool branch_taken_0x31301c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x31301c) {
            ctx->pc = 0x313028u;
            goto label_313028;
        }
    }
    ctx->pc = 0x313024u;
    // 0x313024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313028:
    // 0x313028: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x313028u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31302c: 0x286101e1  slti        $at, $v1, 0x1E1
    ctx->pc = 0x31302cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)481) ? 1 : 0);
    // 0x313030: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x313030u;
    {
        const bool branch_taken_0x313030 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x313030) {
            ctx->pc = 0x313040u;
            goto label_313040;
        }
    }
    ctx->pc = 0x313038u;
    // 0x313038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31303c: 0x0  nop
    ctx->pc = 0x31303cu;
    // NOP
label_313040:
    // 0x313040: 0x10a0012f  beqz        $a1, . + 4 + (0x12F << 2)
    ctx->pc = 0x313040u;
    {
        const bool branch_taken_0x313040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x313040) {
            ctx->pc = 0x313500u;
            goto label_313500;
        }
    }
    ctx->pc = 0x313048u;
    // 0x313048: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x313048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31304c: 0x8c424790  lw          $v0, 0x4790($v0)
    ctx->pc = 0x31304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18320)));
    // 0x313050: 0x12620035  beq         $s3, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x313050u;
    {
        const bool branch_taken_0x313050 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x313050) {
            ctx->pc = 0x313128u;
            goto label_313128;
        }
    }
    ctx->pc = 0x313058u;
    // 0x313058: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x313058u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31305c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31305cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313060: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x313060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x313064: 0x10470018  beq         $v0, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x313064u;
    {
        const bool branch_taken_0x313064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x313064) {
            ctx->pc = 0x3130C8u;
            goto label_3130c8;
        }
    }
    ctx->pc = 0x31306Cu;
    // 0x31306c: 0x87a201c0  lh          $v0, 0x1C0($sp)
    ctx->pc = 0x31306cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x313070: 0x1e543c  dsll32      $t2, $fp, 16
    ctx->pc = 0x313070u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) << (32 + 16));
    // 0x313074: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x313074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x313078: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x313078u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x31307c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x31307cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x313080: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x313080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x313084: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x313084u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313088: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x313088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31308c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31308cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313090: 0xc040532  jal         func_1014C8
    ctx->pc = 0x313090u;
    SET_GPR_U32(ctx, 31, 0x313098u);
    ctx->pc = 0x313094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313090u;
    // 0x313094: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x313090u, 0x313098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313098u;
label_313098:
    // 0x313098: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x313098u;
    SET_GPR_U32(ctx, 31, 0x3130A0u);
    ctx->pc = 0x31309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313098u;
    // 0x31309c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x313098u, 0x3130A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3130A0u;
label_3130a0:
    // 0x3130a0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3130a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3130a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3130a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3130a8: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3130A8u;
    SET_GPR_U32(ctx, 31, 0x3130B0u);
    ctx->pc = 0x3130ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3130A8u;
    // 0x3130ac: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x3130A8u, 0x3130B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3130B0u;
label_3130b0:
    // 0x3130b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3130b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3130b4: 0xc040454  jal         func_101150
    ctx->pc = 0x3130B4u;
    SET_GPR_U32(ctx, 31, 0x3130BCu);
    ctx->pc = 0x3130B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3130B4u;
    // 0x3130b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x3130B4u, 0x3130BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3130BCu;
label_3130bc:
    // 0x3130bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3130BCu;
    {
        const bool branch_taken_0x3130bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3130bc) {
            ctx->pc = 0x313120u;
            goto label_313120;
        }
    }
    ctx->pc = 0x3130C4u;
    // 0x3130c4: 0x0  nop
    ctx->pc = 0x3130c4u;
    // NOP
label_3130c8:
    // 0x3130c8: 0x87a201c0  lh          $v0, 0x1C0($sp)
    ctx->pc = 0x3130c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x3130cc: 0x1e543c  dsll32      $t2, $fp, 16
    ctx->pc = 0x3130ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) << (32 + 16));
    // 0x3130d0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3130d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3130d4: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x3130d4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x3130d8: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x3130d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x3130dc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3130dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3130e0: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x3130e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x3130e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3130e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3130e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3130e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3130ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3130ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3130f0: 0xc040532  jal         func_1014C8
    ctx->pc = 0x3130F0u;
    SET_GPR_U32(ctx, 31, 0x3130F8u);
    ctx->pc = 0x3130F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3130F0u;
    // 0x3130f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x3130F0u, 0x3130F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3130F8u;
label_3130f8:
    // 0x3130f8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3130F8u;
    SET_GPR_U32(ctx, 31, 0x313100u);
    ctx->pc = 0x3130FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3130F8u;
    // 0x3130fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3130F8u, 0x313100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313100u;
label_313100:
    // 0x313100: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x313100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x313104: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x313104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313108: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x313108u;
    SET_GPR_U32(ctx, 31, 0x313110u);
    ctx->pc = 0x31310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313108u;
    // 0x31310c: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x313108u, 0x313110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313110u;
label_313110:
    // 0x313110: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x313110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313114: 0xc040454  jal         func_101150
    ctx->pc = 0x313114u;
    SET_GPR_U32(ctx, 31, 0x31311Cu);
    ctx->pc = 0x313118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313114u;
    // 0x313118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x313114u, 0x31311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31311Cu;
label_31311c:
    // 0x31311c: 0x0  nop
    ctx->pc = 0x31311cu;
    // NOP
label_313120:
    // 0x313120: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x313120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x313124: 0xac534790  sw          $s3, 0x4790($v0)
    ctx->pc = 0x313124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18320), GPR_U32(ctx, 19));
label_313128:
    // 0x313128: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x313128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x31312c: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x31312cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    // 0x313130: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313134: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x313134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x313138: 0xac460370  sw          $a2, 0x370($v0)
    ctx->pc = 0x313138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 6));
    // 0x31313c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31313cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313140: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x313140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313144: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x313144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x313148: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x313148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31314c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x31314cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x313150: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x313150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x313154: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x313154u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x313158: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31315c: 0xfcc00010  sd          $zero, 0x10($a2)
    ctx->pc = 0x31315cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 0));
    // 0x313160: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x313160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x313164: 0xfcc50018  sd          $a1, 0x18($a2)
    ctx->pc = 0x313164u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 5));
    // 0x313168: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x313168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31316c: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x31316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x313170: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313174: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x313174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x313178: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x313178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x31317c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x31317cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x313180: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x313180u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x313184: 0x1044001c  beq         $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x313184u;
    {
        const bool branch_taken_0x313184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x313184) {
            ctx->pc = 0x3131F8u;
            goto label_3131f8;
        }
    }
    ctx->pc = 0x31318Cu;
    // 0x31318c: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x31318Cu;
    SET_GPR_U32(ctx, 31, 0x313194u);
    ctx->pc = 0x313190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31318Cu;
    // 0x313190: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    goto label_312c20;
    ctx->pc = 0x313194u;
label_313194:
    // 0x313194: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313198: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x313198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x31319c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31319cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3131a0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x3131a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x3131a4: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x3131a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x3131a8: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x3131a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x3131ac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3131acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3131b0: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x3131B0u;
    SET_GPR_U32(ctx, 31, 0x3131B8u);
    ctx->pc = 0x3131B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3131B0u;
    // 0x3131b4: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    goto label_312c20;
    ctx->pc = 0x3131B8u;
label_3131b8:
    // 0x3131b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3131b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3131bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3131bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3131c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3131c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3131c4: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x3131c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x3131c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3131c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3131cc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3131ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3131d0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x3131d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3131d4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3131d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3131d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3131d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3131dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3131dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3131e0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3131e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3131e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3131e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3131e8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3131e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3131ec: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3131ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3131f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3131F0u;
    {
        const bool branch_taken_0x3131f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3131F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131F0u;
        // 0x3131f4: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131f0) {
            ctx->pc = 0x313260u;
            goto label_313260;
        }
    }
    ctx->pc = 0x3131F8u;
label_3131f8:
    // 0x3131f8: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x3131F8u;
    SET_GPR_U32(ctx, 31, 0x313200u);
    ctx->pc = 0x3131FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3131F8u;
    // 0x3131fc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    goto label_312c20;
    ctx->pc = 0x313200u;
label_313200:
    // 0x313200: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313204: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x313204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x313208: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x313208u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31320c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x31320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x313210: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x313210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x313214: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x313214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x313218: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x313218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31321c: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x31321Cu;
    SET_GPR_U32(ctx, 31, 0x313224u);
    ctx->pc = 0x313220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31321Cu;
    // 0x313220: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    goto label_312c20;
    ctx->pc = 0x313224u;
label_313224:
    // 0x313224: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313228: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x313228u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31322c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31322cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313230: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x313230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x313234: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313238: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x313238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31323c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x31323cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x313240: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x313240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x313244: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x313244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x313248: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31324c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x31324cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x313250: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x313250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x313254: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x313254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x313258: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x313258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31325c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x31325cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_313260:
    // 0x313260: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313264: 0x8c470370  lw          $a3, 0x370($v0)
    ctx->pc = 0x313264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x313268: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x313268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31326c: 0x3c0360ab  lui         $v1, 0x60AB
    ctx->pc = 0x31326cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24747 << 16));
    // 0x313270: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x313270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x313274: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x313274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x313278: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x313278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31327c: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x31327cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x313280: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x313280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x313284: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x313284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313288: 0xfce00010  sd          $zero, 0x10($a3)
    ctx->pc = 0x313288u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 0));
    // 0x31328c: 0xfce60018  sd          $a2, 0x18($a3)
    ctx->pc = 0x31328cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 6));
    // 0x313290: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x313290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x313294: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x313294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x313298: 0xfce50020  sd          $a1, 0x20($a3)
    ctx->pc = 0x313298u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 5));
    // 0x31329c: 0xfce20028  sd          $v0, 0x28($a3)
    ctx->pc = 0x31329cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 40), GPR_U64(ctx, 2));
    // 0x3132a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3132a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3132a4: 0xfce40030  sd          $a0, 0x30($a3)
    ctx->pc = 0x3132a4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 48), GPR_U64(ctx, 4));
    // 0x3132a8: 0x34633513  ori         $v1, $v1, 0x3513
    ctx->pc = 0x3132a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x3132ac: 0xfce30038  sd          $v1, 0x38($a3)
    ctx->pc = 0x3132acu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
    // 0x3132b0: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3132b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3132b4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3132b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3132b8: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x3132b8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x3132bc: 0x8c660370  lw          $a2, 0x370($v1)
    ctx->pc = 0x3132bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x3132c0: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x3132c0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x3132c4: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x3132c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x3132c8: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x3132c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x3132cc: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x3132ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x3132d0: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x3132d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x3132d4: 0x24c50040  addiu       $a1, $a2, 0x40
    ctx->pc = 0x3132d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3132d8: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3132d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3132dc: 0xac850370  sw          $a1, 0x370($a0)
    ctx->pc = 0x3132dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 5));
    // 0x3132e0: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x3132e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
    // 0x3132e4: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x3132e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x3132e8: 0x8c6d0370  lw          $t5, 0x370($v1)
    ctx->pc = 0x3132e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x3132ec: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x3132ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x3132f0: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3132f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3132f4: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x3132f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x3132f8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3132f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3132fc: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x3132fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x313300: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x313300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x313304: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x313304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x313308: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x313308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x31330c: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x31330cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x313310: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x313310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x313314: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x313314u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x313318: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x313318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31331c: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x31331cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x313320: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x313320u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x313324: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x313324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x313328: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x313328u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x31332c: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x31332cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x313330: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x313330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x313334: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x313334u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x313338: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x313338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31333c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x31333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x313340: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x313340u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x313344: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x313344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x313348: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x313348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31334c: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x31334cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x313350: 0xacb20010  sw          $s2, 0x10($a1)
    ctx->pc = 0x313350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 18));
    // 0x313354: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x313354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x313358: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x313358u;
    {
        const bool branch_taken_0x313358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313358) {
            ctx->pc = 0x31335Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313358u;
            // 0x31335c: 0x8fa601a0  lw          $a2, 0x1A0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313364u;
            goto label_313364;
        }
    }
    ctx->pc = 0x313360u;
    // 0x313360: 0x8fa60190  lw          $a2, 0x190($sp)
    ctx->pc = 0x313360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_313364:
    // 0x313364: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x313364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x313368: 0x2404a833  addiu       $a0, $zero, -0x57CD
    ctx->pc = 0x313368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31336c: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31336cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x313370: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x313370u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x313374: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x313374u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x313378: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x313378u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31337c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31337cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x313380: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x313380u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x313384: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313388: 0x246e6c00  addiu       $t6, $v1, 0x6C00
    ctx->pc = 0x313388u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x31338c: 0x8c450370  lw          $a1, 0x370($v0)
    ctx->pc = 0x31338cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x313390: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x313390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x313394: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x313394u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x313398: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x313398u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31339c: 0x3c18009d  lui         $t8, 0x9D
    ctx->pc = 0x31339cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)157 << 16));
    // 0x3133a0: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x3133a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x3133a4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3133a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3133a8: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x3133a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x3133ac: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x3133acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x3133b0: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x3133b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x3133b4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x3133b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x3133b8: 0x8c4f0370  lw          $t7, 0x370($v0)
    ctx->pc = 0x3133b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3133bc: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3133bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3133c0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3133c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3133c4: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x3133c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x3133c8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3133c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3133cc: 0x8daf0370  lw          $t7, 0x370($t5)
    ctx->pc = 0x3133ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x3133d0: 0x25ed0010  addiu       $t5, $t7, 0x10
    ctx->pc = 0x3133d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x3133d4: 0xad8d0370  sw          $t5, 0x370($t4)
    ctx->pc = 0x3133d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 880), GPR_U32(ctx, 13));
    // 0x3133d8: 0x8fac0220  lw          $t4, 0x220($sp)
    ctx->pc = 0x3133d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x3133dc: 0xadec0010  sw          $t4, 0x10($t7)
    ctx->pc = 0x3133dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 12));
    // 0x3133e0: 0x8d6c0370  lw          $t4, 0x370($t3)
    ctx->pc = 0x3133e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x3133e4: 0x8fab0210  lw          $t3, 0x210($sp)
    ctx->pc = 0x3133e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x3133e8: 0xad8b0004  sw          $t3, 0x4($t4)
    ctx->pc = 0x3133e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 11));
    // 0x3133ec: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x3133ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x3133f0: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x3133f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x3133f4: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x3133f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x3133f8: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x3133f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x3133fc: 0x8d090370  lw          $t1, 0x370($t0)
    ctx->pc = 0x3133fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x313400: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x313400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x313404: 0xace80370  sw          $t0, 0x370($a3)
    ctx->pc = 0x313404u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 8));
    // 0x313408: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x313408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31340c: 0xad270010  sw          $a3, 0x10($t1)
    ctx->pc = 0x31340cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 7));
    // 0x313410: 0x8cc70370  lw          $a3, 0x370($a2)
    ctx->pc = 0x313410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x313414: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x313414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x313418: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x313418u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x31341c: 0x8ca60370  lw          $a2, 0x370($a1)
    ctx->pc = 0x31341cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x313420: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x313420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x313424: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x313424u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x313428: 0x8c850370  lw          $a1, 0x370($a0)
    ctx->pc = 0x313428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31342c: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x31342cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x313430: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x313430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x313434: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x313434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x313438: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x313438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31343c: 0xac430370  sw          $v1, 0x370($v0)
    ctx->pc = 0x31343cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 3));
    // 0x313440: 0xac8e0010  sw          $t6, 0x10($a0)
    ctx->pc = 0x313440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
    // 0x313444: 0x9302b280  lbu         $v0, -0x4D80($t8)
    ctx->pc = 0x313444u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4294947456)));
    // 0x313448: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x313448u;
    {
        const bool branch_taken_0x313448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313448) {
            ctx->pc = 0x31344Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313448u;
            // 0x31344c: 0x8fa40170  lw          $a0, 0x170($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313454u;
            goto label_313454;
        }
    }
    ctx->pc = 0x313450u;
    // 0x313450: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x313450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_313454:
    // 0x313454: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313458: 0x240ca833  addiu       $t4, $zero, -0x57CD
    ctx->pc = 0x313458u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31345c: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x31345cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x313460: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x313460u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x313464: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x313464u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x313468: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x313468u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31346c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x31346cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x313470: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x313470u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x313474: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x313474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x313478: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31347c: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x31347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x313480: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x313480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x313484: 0x346b000c  ori         $t3, $v1, 0xC
    ctx->pc = 0x313484u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x313488: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x313488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31348c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31348cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x313490: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x313490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x313494: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x313494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x313498: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x313498u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31349c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31349cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134a0: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x3134a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x3134a4: 0x7c600190  sq          $zero, 0x190($v1)
    ctx->pc = 0x3134a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 400), GPR_VEC(ctx, 0));
    // 0x3134a8: 0xac4a0190  sw          $t2, 0x190($v0)
    ctx->pc = 0x3134a8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 10)); // MMIO: 0x70000190
    // 0x3134ac: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x3134acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x3134b0: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x3134b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x3134b4: 0xacab00c0  sw          $t3, 0xC0($a1)
    ctx->pc = 0x3134b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 11));
    // 0x3134b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3134b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3134bc: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3134BCu;
    SET_GPR_U32(ctx, 31, 0x3134C4u);
    ctx->pc = 0x3134C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3134BCu;
    // 0x3134c0: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3134BCu, 0x3134C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3134C4u;
label_3134c4:
    // 0x3134c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3134c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3134c8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3134c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x3134cc: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x3134ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x3134d0: 0xc040a04  jal         func_102810
    ctx->pc = 0x3134D0u;
    SET_GPR_U32(ctx, 31, 0x3134D8u);
    ctx->pc = 0x3134D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3134D0u;
    // 0x3134d4: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x3134D0u, 0x3134D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3134D8u;
label_3134d8:
    // 0x3134d8: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x3134d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
    // 0x3134dc: 0x0  nop
    ctx->pc = 0x3134dcu;
    // NOP
label_3134e0:
    // 0x3134e0: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x3134e0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x3134e4: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x3134e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x3134e8: 0x0  nop
    ctx->pc = 0x3134e8u;
    // NOP
    // 0x3134ec: 0x0  nop
    ctx->pc = 0x3134ecu;
    // NOP
    // 0x3134f0: 0x0  nop
    ctx->pc = 0x3134f0u;
    // NOP
    // 0x3134f4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3134F4u;
    {
        const bool branch_taken_0x3134f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3134f4) {
            ctx->pc = 0x3134E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3134e0;
        }
    }
    ctx->pc = 0x3134FCu;
    // 0x3134fc: 0x0  nop
    ctx->pc = 0x3134fcu;
    // NOP
label_313500:
    // 0x313500: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x313500u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x313504: 0x2b0182b  sltu        $v1, $s5, $s0
    ctx->pc = 0x313504u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x313508: 0x2779821  addu        $s3, $s3, $s7
    ctx->pc = 0x313508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x31350c: 0x2569021  addu        $s2, $s2, $s6
    ctx->pc = 0x31350cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x313510: 0x1460fe99  bnez        $v1, . + 4 + (-0x167 << 2)
    ctx->pc = 0x313510u;
    {
        const bool branch_taken_0x313510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313510u;
        // 0x313514: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313510) {
            ctx->pc = 0x312F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_312f78;
        }
    }
    ctx->pc = 0x313518u;
label_313518:
    // 0x313518: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x313518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x31351c: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x31351cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x313520: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x313520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x313524: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x313524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
    // 0x313528: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x313528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x31352c: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x31352cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x313530: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x313530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x313534: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x313534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x313538: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x313538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
    // 0x31353c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x313540: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x313540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
    // 0x313544: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x313544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313548: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x313548u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31354c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x31354cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x313550: 0x5460fe5a  bnel        $v1, $zero, . + 4 + (-0x1A6 << 2)
    ctx->pc = 0x313550u;
    {
        const bool branch_taken_0x313550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x313550) {
            ctx->pc = 0x313554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313550u;
            // 0x313554: 0x8fb101f0  lw          $s1, 0x1F0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312EBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_312ebc;
        }
    }
    ctx->pc = 0x313558u;
label_313558:
    // 0x313558: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x313558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31355c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31355cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x313560: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x313560u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x313564: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x313564u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313568: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x313568u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31356c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31356cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x313570: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x313570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x313574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31357c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31357cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313580: 0x3e00008  jr          $ra
    ctx->pc = 0x313580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313580u;
        // 0x313584: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313588u;
    // 0x313588: 0x0  nop
    ctx->pc = 0x313588u;
    // NOP
    // 0x31358c: 0x0  nop
    ctx->pc = 0x31358cu;
    // NOP
    // 0x313590: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x313590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x313594: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x313594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313598: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x313598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x31359c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x31359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x3135a0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3135a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3135a4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3135a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3135a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3135a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3135ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3135acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3135b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3135b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3135b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3135b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3135b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3135b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3135bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3135bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3135c0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3135c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3135c4: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x3135c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
    // 0x3135c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3135c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3135cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3135ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3135d0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3135d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x3135d4: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x3135d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3135d8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3135d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x3135dc: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x3135dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3135e0: 0x90420015  lbu         $v0, 0x15($v0)
    ctx->pc = 0x3135e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x3135e4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3135e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x3135e8: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x3135e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3135ec: 0x845e0010  lh          $fp, 0x10($v0)
    ctx->pc = 0x3135ecu;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3135f0: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x3135f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x3135f4: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x3135f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x3135f8: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x3135f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3135fc: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x3135fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x313600: 0x90440018  lbu         $a0, 0x18($v0)
    ctx->pc = 0x313600u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x313604: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x313604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x313608: 0x3c22818  mult        $a1, $fp, $v0
    ctx->pc = 0x313608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31360c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x31360cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x313610: 0x46b821  addu        $s7, $v0, $a2
    ctx->pc = 0x313610u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x313614: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x313614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x313618: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313618u;
    {
        const bool branch_taken_0x313618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x31361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313618u;
        // 0x31361c: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313618) {
            ctx->pc = 0x313628u;
            goto label_313628;
        }
    }
    ctx->pc = 0x313620u;
    // 0x313620: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x313620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x313624: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x313624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_313628:
    // 0x313628: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x313628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31362c: 0x94420016  lhu         $v0, 0x16($v0)
    ctx->pc = 0x31362cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x313630: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x313630u;
    {
        const bool branch_taken_0x313630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313630) {
            ctx->pc = 0x313634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313630u;
            // 0x313634: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313648u;
            goto label_313648;
        }
    }
    ctx->pc = 0x313638u;
    // 0x313638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31363c: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x31363cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x313640: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x313640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x313644: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x313644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_313648:
    // 0x313648: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x313648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x31364c: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x31364cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x313650: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x313650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
    // 0x313654: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x313654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x313658: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x313658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x31365c: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x31365cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x313660: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x313660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x313664: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x313664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x313668: 0x3c31018  mult        $v0, $fp, $v1
    ctx->pc = 0x313668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31366c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x31366cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313670: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x313670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x313674: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x313674u;
    {
        const bool branch_taken_0x313674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313674u;
        // 0x313678: 0xafa20190  sw          $v0, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313674) {
            ctx->pc = 0x31369Cu;
            goto label_31369c;
        }
    }
    ctx->pc = 0x31367Cu;
    // 0x31367c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x31367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x313680: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x313680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x313684: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x313684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x313688: 0x21023  negu        $v0, $v0
    ctx->pc = 0x313688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x31368c: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x31368cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x313690: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x313690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x313694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313698: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x313698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_31369c:
    // 0x31369c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x31369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x3136a0: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x3136a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3136a4: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x3136a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x3136a8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x3136a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3136ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3136acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3136b0: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x3136b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x3136b4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x3136b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x3136b8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3136b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3136bc: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x3136bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x3136c0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x3136c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3136c4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3136c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3136c8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3136c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3136cc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3136CCu;
    {
        const bool branch_taken_0x3136cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136CCu;
        // 0x3136d0: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136cc) {
            ctx->pc = 0x3136F4u;
            goto label_3136f4;
        }
    }
    ctx->pc = 0x3136D4u;
    // 0x3136d4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x3136d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x3136d8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3136d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3136dc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x3136dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3136e0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3136e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3136e4: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x3136e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x3136e8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x3136e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3136ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3136ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3136f0: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x3136f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_3136f4:
    // 0x3136f4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x3136f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x3136f8: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x3136f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x3136fc: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x3136fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x313700: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x313700u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x313704: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x313704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x313708: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x313708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x31370c: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x31370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x313710: 0x43602  srl         $a2, $a0, 24
    ctx->pc = 0x313710u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x313714: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x313714u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x313718: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x313718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31371c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x313720: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x313720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x313724: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x313724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x313728: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x313728u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x31372c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x31372cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x313730: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x313730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x313734: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x313734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x313738: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x313738u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x31373c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x313740: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x313740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x313744: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x313744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x313748: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x313748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x31374c: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x31374cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x313750: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x313750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x313754: 0x3123c  dsll32      $v0, $v1, 8
    ctx->pc = 0x313754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 8));
    // 0x313758: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x313758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x31375c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31375Cu;
    {
        const bool branch_taken_0x31375c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31375Cu;
        // 0x313760: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31375c) {
            ctx->pc = 0x313780u;
            goto label_313780;
        }
    }
    ctx->pc = 0x313764u;
    // 0x313764: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x313764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x313768: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x313768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31376c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x31376cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x313770: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x313770u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x313774: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x313774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x313778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31377c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x31377cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_313780:
    // 0x313780: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x313780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x313784: 0xc0c4a34  jal         func_3128D0
    ctx->pc = 0x313784u;
    SET_GPR_U32(ctx, 31, 0x31378Cu);
    ctx->pc = 0x313788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313784u;
    // 0x313788: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128D0u, 0x313784u, 0x31378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31378Cu;
label_31378c:
    // 0x31378c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x31378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x313790: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x313790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x313794: 0xc0c4a40  jal         func_312900
    ctx->pc = 0x313794u;
    SET_GPR_U32(ctx, 31, 0x31379Cu);
    ctx->pc = 0x313798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313794u;
    // 0x313798: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312900u, 0x313794u, 0x31379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31379Cu;
label_31379c:
    // 0x31379c: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x31379cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3137a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3137a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3137a4: 0x10600268  beqz        $v1, . + 4 + (0x268 << 2)
    ctx->pc = 0x3137A4u;
    {
        const bool branch_taken_0x3137a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3137A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137A4u;
        // 0x3137a8: 0xafa001c0  sw          $zero, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3137a4) {
            ctx->pc = 0x314148u;
            goto label_314148;
        }
    }
    ctx->pc = 0x3137ACu;
    // 0x3137ac: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3137acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3137b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3137b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3137b4: 0x318fc  dsll32      $v1, $v1, 3
    ctx->pc = 0x3137b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 3));
    // 0x3137b8: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3137b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x3137bc: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x3137bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_3137c0:
    // 0x3137c0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x3137c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x3137c4: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x3137c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3137c8: 0x10600253  beqz        $v1, . + 4 + (0x253 << 2)
    ctx->pc = 0x3137C8u;
    {
        const bool branch_taken_0x3137c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3137CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137C8u;
        // 0x3137cc: 0xafa001d0  sw          $zero, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3137c8) {
            ctx->pc = 0x314118u;
            goto label_314118;
        }
    }
    ctx->pc = 0x3137D0u;
    // 0x3137d0: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x3137d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3137d4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x3137d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3137d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3137d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3137dc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3137dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3137e0:
    // 0x3137e0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x3137e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3137e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3137e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3137e8: 0x27b40210  addiu       $s4, $sp, 0x210
    ctx->pc = 0x3137e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x3137ec: 0x27b30200  addiu       $s3, $sp, 0x200
    ctx->pc = 0x3137ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3137f0: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x3137f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x3137f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3137f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3137f8: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x3137f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x3137fc: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x3137fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x313800: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x313804: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x313804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
    // 0x313808: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x313808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x31380c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x31380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x313810: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x313810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x313814: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x313814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x313818: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x313818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31381c: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x31381cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x313820: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x313820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x313824: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x313824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x313828: 0x8c52002c  lw          $s2, 0x2C($v0)
    ctx->pc = 0x313828u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x31382c: 0x8c560030  lw          $s6, 0x30($v0)
    ctx->pc = 0x31382cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_313830:
    // 0x313830: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x313830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x313834: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x313834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x313838: 0x568823  subu        $s1, $v0, $s6
    ctx->pc = 0x313838u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x31383c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31383cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313840: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x313840u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x313844: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x313844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x313848: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x313848u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x31384c: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x31384cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x313850: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x313850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x313854: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x313854u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313858: 0x0  nop
    ctx->pc = 0x313858u;
    // NOP
    // 0x31385c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31385cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x313860: 0x4614001a  mula.s      $f0, $f20
    ctx->pc = 0x313860u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x313864: 0xc048930  jal         func_1224C0
    ctx->pc = 0x313864u;
    SET_GPR_U32(ctx, 31, 0x31386Cu);
    ctx->pc = 0x313868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313864u;
    // 0x313868: 0x46150b1d  msub.s      $f12, $f1, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[21]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x313864u, 0x31386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31386Cu;
label_31386c:
    // 0x31386c: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x31386cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x313870: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x313870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313874: 0xc048a46  jal         func_122918
    ctx->pc = 0x313874u;
    SET_GPR_U32(ctx, 31, 0x31387Cu);
    ctx->pc = 0x313878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313874u;
    // 0x313878: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x313874u, 0x31387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31387Cu;
label_31387c:
    // 0x31387c: 0xc048bde  jal         func_122F78
    ctx->pc = 0x31387Cu;
    SET_GPR_U32(ctx, 31, 0x313884u);
    ctx->pc = 0x313880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31387Cu;
    // 0x313880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x31387Cu, 0x313884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313884u;
label_313884:
    // 0x313884: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x313884u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313888: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x313888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x31388c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x31388cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313890: 0x0  nop
    ctx->pc = 0x313890u;
    // NOP
    // 0x313894: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x313894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x313898: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x313898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31389c: 0x4614001a  mula.s      $f0, $f20
    ctx->pc = 0x31389cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x3138a0: 0xc048930  jal         func_1224C0
    ctx->pc = 0x3138A0u;
    SET_GPR_U32(ctx, 31, 0x3138A8u);
    ctx->pc = 0x3138A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3138A0u;
    // 0x3138a4: 0x46150b1c  madd.s      $f12, $f1, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[21]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x3138A0u, 0x3138A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138A8u;
label_3138a8:
    // 0x3138a8: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x3138a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x3138ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3138acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3138b0: 0xc048a46  jal         func_122918
    ctx->pc = 0x3138B0u;
    SET_GPR_U32(ctx, 31, 0x3138B8u);
    ctx->pc = 0x3138B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3138B0u;
    // 0x3138b4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x3138B0u, 0x3138B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138B8u;
label_3138b8:
    // 0x3138b8: 0xc048bde  jal         func_122F78
    ctx->pc = 0x3138B8u;
    SET_GPR_U32(ctx, 31, 0x3138C0u);
    ctx->pc = 0x3138BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3138B8u;
    // 0x3138bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x3138B8u, 0x3138C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138C0u;
label_3138c0:
    // 0x3138c0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x3138c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3138c4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3138c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3138c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3138c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3138cc: 0x2aa30004  slti        $v1, $s5, 0x4
    ctx->pc = 0x3138ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3138d0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3138d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3138d4: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x3138d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x3138d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3138d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3138dc: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x3138dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x3138e0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3138e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3138e4: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3138E4u;
    {
        const bool branch_taken_0x3138e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3138E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138E4u;
        // 0x3138e8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3138e4) {
            ctx->pc = 0x313830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_313830;
        }
    }
    ctx->pc = 0x3138ECu;
    // 0x3138ec: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3138ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3138f0: 0x8c424790  lw          $v0, 0x4790($v0)
    ctx->pc = 0x3138f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18320)));
    // 0x3138f4: 0x12e20034  beq         $s7, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3138F4u;
    {
        const bool branch_taken_0x3138f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x3138f4) {
            ctx->pc = 0x3139C8u;
            goto label_3139c8;
        }
    }
    ctx->pc = 0x3138FCu;
    // 0x3138fc: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x3138fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x313900: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x313900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313904: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x313904u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x313908: 0x10470017  beq         $v0, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x313908u;
    {
        const bool branch_taken_0x313908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x313908) {
            ctx->pc = 0x313968u;
            goto label_313968;
        }
    }
    ctx->pc = 0x313910u;
    // 0x313910: 0x87a20170  lh          $v0, 0x170($sp)
    ctx->pc = 0x313910u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x313914: 0x1e543c  dsll32      $t2, $fp, 16
    ctx->pc = 0x313914u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) << (32 + 16));
    // 0x313918: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x313918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31391c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x31391cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x313920: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x313920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x313924: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x313924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x313928: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x313928u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31392c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31392cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313930: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x313930u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313934: 0xc040532  jal         func_1014C8
    ctx->pc = 0x313934u;
    SET_GPR_U32(ctx, 31, 0x31393Cu);
    ctx->pc = 0x313938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313934u;
    // 0x313938: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x313934u, 0x31393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31393Cu;
label_31393c:
    // 0x31393c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31393Cu;
    SET_GPR_U32(ctx, 31, 0x313944u);
    ctx->pc = 0x313940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31393Cu;
    // 0x313940: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31393Cu, 0x313944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313944u;
label_313944:
    // 0x313944: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x313944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x313948: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x313948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31394c: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31394Cu;
    SET_GPR_U32(ctx, 31, 0x313954u);
    ctx->pc = 0x313950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31394Cu;
    // 0x313950: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x31394Cu, 0x313954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313954u;
label_313954:
    // 0x313954: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x313954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313958: 0xc040454  jal         func_101150
    ctx->pc = 0x313958u;
    SET_GPR_U32(ctx, 31, 0x313960u);
    ctx->pc = 0x31395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313958u;
    // 0x31395c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x313958u, 0x313960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313960u;
label_313960:
    // 0x313960: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x313960u;
    {
        const bool branch_taken_0x313960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313960) {
            ctx->pc = 0x3139C0u;
            goto label_3139c0;
        }
    }
    ctx->pc = 0x313968u;
label_313968:
    // 0x313968: 0x87a20170  lh          $v0, 0x170($sp)
    ctx->pc = 0x313968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x31396c: 0x1e543c  dsll32      $t2, $fp, 16
    ctx->pc = 0x31396cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) << (32 + 16));
    // 0x313970: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x313970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x313974: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x313974u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x313978: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x313978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x31397c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x31397cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313980: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x313980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x313984: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x313984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x313988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31398c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31398cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313990: 0xc040532  jal         func_1014C8
    ctx->pc = 0x313990u;
    SET_GPR_U32(ctx, 31, 0x313998u);
    ctx->pc = 0x313994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313990u;
    // 0x313994: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x313990u, 0x313998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313998u;
label_313998:
    // 0x313998: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x313998u;
    SET_GPR_U32(ctx, 31, 0x3139A0u);
    ctx->pc = 0x31399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313998u;
    // 0x31399c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x313998u, 0x3139A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3139A0u;
label_3139a0:
    // 0x3139a0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3139a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3139a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3139a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3139a8: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3139A8u;
    SET_GPR_U32(ctx, 31, 0x3139B0u);
    ctx->pc = 0x3139ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3139A8u;
    // 0x3139ac: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x3139A8u, 0x3139B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3139B0u;
label_3139b0:
    // 0x3139b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3139b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3139b4: 0xc040454  jal         func_101150
    ctx->pc = 0x3139B4u;
    SET_GPR_U32(ctx, 31, 0x3139BCu);
    ctx->pc = 0x3139B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3139B4u;
    // 0x3139b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x3139B4u, 0x3139BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3139BCu;
label_3139bc:
    // 0x3139bc: 0x0  nop
    ctx->pc = 0x3139bcu;
    // NOP
label_3139c0:
    // 0x3139c0: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3139c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3139c4: 0xac574790  sw          $s7, 0x4790($v0)
    ctx->pc = 0x3139c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18320), GPR_U32(ctx, 23));
label_3139c8:
    // 0x3139c8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x3139c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3139cc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3139ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x3139d0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x3139d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3139d4: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x3139d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x3139d8: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x3139d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x3139dc: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3139dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3139e0: 0xac450370  sw          $a1, 0x370($v0)
    ctx->pc = 0x3139e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 5));
    // 0x3139e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3139e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3139e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3139e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3139ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3139ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3139f0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3139f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3139f4: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3139f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x3139f8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3139f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3139fc: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x3139fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x313a00: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x313a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x313a04: 0xfca00010  sd          $zero, 0x10($a1)
    ctx->pc = 0x313a04u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 0));
    // 0x313a08: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313a0c: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x313a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x313a10: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x313a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x313a14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x313a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313a18: 0x24710020  addiu       $s1, $v1, 0x20
    ctx->pc = 0x313a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x313a1c: 0xac510370  sw          $s1, 0x370($v0)
    ctx->pc = 0x313a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 17));
    // 0x313a20: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x313a20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x313a24: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x313a24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x313a28: 0x10440019  beq         $v0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x313A28u;
    {
        const bool branch_taken_0x313a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x313a28) {
            ctx->pc = 0x313A90u;
            goto label_313a90;
        }
    }
    ctx->pc = 0x313A30u;
    // 0x313a30: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x313A30u;
    SET_GPR_U32(ctx, 31, 0x313A38u);
    ctx->pc = 0x313A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A30u;
    // 0x313a34: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    goto label_312c20;
    ctx->pc = 0x313A38u;
label_313a38:
    // 0x313a38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313a3c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x313a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x313a40: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x313a40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x313a44: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x313a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x313a48: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x313a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x313a4c: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x313a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x313a50: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x313A50u;
    SET_GPR_U32(ctx, 31, 0x313A58u);
    ctx->pc = 0x313A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A50u;
    // 0x313a54: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    goto label_312c20;
    ctx->pc = 0x313A58u;
label_313a58:
    // 0x313a58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313a5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x313a5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x313a60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x313a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313a64: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x313a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x313a68: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313a6c: 0x2042025  or          $a0, $s0, $a0
    ctx->pc = 0x313a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x313a70: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x313a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x313a74: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x313a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x313a78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313a7c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x313a7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x313a80: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x313a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x313a84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x313a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x313a88: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x313A88u;
    {
        const bool branch_taken_0x313a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A88u;
        // 0x313a8c: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a88) {
            ctx->pc = 0x313AF0u;
            goto label_313af0;
        }
    }
    ctx->pc = 0x313A90u;
label_313a90:
    // 0x313a90: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x313A90u;
    SET_GPR_U32(ctx, 31, 0x313A98u);
    ctx->pc = 0x313A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A90u;
    // 0x313a94: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    goto label_312c20;
    ctx->pc = 0x313A98u;
label_313a98:
    // 0x313a98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313a9c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x313a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x313aa0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x313aa0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x313aa4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x313aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x313aa8: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x313aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x313aac: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x313aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x313ab0: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x313AB0u;
    SET_GPR_U32(ctx, 31, 0x313AB8u);
    ctx->pc = 0x313AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313AB0u;
    // 0x313ab4: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    goto label_312c20;
    ctx->pc = 0x313AB8u;
label_313ab8:
    // 0x313ab8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313abc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x313abcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x313ac0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x313ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313ac4: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x313ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x313ac8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313acc: 0x2042025  or          $a0, $s0, $a0
    ctx->pc = 0x313accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x313ad0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x313ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x313ad4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x313ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x313ad8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313adc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x313adcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x313ae0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x313ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x313ae4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x313ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x313ae8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x313ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x313aec: 0x0  nop
    ctx->pc = 0x313aecu;
    // NOP
label_313af0:
    // 0x313af0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313af4: 0x8c470370  lw          $a3, 0x370($v0)
    ctx->pc = 0x313af4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x313af8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x313af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x313afc: 0x3c03c0aa  lui         $v1, 0xC0AA
    ctx->pc = 0x313afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49322 << 16));
    // 0x313b00: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x313b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x313b04: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x313b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x313b08: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x313b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x313b0c: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x313b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x313b10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x313b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x313b14: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x313b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313b18: 0xfce00010  sd          $zero, 0x10($a3)
    ctx->pc = 0x313b18u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 0));
    // 0x313b1c: 0xfce60018  sd          $a2, 0x18($a3)
    ctx->pc = 0x313b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 6));
    // 0x313b20: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x313b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x313b24: 0xfce50020  sd          $a1, 0x20($a3)
    ctx->pc = 0x313b24u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 5));
    // 0x313b28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x313b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x313b2c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x313b2cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x313b30: 0xfce20028  sd          $v0, 0x28($a3)
    ctx->pc = 0x313b30u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 40), GPR_U64(ctx, 2));
    // 0x313b34: 0xfce30030  sd          $v1, 0x30($a3)
    ctx->pc = 0x313b34u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 48), GPR_U64(ctx, 3));
    // 0x313b38: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x313b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x313b3c: 0x24035135  addiu       $v1, $zero, 0x5135
    ctx->pc = 0x313b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20789));
    // 0x313b40: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x313b40u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x313b44: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x313b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313b48: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x313b48u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x313b4c: 0x3c031351  lui         $v1, 0x1351
    ctx->pc = 0x313b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4945 << 16));
    // 0x313b50: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x313b50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x313b54: 0x34633513  ori         $v1, $v1, 0x3513
    ctx->pc = 0x313b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x313b58: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x313b58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x313b5c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x313b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x313b60: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x313b60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x313b64: 0xfce30038  sd          $v1, 0x38($a3)
    ctx->pc = 0x313b64u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
    // 0x313b68: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x313b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x313b6c: 0x8cad0370  lw          $t5, 0x370($a1)
    ctx->pc = 0x313b6cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x313b70: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x313b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x313b74: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x313b74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x313b78: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x313b78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x313b7c: 0x25a50040  addiu       $a1, $t5, 0x40
    ctx->pc = 0x313b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x313b80: 0xac850370  sw          $a1, 0x370($a0)
    ctx->pc = 0x313b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 5));
    // 0x313b84: 0xada20040  sw          $v0, 0x40($t5)
    ctx->pc = 0x313b84u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 64), GPR_U32(ctx, 2));
    // 0x313b88: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x313b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x313b8c: 0x8c6e0370  lw          $t6, 0x370($v1)
    ctx->pc = 0x313b8cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x313b90: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x313b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x313b94: 0x8fad0210  lw          $t5, 0x210($sp)
    ctx->pc = 0x313b94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x313b98: 0xadc20004  sw          $v0, 0x4($t6)
    ctx->pc = 0x313b98u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 2));
    // 0x313b9c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x313b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x313ba0: 0x8d8e0370  lw          $t6, 0x370($t4)
    ctx->pc = 0x313ba0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x313ba4: 0xd1100  sll         $v0, $t5, 4
    ctx->pc = 0x313ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x313ba8: 0x244c6c00  addiu       $t4, $v0, 0x6C00
    ctx->pc = 0x313ba8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x313bac: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x313bacu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x313bb0: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x313bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x313bb4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x313bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x313bb8: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x313bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x313bbc: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x313bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x313bc0: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x313bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x313bc4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x313bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x313bc8: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x313bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x313bcc: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x313bccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x313bd0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x313bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x313bd4: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x313bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x313bd8: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x313bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x313bdc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x313bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x313be0: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x313be0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x313be4: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x313be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x313be8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x313be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x313bec: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x313becu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x313bf0: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x313bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x313bf4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x313bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x313bf8: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x313bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x313bfc: 0xacac0010  sw          $t4, 0x10($a1)
    ctx->pc = 0x313bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 12));
    // 0x313c00: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x313c00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x313c04: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x313C04u;
    {
        const bool branch_taken_0x313c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313c04) {
            ctx->pc = 0x313C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313C04u;
            // 0x313c08: 0x8fa20200  lw          $v0, 0x200($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C60u;
            goto label_313c60;
        }
    }
    ctx->pc = 0x313C0Cu;
    // 0x313c0c: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x313c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x313c10: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x313c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x313c14: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x313c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x313c18: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x313c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x313c1c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x313c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x313c20: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x313c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x313c24: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x313c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x313c28: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x313c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x313c2c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x313c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x313c30: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x313c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x313c34: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x313c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x313c38: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x313c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x313c3c: 0x0  nop
    ctx->pc = 0x313c3cu;
    // NOP
    // 0x313c40: 0x1810  mfhi        $v1
    ctx->pc = 0x313c40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x313c44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x313c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x313c48: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x313c48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x313c4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x313c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x313c50: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x313c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x313c54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x313c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x313c58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313C58u;
    {
        const bool branch_taken_0x313c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C58u;
        // 0x313c5c: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c58) {
            ctx->pc = 0x313C68u;
            goto label_313c68;
        }
    }
    ctx->pc = 0x313C60u;
label_313c60:
    // 0x313c60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x313c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x313c64: 0x24477100  addiu       $a3, $v0, 0x7100
    ctx->pc = 0x313c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_313c68:
    // 0x313c68: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313c6c: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x313c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x313c70: 0x8c460370  lw          $a2, 0x370($v0)
    ctx->pc = 0x313c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x313c74: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x313c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x313c78: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x313c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x313c7c: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x313c7cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x313c80: 0x8faf0214  lw          $t7, 0x214($sp)
    ctx->pc = 0x313c80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x313c84: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x313c84u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x313c88: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x313c88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x313c8c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313c90: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x313c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x313c94: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x313c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x313c98: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x313c98u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x313c9c: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x313c9cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x313ca0: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x313ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x313ca4: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x313ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x313ca8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x313ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x313cac: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x313cacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x313cb0: 0x8c710370  lw          $s1, 0x370($v1)
    ctx->pc = 0x313cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x313cb4: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x313cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x313cb8: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x313cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x313cbc: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x313cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x313cc0: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x313cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x313cc4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x313cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x313cc8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x313cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x313ccc: 0x8dd10370  lw          $s1, 0x370($t6)
    ctx->pc = 0x313cccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x313cd0: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x313cd0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x313cd4: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x313cd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x313cd8: 0x25ce6c00  addiu       $t6, $t6, 0x6C00
    ctx->pc = 0x313cd8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27648));
    // 0x313cdc: 0xac4f0370  sw          $t7, 0x370($v0)
    ctx->pc = 0x313cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 15));
    // 0x313ce0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x313ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x313ce4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x313ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x313ce8: 0x8da20370  lw          $v0, 0x370($t5)
    ctx->pc = 0x313ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x313cec: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x313cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x313cf0: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x313cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x313cf4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x313cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x313cf8: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x313cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x313cfc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x313cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x313d00: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x313d00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x313d04: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x313d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x313d08: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x313d08u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x313d0c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x313d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x313d10: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x313d10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x313d14: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x313d14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x313d18: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x313d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x313d1c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x313d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x313d20: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x313d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x313d24: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x313d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x313d28: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x313d28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x313d2c: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x313d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x313d30: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x313d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x313d34: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x313d34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x313d38: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x313d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x313d3c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x313d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x313d40: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x313d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x313d44: 0xacae0010  sw          $t6, 0x10($a1)
    ctx->pc = 0x313d44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 14));
    // 0x313d48: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x313d48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x313d4c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x313D4Cu;
    {
        const bool branch_taken_0x313d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313d4c) {
            ctx->pc = 0x313D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313D4Cu;
            // 0x313d50: 0x8fa20204  lw          $v0, 0x204($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313DA8u;
            goto label_313da8;
        }
    }
    ctx->pc = 0x313D54u;
    // 0x313d54: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x313d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x313d58: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x313d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x313d5c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x313d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x313d60: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x313d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x313d64: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x313d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x313d68: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x313d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x313d6c: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x313d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x313d70: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x313d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x313d74: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x313d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x313d78: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x313d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x313d7c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x313d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x313d80: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x313d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x313d84: 0x0  nop
    ctx->pc = 0x313d84u;
    // NOP
    // 0x313d88: 0x1810  mfhi        $v1
    ctx->pc = 0x313d88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x313d8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x313d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x313d90: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x313d90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x313d94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x313d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x313d98: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x313d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x313d9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x313d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x313da0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313DA0u;
    {
        const bool branch_taken_0x313da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DA0u;
        // 0x313da4: 0x623024  and         $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313da0) {
            ctx->pc = 0x313DB0u;
            goto label_313db0;
        }
    }
    ctx->pc = 0x313DA8u;
label_313da8:
    // 0x313da8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x313da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x313dac: 0x24467100  addiu       $a2, $v0, 0x7100
    ctx->pc = 0x313dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_313db0:
    // 0x313db0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313db4: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x313db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x313db8: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x313db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x313dbc: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x313dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x313dc0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x313dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x313dc4: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x313dc4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x313dc8: 0x8faf0218  lw          $t7, 0x218($sp)
    ctx->pc = 0x313dc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x313dcc: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x313dccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x313dd0: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x313dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x313dd4: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x313dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x313dd8: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x313dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x313ddc: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313de0: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x313de0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x313de4: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x313de4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x313de8: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x313de8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x313dec: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x313decu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x313df0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x313df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x313df4: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x313df4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x313df8: 0x8c710370  lw          $s1, 0x370($v1)
    ctx->pc = 0x313df8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x313dfc: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x313dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x313e00: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x313e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x313e04: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x313e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x313e08: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x313e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x313e0c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x313e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x313e10: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x313e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x313e14: 0x8dd10370  lw          $s1, 0x370($t6)
    ctx->pc = 0x313e14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x313e18: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x313e18u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x313e1c: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x313e1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x313e20: 0x25ce6c00  addiu       $t6, $t6, 0x6C00
    ctx->pc = 0x313e20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27648));
    // 0x313e24: 0xadaf0370  sw          $t7, 0x370($t5)
    ctx->pc = 0x313e24u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 880), GPR_U32(ctx, 15));
    // 0x313e28: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x313e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x313e2c: 0x8c4d0370  lw          $t5, 0x370($v0)
    ctx->pc = 0x313e2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x313e30: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x313e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x313e34: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x313e34u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x313e38: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x313e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x313e3c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x313e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x313e40: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x313e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x313e44: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x313e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x313e48: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x313e48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x313e4c: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x313e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x313e50: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x313e50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x313e54: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x313e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x313e58: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x313e58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x313e5c: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x313e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x313e60: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x313e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x313e64: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x313e64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x313e68: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x313e68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x313e6c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x313e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x313e70: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x313e70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x313e74: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x313e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x313e78: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x313e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x313e7c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x313e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x313e80: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x313e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x313e84: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x313e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x313e88: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x313e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x313e8c: 0xacae0010  sw          $t6, 0x10($a1)
    ctx->pc = 0x313e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 14));
    // 0x313e90: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x313e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x313e94: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x313E94u;
    {
        const bool branch_taken_0x313e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313e94) {
            ctx->pc = 0x313E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313E94u;
            // 0x313e98: 0x8fa20208  lw          $v0, 0x208($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313EF0u;
            goto label_313ef0;
        }
    }
    ctx->pc = 0x313E9Cu;
    // 0x313e9c: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x313e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x313ea0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x313ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x313ea4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x313ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x313ea8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x313ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x313eac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x313eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x313eb0: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x313eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x313eb4: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x313eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x313eb8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x313eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x313ebc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x313ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x313ec0: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x313ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x313ec4: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x313ec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x313ec8: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x313ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x313ecc: 0x0  nop
    ctx->pc = 0x313eccu;
    // NOP
    // 0x313ed0: 0x1810  mfhi        $v1
    ctx->pc = 0x313ed0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x313ed4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x313ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x313ed8: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x313ed8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x313edc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x313edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x313ee0: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x313ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x313ee4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x313ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x313ee8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313EE8u;
    {
        const bool branch_taken_0x313ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313EE8u;
        // 0x313eec: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ee8) {
            ctx->pc = 0x313EF8u;
            goto label_313ef8;
        }
    }
    ctx->pc = 0x313EF0u;
label_313ef0:
    // 0x313ef0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x313ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x313ef4: 0x24477100  addiu       $a3, $v0, 0x7100
    ctx->pc = 0x313ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_313ef8:
    // 0x313ef8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313efc: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x313efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x313f00: 0x8c460370  lw          $a2, 0x370($v0)
    ctx->pc = 0x313f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x313f04: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x313f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x313f08: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x313f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x313f0c: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x313f0cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x313f10: 0x8faf021c  lw          $t7, 0x21C($sp)
    ctx->pc = 0x313f10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x313f14: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x313f14u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x313f18: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x313f18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x313f1c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x313f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x313f20: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x313f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x313f24: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x313f24u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x313f28: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x313f28u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x313f2c: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x313f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x313f30: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x313f30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x313f34: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x313f34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x313f38: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x313f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x313f3c: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x313f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x313f40: 0x8c700370  lw          $s0, 0x370($v1)
    ctx->pc = 0x313f40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x313f44: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x313f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x313f48: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x313f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x313f4c: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x313f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x313f50: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x313f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x313f54: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x313f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x313f58: 0x8dd00370  lw          $s0, 0x370($t6)
    ctx->pc = 0x313f58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x313f5c: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x313f5cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x313f60: 0x260f0010  addiu       $t7, $s0, 0x10
    ctx->pc = 0x313f60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x313f64: 0x25ce6c00  addiu       $t6, $t6, 0x6C00
    ctx->pc = 0x313f64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27648));
    // 0x313f68: 0xac4f0370  sw          $t7, 0x370($v0)
    ctx->pc = 0x313f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 15));
    // 0x313f6c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x313f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x313f70: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x313f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x313f74: 0x8dad0370  lw          $t5, 0x370($t5)
    ctx->pc = 0x313f74u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x313f78: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x313f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x313f7c: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x313f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x313f80: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x313f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x313f84: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x313f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x313f88: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x313f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x313f8c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x313f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x313f90: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x313f90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x313f94: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x313f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x313f98: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x313f98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x313f9c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x313f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x313fa0: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x313fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x313fa4: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x313fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x313fa8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x313fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x313fac: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x313facu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x313fb0: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x313fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x313fb4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x313fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x313fb8: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x313fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x313fbc: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x313fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x313fc0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x313fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x313fc4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x313fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x313fc8: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x313fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x313fcc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x313fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x313fd0: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x313fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x313fd4: 0xacae0010  sw          $t6, 0x10($a1)
    ctx->pc = 0x313fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 14));
    // 0x313fd8: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x313fd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x313fdc: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x313FDCu;
    {
        const bool branch_taken_0x313fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313fdc) {
            ctx->pc = 0x313FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313FDCu;
            // 0x313fe0: 0x8fa2020c  lw          $v0, 0x20C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314038u;
            goto label_314038;
        }
    }
    ctx->pc = 0x313FE4u;
    // 0x313fe4: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x313fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x313fe8: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x313fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x313fec: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x313fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x313ff0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x313ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x313ff4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x313ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x313ff8: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x313ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x313ffc: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x313ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x314000: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x314000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x314004: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x314004u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x314008: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x314008u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x31400c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x31400cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x314010: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x314010u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x314014: 0x0  nop
    ctx->pc = 0x314014u;
    // NOP
    // 0x314018: 0x1810  mfhi        $v1
    ctx->pc = 0x314018u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31401c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31401cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x314020: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x314020u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x314024: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x314024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x314028: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x314028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x31402c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x314030: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314030u;
    {
        const bool branch_taken_0x314030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314030u;
        // 0x314034: 0x622024  and         $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314030) {
            ctx->pc = 0x314040u;
            goto label_314040;
        }
    }
    ctx->pc = 0x314038u;
label_314038:
    // 0x314038: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31403c: 0x24447100  addiu       $a0, $v0, 0x7100
    ctx->pc = 0x31403cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_314040:
    // 0x314040: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x314040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x314044: 0x240ca833  addiu       $t4, $zero, -0x57CD
    ctx->pc = 0x314044u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x314048: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x314048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31404c: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31404cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x314050: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x314050u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x314054: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x314054u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x314058: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x314058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x31405c: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31405cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x314060: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x314060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x314064: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x314064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x314068: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x314068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31406c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31406cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x314070: 0x346b0012  ori         $t3, $v1, 0x12
    ctx->pc = 0x314070u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
    // 0x314074: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x314074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x314078: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x314078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31407c: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x31407cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x314080: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x314080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x314084: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x314084u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x314088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x314088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31408c: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x31408cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x314090: 0x7c6001f0  sq          $zero, 0x1F0($v1)
    ctx->pc = 0x314090u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 496), GPR_VEC(ctx, 0));
    // 0x314094: 0xac4a01f0  sw          $t2, 0x1F0($v0)
    ctx->pc = 0x314094u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 496), GPR_U32(ctx, 10)); // MMIO: 0x700001f0
    // 0x314098: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x314098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31409c: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x31409cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x3140a0: 0xacab00c0  sw          $t3, 0xC0($a1)
    ctx->pc = 0x3140a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 11));
    // 0x3140a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3140a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3140a8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3140A8u;
    SET_GPR_U32(ctx, 31, 0x3140B0u);
    ctx->pc = 0x3140ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3140A8u;
    // 0x3140ac: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3140A8u, 0x3140B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3140B0u;
label_3140b0:
    // 0x3140b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3140b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3140b4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3140b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x3140b8: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x3140b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x3140bc: 0xc040a04  jal         func_102810
    ctx->pc = 0x3140BCu;
    SET_GPR_U32(ctx, 31, 0x3140C4u);
    ctx->pc = 0x3140C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3140BCu;
    // 0x3140c0: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x3140BCu, 0x3140C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3140C4u;
label_3140c4:
    // 0x3140c4: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x3140c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_3140c8:
    // 0x3140c8: 0x8c66a000  lw          $a2, -0x6000($v1)
    ctx->pc = 0x3140c8u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x3140cc: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x3140ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x3140d0: 0x0  nop
    ctx->pc = 0x3140d0u;
    // NOP
    // 0x3140d4: 0x0  nop
    ctx->pc = 0x3140d4u;
    // NOP
    // 0x3140d8: 0x0  nop
    ctx->pc = 0x3140d8u;
    // NOP
    // 0x3140dc: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3140DCu;
    {
        const bool branch_taken_0x3140dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3140dc) {
            ctx->pc = 0x3140C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3140c8;
        }
    }
    ctx->pc = 0x3140E4u;
    // 0x3140e4: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x3140e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3140e8: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x3140e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3140ec: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3140ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3140f0: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x3140f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x3140f4: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x3140f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x3140f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3140f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3140fc: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x3140fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
    // 0x314100: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x314100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314104: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x314104u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x314108: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x314108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31410c: 0x1460fdb4  bnez        $v1, . + 4 + (-0x24C << 2)
    ctx->pc = 0x31410Cu;
    {
        const bool branch_taken_0x31410c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31410c) {
            ctx->pc = 0x3137E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3137e0;
        }
    }
    ctx->pc = 0x314114u;
    // 0x314114: 0x0  nop
    ctx->pc = 0x314114u;
    // NOP
label_314118:
    // 0x314118: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x314118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x31411c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x31411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x314120: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x314120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x314124: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x314124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x314128: 0xafa601a0  sw          $a2, 0x1A0($sp)
    ctx->pc = 0x314128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 6));
    // 0x31412c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31412cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x314130: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x314130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x314134: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x314134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314138: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x314138u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31413c: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x31413cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x314140: 0x5460fd9f  bnel        $v1, $zero, . + 4 + (-0x261 << 2)
    ctx->pc = 0x314140u;
    {
        const bool branch_taken_0x314140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314140) {
            ctx->pc = 0x314144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314140u;
            // 0x314144: 0x8fa301b0  lw          $v1, 0x1B0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3137C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3137c0;
        }
    }
    ctx->pc = 0x314148u;
label_314148:
    // 0x314148: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x314148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31414c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x31414cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314150: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x314150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x314154: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x314154u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x314158: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x314158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31415c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x31415cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x314160: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x314160u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314164: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x314164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314168: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x314168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31416c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31416cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314170: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x314170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314178: 0x3e00008  jr          $ra
    ctx->pc = 0x314178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314178u;
        // 0x31417c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314180u;
    // 0x314180: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x314180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x314184: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x314184u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x314188: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x314188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x31418c: 0x252900d0  addiu       $t1, $t1, 0xD0
    ctx->pc = 0x31418cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 208));
    // 0x314190: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x314190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x314194: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x314194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x314198: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x314198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31419c: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x31419cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3141a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3141a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3141a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3141a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3141a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3141a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3141ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3141acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3141b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3141b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3141b4: 0xac490370  sw          $t1, 0x370($v0)
    ctx->pc = 0x3141b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 9));
    // 0x3141b8: 0x3c028026  lui         $v0, 0x8026
    ctx->pc = 0x3141b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32806 << 16));
    // 0x3141bc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3141bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3141c0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3141c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3141c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3141c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3141c8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3141c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3141cc: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x3141ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3141d0: 0x51882  srl         $v1, $a1, 2
    ctx->pc = 0x3141d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x3141d4: 0x3c025151  lui         $v0, 0x5151
    ctx->pc = 0x3141d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20817 << 16));
    // 0x3141d8: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x3141d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3141dc: 0x34455151  ori         $a1, $v0, 0x5151
    ctx->pc = 0x3141dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20817);
    // 0x3141e0: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x3141e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x3141e4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3141e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3141e8: 0x70071389  pcpyld      $v0, $zero, $a3
    ctx->pc = 0x3141e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x3141ec: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x3141ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3141f0: 0xfd270000  sd          $a3, 0x0($t1)
    ctx->pc = 0x3141f0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 7));
    // 0x3141f4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3141f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3141f8: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x3141f8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x3141fc: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x3141fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x314200: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x314200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x314204: 0xac450370  sw          $a1, 0x370($v0)
    ctx->pc = 0x314204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 5));
    // 0x314208: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x314208u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31420c: 0x12a0005e  beqz        $s5, . + 4 + (0x5E << 2)
    ctx->pc = 0x31420Cu;
    {
        const bool branch_taken_0x31420c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x314210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31420Cu;
        // 0x314210: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31420c) {
            ctx->pc = 0x314388u;
            goto label_314388;
        }
    }
    ctx->pc = 0x314214u;
    // 0x314214: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x314214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x314218: 0x3c1801dc  lui         $t8, 0x1DC
    ctx->pc = 0x314218u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)476 << 16));
    // 0x31421c: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x31421cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x314220: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x314220u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x314224: 0x3c0d009d  lui         $t5, 0x9D
    ctx->pc = 0x314224u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)157 << 16));
    // 0x314228: 0x2412fff0  addiu       $s2, $zero, -0x10
    ctx->pc = 0x314228u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31422c: 0x34538889  ori         $s3, $v0, 0x8889
    ctx->pc = 0x31422cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x314230: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x314230u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x314234: 0x2411a833  addiu       $s1, $zero, -0x57CD
    ctx->pc = 0x314234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x314238: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x314238u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x31423c: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x31423cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x314240: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x314240u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x314244: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x314244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x314248: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x314248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x31424c: 0x3c1001dc  lui         $s0, 0x1DC
    ctx->pc = 0x31424cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)476 << 16));
    // 0x314250: 0x3c1901dc  lui         $t9, 0x1DC
    ctx->pc = 0x314250u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)476 << 16));
    // 0x314254: 0x3c14ff00  lui         $s4, 0xFF00
    ctx->pc = 0x314254u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65280 << 16));
label_314258:
    // 0x314258: 0x5a83c  dsll32      $s5, $a1, 0
    ctx->pc = 0x314258u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31425c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x31425cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x314260: 0x15a83f  dsra32      $s5, $s5, 0
    ctx->pc = 0x314260u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x314264: 0xa3b024  and         $s6, $a1, $v1
    ctx->pc = 0x314264u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x314268: 0x30a2ff00  andi        $v0, $a1, 0xFF00
    ctx->pc = 0x314268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x31426c: 0x16b403  sra         $s6, $s6, 16
    ctx->pc = 0x31426cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 16));
    // 0x314270: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x314270u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x314274: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x314274u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
    // 0x314278: 0x8e160370  lw          $s6, 0x370($s0)
    ctx->pc = 0x314278u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x31427c: 0x30b500ff  andi        $s5, $a1, 0xFF
    ctx->pc = 0x31427cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x314280: 0xb42824  and         $a1, $a1, $s4
    ctx->pc = 0x314280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    // 0x314284: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x314284u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x314288: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x314288u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x31428c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31428cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x314290: 0x8f220370  lw          $v0, 0x370($t9)
    ctx->pc = 0x314290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 880)));
    // 0x314294: 0x5b043  sra         $s6, $a1, 1
    ctx->pc = 0x314294u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 1));
    // 0x314298: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x314298u;
    {
        const bool branch_taken_0x314298 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x31429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314298u;
        // 0x31429c: 0xac550008  sw          $s5, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314298) {
            ctx->pc = 0x3142A8u;
            goto label_3142a8;
        }
    }
    ctx->pc = 0x3142A0u;
    // 0x3142a0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3142a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3142a4: 0x2b043  sra         $s6, $v0, 1
    ctx->pc = 0x3142a4u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 1));
label_3142a8:
    // 0x3142a8: 0x8f020370  lw          $v0, 0x370($t8)
    ctx->pc = 0x3142a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 880)));
    // 0x3142ac: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x3142acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
    // 0x3142b0: 0x8de20370  lw          $v0, 0x370($t7)
    ctx->pc = 0x3142b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 880)));
    // 0x3142b4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x3142b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3142b8: 0xadc50370  sw          $a1, 0x370($t6)
    ctx->pc = 0x3142b8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 880), GPR_U32(ctx, 5));
    // 0x3142bc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3142bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3142c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3142c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3142c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3142c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3142c8: 0x0  nop
    ctx->pc = 0x3142c8u;
    // NOP
    // 0x3142cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3142ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3142d0: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x3142d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x3142d4: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x3142d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x3142d8: 0x91a2b280  lbu         $v0, -0x4D80($t5)
    ctx->pc = 0x3142d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4294947456)));
    // 0x3142dc: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3142DCu;
    {
        const bool branch_taken_0x3142dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3142dc) {
            ctx->pc = 0x3142E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3142DCu;
            // 0x3142e0: 0xc4c00004  lwc1        $f0, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x314338u;
            goto label_314338;
        }
    }
    ctx->pc = 0x3142E4u;
    // 0x3142e4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3142e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3142e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3142e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3142ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3142ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3142f0: 0x0  nop
    ctx->pc = 0x3142f0u;
    // NOP
    // 0x3142f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3142f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3142f8: 0x24427100  addiu       $v0, $v0, 0x7100
    ctx->pc = 0x3142f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
    // 0x3142fc: 0x24458000  addiu       $a1, $v0, -0x8000
    ctx->pc = 0x3142fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x314300: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x314300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x314304: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x314304u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x314308: 0x2a980  sll         $s5, $v0, 6
    ctx->pc = 0x314308u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x31430c: 0x2750018  mult        $zero, $s3, $s5
    ctx->pc = 0x31430cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x314310: 0x152fc2  srl         $a1, $s5, 31
    ctx->pc = 0x314310u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x314314: 0x0  nop
    ctx->pc = 0x314314u;
    // NOP
    // 0x314318: 0x1010  mfhi        $v0
    ctx->pc = 0x314318u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31431c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x31431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x314320: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x314320u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x314324: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x314324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x314328: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x314328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x31432c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x314330: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x314330u;
    {
        const bool branch_taken_0x314330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314330u;
        // 0x314334: 0x522824  and         $a1, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314330) {
            ctx->pc = 0x31434Cu;
            goto label_31434c;
        }
    }
    ctx->pc = 0x314338u;
label_314338:
    // 0x314338: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314338u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31433c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31433cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x314340: 0x0  nop
    ctx->pc = 0x314340u;
    // NOP
    // 0x314344: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x314348: 0x24457100  addiu       $a1, $v0, 0x7100
    ctx->pc = 0x314348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_31434c:
    // 0x31434c: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x31434cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x314350: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x314350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x314354: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x314354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x314358: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x314358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31435c: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x31435cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x314360: 0x8d420370  lw          $v0, 0x370($t2)
    ctx->pc = 0x314360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x314364: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x314364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x314368: 0x8d220370  lw          $v0, 0x370($t1)
    ctx->pc = 0x314368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31436c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x31436cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x314370: 0xad050370  sw          $a1, 0x370($t0)
    ctx->pc = 0x314370u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 880), GPR_U32(ctx, 5));
    // 0x314374: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x314374u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x314378: 0xf5102b  sltu        $v0, $a3, $s5
    ctx->pc = 0x314378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x31437c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x31437Cu;
    {
        const bool branch_taken_0x31437c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31437Cu;
        // 0x314380: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31437c) {
            ctx->pc = 0x314258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_314258;
        }
    }
    ctx->pc = 0x314384u;
    // 0x314384: 0x0  nop
    ctx->pc = 0x314384u;
    // NOP
label_314388:
    // 0x314388: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x314388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x31438c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x31438cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x314390: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x314390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x314394: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x314394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x314398: 0x7c4000c0  sq          $zero, 0xC0($v0)
    ctx->pc = 0x314398u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 0));
    // 0x31439c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31439cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3143a0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3143a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3143a4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3143a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3143a8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3143a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3143ac: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x3143acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x3143b0: 0xac4500c0  sw          $a1, 0xC0($v0)
    ctx->pc = 0x3143b0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 5)); // MMIO: 0x700000c0
    // 0x3143b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3143b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3143b8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3143b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3143bc: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x3143bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x3143c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3143c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3143c4: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3143C4u;
    SET_GPR_U32(ctx, 31, 0x3143CCu);
    ctx->pc = 0x3143C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3143C4u;
    // 0x3143c8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3143C4u, 0x3143CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3143CCu;
label_3143cc:
    // 0x3143cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3143ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3143d0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3143d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x3143d4: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x3143d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x3143d8: 0xc040a04  jal         func_102810
    ctx->pc = 0x3143D8u;
    SET_GPR_U32(ctx, 31, 0x3143E0u);
    ctx->pc = 0x3143DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3143D8u;
    // 0x3143dc: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x3143D8u, 0x3143E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3143E0u;
label_3143e0:
    // 0x3143e0: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x3143e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_3143e4:
    // 0x3143e4: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x3143e4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x3143e8: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x3143e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x3143ec: 0x0  nop
    ctx->pc = 0x3143ecu;
    // NOP
    // 0x3143f0: 0x0  nop
    ctx->pc = 0x3143f0u;
    // NOP
    // 0x3143f4: 0x0  nop
    ctx->pc = 0x3143f4u;
    // NOP
    // 0x3143f8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3143F8u;
    {
        const bool branch_taken_0x3143f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3143f8) {
            ctx->pc = 0x3143E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3143e4;
        }
    }
    ctx->pc = 0x314400u;
    // 0x314400: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x314400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x314404: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x314404u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314408: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x314408u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31440c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31440cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314410: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x314410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314414: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x314414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31441c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31441cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314420: 0x3e00008  jr          $ra
    ctx->pc = 0x314420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314420u;
        // 0x314424: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314428u;
    // 0x314428: 0x0  nop
    ctx->pc = 0x314428u;
    // NOP
    // 0x31442c: 0x0  nop
    ctx->pc = 0x31442cu;
    // NOP
    if (ctx->pc == 0x31442cu) { ctx->pc = 0x314430u; }
}
