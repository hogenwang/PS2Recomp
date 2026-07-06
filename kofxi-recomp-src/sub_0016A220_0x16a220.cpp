#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A220
// Address: 0x16a220 - 0x16a310
void sub_0016A220_0x16a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A220_0x16a220");
#endif

    switch (ctx->pc) {
        case 0x16a260u: goto label_16a260;
        case 0x16a270u: goto label_16a270;
        case 0x16a2ccu: goto label_16a2cc;
        case 0x16a2e8u: goto label_16a2e8;
        default: break;
    }

    ctx->pc = 0x16a220u;

    // 0x16a220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16a224: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16a228: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16a22c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16a230: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16a230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a238: 0x2a610023  slti        $at, $s3, 0x23
    ctx->pc = 0x16a238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x16a23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a240: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16a240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a244: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16a244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a248: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A248u;
    {
        const bool branch_taken_0x16a248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A248u;
            // 0x16a24c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a248) {
            ctx->pc = 0x16A268u;
            goto label_16a268;
        }
    }
    ctx->pc = 0x16A250u;
    // 0x16a250: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x16a250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x16a254: 0x30423f00  andi        $v0, $v0, 0x3F00
    ctx->pc = 0x16a254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16128);
    // 0x16a258: 0xc05a8c4  jal         func_16A310
    ctx->pc = 0x16A258u;
    SET_GPR_U32(ctx, 31, 0x16A260u);
    ctx->pc = 0x16A25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A258u;
            // 0x16a25c: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A310u;
    if (runtime->hasFunction(0x16A310u)) {
        auto targetFn = runtime->lookupFunction(0x16A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A260u; }
        if (ctx->pc != 0x16A260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A310_0x16a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A260u; }
        if (ctx->pc != 0x16A260u) { return; }
    }
    ctx->pc = 0x16A260u;
label_16a260:
    // 0x16a260: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16A260u;
    {
        const bool branch_taken_0x16a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A260u;
            // 0x16a264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a260) {
            ctx->pc = 0x16A2ECu;
            goto label_16a2ec;
        }
    }
    ctx->pc = 0x16A268u;
label_16a268:
    // 0x16a268: 0xc0635c0  jal         func_18D700
    ctx->pc = 0x16A268u;
    SET_GPR_U32(ctx, 31, 0x16A270u);
    ctx->pc = 0x18D700u;
    if (runtime->hasFunction(0x18D700u)) {
        auto targetFn = runtime->lookupFunction(0x18D700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A270u; }
        if (ctx->pc != 0x16A270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D700_0x18d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A270u; }
        if (ctx->pc != 0x16A270u) { return; }
    }
    ctx->pc = 0x16A270u;
label_16a270:
    // 0x16a270: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x16a270u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a274: 0x2663ffdd  addiu       $v1, $s3, -0x23
    ctx->pc = 0x16a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967261));
    // 0x16a278: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x16a278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16a27c: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A27Cu;
    {
        const bool branch_taken_0x16a27c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a27c) {
            ctx->pc = 0x16A280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A27Cu;
            // 0x16a280: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A28Cu;
            goto label_16a28c;
        }
    }
    ctx->pc = 0x16A284u;
    // 0x16a284: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16A284u;
    {
        const bool branch_taken_0x16a284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A284u;
            // 0x16a288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a284) {
            ctx->pc = 0x16A2ECu;
            goto label_16a2ec;
        }
    }
    ctx->pc = 0x16A28Cu;
label_16a28c:
    // 0x16a28c: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x16a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x16a290: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a294: 0x922823  subu        $a1, $a0, $s2
    ctx->pc = 0x16a294u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x16a298: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x16a298u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x16a29c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x16a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x16a2a0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x16a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16a2a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2a8: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x16a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x16a2ac: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x16a2acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x16a2b0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x16a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x16a2b4: 0x248448c0  addiu       $a0, $a0, 0x48C0
    ctx->pc = 0x16a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18624));
    // 0x16a2b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16a2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16a2bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16a2c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x16a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16a2c4: 0xc05a8f4  jal         func_16A3D0
    ctx->pc = 0x16A2C4u;
    SET_GPR_U32(ctx, 31, 0x16A2CCu);
    ctx->pc = 0x16A2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2C4u;
            // 0x16a2c8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A3D0u;
    if (runtime->hasFunction(0x16A3D0u)) {
        auto targetFn = runtime->lookupFunction(0x16A3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2CCu; }
        if (ctx->pc != 0x16A2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A3D0_0x16a3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2CCu; }
        if (ctx->pc != 0x16A2CCu) { return; }
    }
    ctx->pc = 0x16A2CCu;
label_16a2cc:
    // 0x16a2cc: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x16a2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x16a2d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2d4: 0x30423f00  andi        $v0, $v0, 0x3F00
    ctx->pc = 0x16a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16128);
    // 0x16a2d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16a2d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2dc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x16a2dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16a2e0: 0xc05a8c4  jal         func_16A310
    ctx->pc = 0x16A2E0u;
    SET_GPR_U32(ctx, 31, 0x16A2E8u);
    ctx->pc = 0x16A2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2E0u;
            // 0x16a2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A310u;
    if (runtime->hasFunction(0x16A310u)) {
        auto targetFn = runtime->lookupFunction(0x16A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2E8u; }
        if (ctx->pc != 0x16A2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A310_0x16a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2E8u; }
        if (ctx->pc != 0x16A2E8u) { return; }
    }
    ctx->pc = 0x16A2E8u;
label_16a2e8:
    // 0x16a2e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a2e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a2ec:
    // 0x16a2ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16a2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a2f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16a2f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a2f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a2f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a2fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a300: 0x3e00008  jr          $ra
    ctx->pc = 0x16A300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A300u;
            // 0x16a304: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A308u;
    // 0x16a308: 0x0  nop
    ctx->pc = 0x16a308u;
    // NOP
    // 0x16a30c: 0x0  nop
    ctx->pc = 0x16a30cu;
    // NOP
    ctx->pc = 0x16a310u;
}
