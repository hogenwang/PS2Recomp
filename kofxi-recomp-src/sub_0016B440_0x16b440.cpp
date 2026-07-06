#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B440
// Address: 0x16b440 - 0x16b500
void sub_0016B440_0x16b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B440_0x16b440");
#endif

    switch (ctx->pc) {
        case 0x16b468u: goto label_16b468;
        case 0x16b470u: goto label_16b470;
        case 0x16b480u: goto label_16b480;
        case 0x16b4a0u: goto label_16b4a0;
        default: break;
    }

    ctx->pc = 0x16b440u;

    // 0x16b440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16b444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16b448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b44c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b458: 0x949000f0  lhu         $s0, 0xF0($a0)
    ctx->pc = 0x16b458u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x16b45c: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x16b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x16b460: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x16B460u;
    SET_GPR_U32(ctx, 31, 0x16B468u);
    ctx->pc = 0x16B464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B460u;
            // 0x16b464: 0x26320314  addiu       $s2, $s1, 0x314 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B468u; }
        if (ctx->pc != 0x16B468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B468u; }
        if (ctx->pc != 0x16B468u) { return; }
    }
    ctx->pc = 0x16B468u;
label_16b468:
    // 0x16b468: 0xc062804  jal         func_18A010
    ctx->pc = 0x16B468u;
    SET_GPR_U32(ctx, 31, 0x16B470u);
    ctx->pc = 0x16B46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B468u;
            // 0x16b46c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B470u; }
        if (ctx->pc != 0x16B470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B470u; }
        if (ctx->pc != 0x16B470u) { return; }
    }
    ctx->pc = 0x16B470u;
label_16b470:
    // 0x16b470: 0x962500ea  lhu         $a1, 0xEA($s1)
    ctx->pc = 0x16b470u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x16b474: 0x922600f7  lbu         $a2, 0xF7($s1)
    ctx->pc = 0x16b474u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
    // 0x16b478: 0xc063658  jal         func_18D960
    ctx->pc = 0x16B478u;
    SET_GPR_U32(ctx, 31, 0x16B480u);
    ctx->pc = 0x16B47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B478u;
            // 0x16b47c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D960u;
    if (runtime->hasFunction(0x18D960u)) {
        auto targetFn = runtime->lookupFunction(0x18D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B480u; }
        if (ctx->pc != 0x16B480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D960_0x18d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B480u; }
        if (ctx->pc != 0x16B480u) { return; }
    }
    ctx->pc = 0x16B480u;
label_16b480:
    // 0x16b480: 0x9242008b  lbu         $v0, 0x8B($s2)
    ctx->pc = 0x16b480u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 139)));
    // 0x16b484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b488: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x16b488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x16b48c: 0xa242008b  sb          $v0, 0x8B($s2)
    ctx->pc = 0x16b48cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 2));
    // 0x16b490: 0x8e220270  lw          $v0, 0x270($s1)
    ctx->pc = 0x16b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x16b494: 0x30420600  andi        $v0, $v0, 0x600
    ctx->pc = 0x16b494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1536);
    // 0x16b498: 0xc0506e4  jal         func_141B90
    ctx->pc = 0x16B498u;
    SET_GPR_U32(ctx, 31, 0x16B4A0u);
    ctx->pc = 0x16B49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B498u;
            // 0x16b49c: 0xae220270  sw          $v0, 0x270($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141B90u;
    if (runtime->hasFunction(0x141B90u)) {
        auto targetFn = runtime->lookupFunction(0x141B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4A0u; }
        if (ctx->pc != 0x16B4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141B90_0x141b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4A0u; }
        if (ctx->pc != 0x16B4A0u) { return; }
    }
    ctx->pc = 0x16B4A0u;
label_16b4a0:
    // 0x16b4a0: 0x962600ec  lhu         $a2, 0xEC($s1)
    ctx->pc = 0x16b4a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x16b4a4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x16b4a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16b4a8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x16b4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x16b4ac: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x16b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x16b4b0: 0xa62600ee  sh          $a2, 0xEE($s1)
    ctx->pc = 0x16b4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 238), (uint16_t)GPR_U32(ctx, 6));
    // 0x16b4b4: 0xa63000ec  sh          $s0, 0xEC($s1)
    ctx->pc = 0x16b4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 236), (uint16_t)GPR_U32(ctx, 16));
    // 0x16b4b8: 0xa62500f0  sh          $a1, 0xF0($s1)
    ctx->pc = 0x16b4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 5));
    // 0x16b4bc: 0xa62500f2  sh          $a1, 0xF2($s1)
    ctx->pc = 0x16b4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 5));
    // 0x16b4c0: 0xa62500f4  sh          $a1, 0xF4($s1)
    ctx->pc = 0x16b4c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 5));
    // 0x16b4c4: 0x8e250498  lw          $a1, 0x498($s1)
    ctx->pc = 0x16b4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1176)));
    // 0x16b4c8: 0x34a50020  ori         $a1, $a1, 0x20
    ctx->pc = 0x16b4c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x16b4cc: 0xae250498  sw          $a1, 0x498($s1)
    ctx->pc = 0x16b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1176), GPR_U32(ctx, 5));
    // 0x16b4d0: 0x8e250490  lw          $a1, 0x490($s1)
    ctx->pc = 0x16b4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x16b4d4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x16b4d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x16b4d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16b4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16b4dc: 0xae240490  sw          $a0, 0x490($s1)
    ctx->pc = 0x16b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1168), GPR_U32(ctx, 4));
    // 0x16b4e0: 0xae230490  sw          $v1, 0x490($s1)
    ctx->pc = 0x16b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1168), GPR_U32(ctx, 3));
    // 0x16b4e4: 0xa22003ec  sb          $zero, 0x3EC($s1)
    ctx->pc = 0x16b4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1004), (uint8_t)GPR_U32(ctx, 0));
    // 0x16b4e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16b4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b4ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4F8u;
            // 0x16b4fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B500u;
    ctx->pc = 0x16b500u;
}
