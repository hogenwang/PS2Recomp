#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018E180
// Address: 0x18e180 - 0x18e2e0
void sub_0018E180_0x18e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E180_0x18e180");
#endif

    switch (ctx->pc) {
        case 0x18e1c8u: goto label_18e1c8;
        case 0x18e220u: goto label_18e220;
        case 0x18e250u: goto label_18e250;
        case 0x18e2a8u: goto label_18e2a8;
        default: break;
    }

    ctx->pc = 0x18e180u;

    // 0x18e180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e184: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x18e184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x18e188: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18e188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e18c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e190: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e194: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e198: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18e198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e19c: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x18E19Cu;
    {
        const bool branch_taken_0x18e19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18E1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E19Cu;
            // 0x18e1a0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e19c) {
            ctx->pc = 0x18E238u;
            goto label_18e238;
        }
    }
    ctx->pc = 0x18E1A4u;
    // 0x18e1a4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E1A4u;
    {
        const bool branch_taken_0x18e1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1a4) {
            ctx->pc = 0x18E1A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1A4u;
            // 0x18e1a8: 0x30828300  andi        $v0, $a0, 0x8300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)33536);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E1B4u;
            goto label_18e1b4;
        }
    }
    ctx->pc = 0x18E1ACu;
    // 0x18e1ac: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x18E1ACu;
    {
        const bool branch_taken_0x18e1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1ACu;
            // 0x18e1b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1ac) {
            ctx->pc = 0x18E2C4u;
            goto label_18e2c4;
        }
    }
    ctx->pc = 0x18E1B4u;
label_18e1b4:
    // 0x18e1b4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18E1B4u;
    {
        const bool branch_taken_0x18e1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1b4) {
            ctx->pc = 0x18E1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1B4u;
            // 0x18e1b8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E204u;
            goto label_18e204;
        }
    }
    ctx->pc = 0x18E1BCu;
    // 0x18e1bc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x18e1bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18e1c0: 0xc0638c4  jal         func_18E310
    ctx->pc = 0x18E1C0u;
    SET_GPR_U32(ctx, 31, 0x18E1C8u);
    ctx->pc = 0x18E1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1C0u;
            // 0x18e1c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E310u;
    if (runtime->hasFunction(0x18E310u)) {
        auto targetFn = runtime->lookupFunction(0x18E310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1C8u; }
        if (ctx->pc != 0x18E1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E310_0x18e310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1C8u; }
        if (ctx->pc != 0x18E1C8u) { return; }
    }
    ctx->pc = 0x18E1C8u;
label_18e1c8:
    // 0x18e1c8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x18E1C8u;
    {
        const bool branch_taken_0x18e1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1c8) {
            ctx->pc = 0x18E2C0u;
            goto label_18e2c0;
        }
    }
    ctx->pc = 0x18E1D0u;
    // 0x18e1d0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x18e1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18e1d4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18e1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18e1d8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x18e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18e1dc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x18e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e1e0: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x18e1e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18e1e4: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E1E4u;
    {
        const bool branch_taken_0x18e1e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e1e4) {
            ctx->pc = 0x18E1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1E4u;
            // 0x18e1e8: 0x441821  addu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E1F4u;
            goto label_18e1f4;
        }
    }
    ctx->pc = 0x18E1ECu;
    // 0x18e1ec: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x18e1ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e1f0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x18e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18e1f4:
    // 0x18e1f4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x18e1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18e1f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e1fc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x18E1FCu;
    {
        const bool branch_taken_0x18e1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1FCu;
            // 0x18e200: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1fc) {
            ctx->pc = 0x18E2C4u;
            goto label_18e2c4;
        }
    }
    ctx->pc = 0x18E204u;
label_18e204:
    // 0x18e204: 0x34420c00  ori         $v0, $v0, 0xC00
    ctx->pc = 0x18e204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3072);
    // 0x18e208: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x18e208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x18e20c: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x18E20Cu;
    {
        const bool branch_taken_0x18e20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e20c) {
            ctx->pc = 0x18E210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E20Cu;
            // 0x18e210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E2C4u;
            goto label_18e2c4;
        }
    }
    ctx->pc = 0x18E214u;
    // 0x18e214: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x18e214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18e218: 0xc0638c4  jal         func_18E310
    ctx->pc = 0x18E218u;
    SET_GPR_U32(ctx, 31, 0x18E220u);
    ctx->pc = 0x18E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E218u;
            // 0x18e21c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E310u;
    if (runtime->hasFunction(0x18E310u)) {
        auto targetFn = runtime->lookupFunction(0x18E310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E220u; }
        if (ctx->pc != 0x18E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E310_0x18e310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E220u; }
        if (ctx->pc != 0x18E220u) { return; }
    }
    ctx->pc = 0x18E220u;
label_18e220:
    // 0x18e220: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x18E220u;
    {
        const bool branch_taken_0x18e220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e220) {
            ctx->pc = 0x18E2C0u;
            goto label_18e2c0;
        }
    }
    ctx->pc = 0x18E228u;
    // 0x18e228: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x18e228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18e22c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e230: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x18E230u;
    {
        const bool branch_taken_0x18e230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E230u;
            // 0x18e234: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e230) {
            ctx->pc = 0x18E2C4u;
            goto label_18e2c4;
        }
    }
    ctx->pc = 0x18E238u;
label_18e238:
    // 0x18e238: 0x30828300  andi        $v0, $a0, 0x8300
    ctx->pc = 0x18e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)33536);
    // 0x18e23c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18E23Cu;
    {
        const bool branch_taken_0x18e23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e23c) {
            ctx->pc = 0x18E240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E23Cu;
            // 0x18e240: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E28Cu;
            goto label_18e28c;
        }
    }
    ctx->pc = 0x18E244u;
    // 0x18e244: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x18e244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18e248: 0xc0638c4  jal         func_18E310
    ctx->pc = 0x18E248u;
    SET_GPR_U32(ctx, 31, 0x18E250u);
    ctx->pc = 0x18E24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E248u;
            // 0x18e24c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E310u;
    if (runtime->hasFunction(0x18E310u)) {
        auto targetFn = runtime->lookupFunction(0x18E310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E250u; }
        if (ctx->pc != 0x18E250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E310_0x18e310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E250u; }
        if (ctx->pc != 0x18E250u) { return; }
    }
    ctx->pc = 0x18E250u;
label_18e250:
    // 0x18e250: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18E250u;
    {
        const bool branch_taken_0x18e250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e250) {
            ctx->pc = 0x18E2C0u;
            goto label_18e2c0;
        }
    }
    ctx->pc = 0x18E258u;
    // 0x18e258: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x18e258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18e25c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18e260: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x18e260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18e264: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x18e264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e268: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x18e268u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18e26c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E26Cu;
    {
        const bool branch_taken_0x18e26c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e26c) {
            ctx->pc = 0x18E270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E26Cu;
            // 0x18e270: 0x441821  addu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E27Cu;
            goto label_18e27c;
        }
    }
    ctx->pc = 0x18E274u;
    // 0x18e274: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x18e274u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e278: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x18e278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18e27c:
    // 0x18e27c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x18e27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18e280: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18e280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e284: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18E284u;
    {
        const bool branch_taken_0x18e284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E284u;
            // 0x18e288: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e284) {
            ctx->pc = 0x18E2C4u;
            goto label_18e2c4;
        }
    }
    ctx->pc = 0x18E28Cu;
label_18e28c:
    // 0x18e28c: 0x34420c00  ori         $v0, $v0, 0xC00
    ctx->pc = 0x18e28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3072);
    // 0x18e290: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x18e290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x18e294: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x18E294u;
    {
        const bool branch_taken_0x18e294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e294) {
            ctx->pc = 0x18E298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E294u;
            // 0x18e298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E2C4u;
            goto label_18e2c4;
        }
    }
    ctx->pc = 0x18E29Cu;
    // 0x18e29c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x18e29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18e2a0: 0xc0638c4  jal         func_18E310
    ctx->pc = 0x18E2A0u;
    SET_GPR_U32(ctx, 31, 0x18E2A8u);
    ctx->pc = 0x18E2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2A0u;
            // 0x18e2a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E310u;
    if (runtime->hasFunction(0x18E310u)) {
        auto targetFn = runtime->lookupFunction(0x18E310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2A8u; }
        if (ctx->pc != 0x18E2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E310_0x18e310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2A8u; }
        if (ctx->pc != 0x18E2A8u) { return; }
    }
    ctx->pc = 0x18E2A8u;
label_18e2a8:
    // 0x18e2a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E2A8u;
    {
        const bool branch_taken_0x18e2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2a8) {
            ctx->pc = 0x18E2C0u;
            goto label_18e2c0;
        }
    }
    ctx->pc = 0x18E2B0u;
    // 0x18e2b0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x18e2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18e2b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e2b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E2B8u;
    {
        const bool branch_taken_0x18e2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2B8u;
            // 0x18e2bc: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2b8) {
            ctx->pc = 0x18E2C4u;
            goto label_18e2c4;
        }
    }
    ctx->pc = 0x18E2C0u;
label_18e2c0:
    // 0x18e2c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e2c4:
    // 0x18e2c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18e2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x18E2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2D0u;
            // 0x18e2d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E2D8u;
    // 0x18e2d8: 0x0  nop
    ctx->pc = 0x18e2d8u;
    // NOP
    // 0x18e2dc: 0x0  nop
    ctx->pc = 0x18e2dcu;
    // NOP
    ctx->pc = 0x18e2e0u;
}
