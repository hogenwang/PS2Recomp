#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00256118
// Address: 0x256118 - 0x256650
void sub_00256118_0x256118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256118_0x256118");
#endif

    switch (ctx->pc) {
        case 0x256164u: goto label_256164;
        case 0x25616cu: goto label_25616c;
        case 0x25617cu: goto label_25617c;
        case 0x256208u: goto label_256208;
        case 0x256258u: goto label_256258;
        case 0x256278u: goto label_256278;
        case 0x256334u: goto label_256334;
        case 0x2563c0u: goto label_2563c0;
        case 0x25647cu: goto label_25647c;
        case 0x2564a0u: goto label_2564a0;
        case 0x2564b4u: goto label_2564b4;
        case 0x256620u: goto label_256620;
        default: break;
    }

    ctx->pc = 0x256118u;

    // 0x256118: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x256118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x25611c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x25611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x256120: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x256120u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x256124: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x256124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x256128: 0xde821218  ld          $v0, 0x1218($s4)
    ctx->pc = 0x256128u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4632)));
    // 0x25612c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25612cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256130: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x256130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x256134: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x256134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x256138: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x256138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x25613c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x25613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x256140: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x256140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x256144: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x256144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x256148: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x256148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x25614c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x25614cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x256150: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x256150u;
    {
        const bool branch_taken_0x256150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256150u;
            // 0x256154: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256150) {
            ctx->pc = 0x25618Cu;
            goto label_25618c;
        }
    }
    ctx->pc = 0x256158u;
    // 0x256158: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x256158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25615c: 0xc08c84a  jal         func_232128
    ctx->pc = 0x25615Cu;
    SET_GPR_U32(ctx, 31, 0x256164u);
    ctx->pc = 0x256160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25615Cu;
            // 0x256160: 0x3c10003a  lui         $s0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232128u;
    if (runtime->hasFunction(0x232128u)) {
        auto targetFn = runtime->lookupFunction(0x232128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256164u; }
        if (ctx->pc != 0x256164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232128_0x232128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256164u; }
        if (ctx->pc != 0x256164u) { return; }
    }
    ctx->pc = 0x256164u;
label_256164:
    // 0x256164: 0xc08b614  jal         func_22D850
    ctx->pc = 0x256164u;
    SET_GPR_U32(ctx, 31, 0x25616Cu);
    ctx->pc = 0x256168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256164u;
            // 0x256168: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25616Cu; }
        if (ctx->pc != 0x25616Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25616Cu; }
        if (ctx->pc != 0x25616Cu) { return; }
    }
    ctx->pc = 0x25616Cu;
label_25616c:
    // 0x25616c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x25616cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x256170: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x256170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x256174: 0xc08b614  jal         func_22D850
    ctx->pc = 0x256174u;
    SET_GPR_U32(ctx, 31, 0x25617Cu);
    ctx->pc = 0x256178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256174u;
            // 0x256178: 0xae021220  sw          $v0, 0x1220($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25617Cu; }
        if (ctx->pc != 0x25617Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25617Cu; }
        if (ctx->pc != 0x25617Cu) { return; }
    }
    ctx->pc = 0x25617Cu;
label_25617c:
    // 0x25617c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256180: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x256180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x256184: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x256184u;
    {
        const bool branch_taken_0x256184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256184u;
            // 0x256188: 0xae221224  sw          $v0, 0x1224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256184) {
            ctx->pc = 0x256194u;
            goto label_256194;
        }
    }
    ctx->pc = 0x25618Cu;
label_25618c:
    // 0x25618c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x25618cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x256190: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x256190u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
label_256194:
    // 0x256194: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x256194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256198: 0x8e071220  lw          $a3, 0x1220($s0)
    ctx->pc = 0x256198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4640)));
    // 0x25619c: 0x9482005a  lhu         $v0, 0x5A($a0)
    ctx->pc = 0x25619cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x2561a0: 0x9486003e  lhu         $a2, 0x3E($a0)
    ctx->pc = 0x2561a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x2561a4: 0x88830043  lwl         $v1, 0x43($a0)
    ctx->pc = 0x2561a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2561a8: 0x98830040  lwr         $v1, 0x40($a0)
    ctx->pc = 0x2561a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2561ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2561acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2561b0: 0x8e251224  lw          $a1, 0x1224($s1)
    ctx->pc = 0x2561b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4644)));
    // 0x2561b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2561b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2561b8: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x2561b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x2561bc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2561bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2561c0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2561c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2561c4: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x2561c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x2561c8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2561c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2561cc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2561ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2561d0: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2561d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2561d4: 0x8c620374  lw          $v0, 0x374($v1)
    ctx->pc = 0x2561d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 884)));
    // 0x2561d8: 0x24b00490  addiu       $s0, $a1, 0x490
    ctx->pc = 0x2561d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
    // 0x2561dc: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x2561dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x2561e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2561E0u;
    {
        const bool branch_taken_0x2561e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2561e0) {
            ctx->pc = 0x2561E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2561E0u;
            // 0x2561e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2561E8u;
            goto label_2561e8;
        }
    }
    ctx->pc = 0x2561E8u;
label_2561e8:
    // 0x2561e8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2561e8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2561ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2561ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2561f0: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x2561f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x2561f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2561f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2561f8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2561f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2561fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2561fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256200: 0xc08c682  jal         func_231A08
    ctx->pc = 0x256200u;
    SET_GPR_U32(ctx, 31, 0x256208u);
    ctx->pc = 0x256204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256200u;
            // 0x256204: 0x508821  addu        $s1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256208u; }
        if (ctx->pc != 0x256208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256208u; }
        if (ctx->pc != 0x256208u) { return; }
    }
    ctx->pc = 0x256208u;
label_256208:
    // 0x256208: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x256208u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25620c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x256210: 0x8c64037c  lw          $a0, 0x37C($v1)
    ctx->pc = 0x256210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 892)));
    // 0x256214: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x256214u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x256218: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x256218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25621c: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x25621Cu;
    {
        const bool branch_taken_0x25621c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25621Cu;
            // 0x256220: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25621c) {
            ctx->pc = 0x256374u;
            goto label_256374;
        }
    }
    ctx->pc = 0x256224u;
    // 0x256224: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x256224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x256228: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x256228u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x25622c: 0x24441308  addiu       $a0, $v0, 0x1308
    ctx->pc = 0x25622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x256230: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x256230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256234: 0xdc8201f0  ld          $v0, 0x1F0($a0)
    ctx->pc = 0x256234u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x256238: 0x26a31228  addiu       $v1, $s5, 0x1228
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4648));
    // 0x25623c: 0x24680060  addiu       $t0, $v1, 0x60
    ctx->pc = 0x25623cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x256240: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x256240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x256244: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x256244u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x256248: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x256248u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x25624c: 0xfc8201f0  sd          $v0, 0x1F0($a0)
    ctx->pc = 0x25624cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 496), GPR_U64(ctx, 2));
    // 0x256250: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x256250u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x256254: 0x265300cc  addiu       $s3, $s2, 0xCC
    ctx->pc = 0x256254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
label_256258:
    // 0x256258: 0x8d100000  lw          $s0, 0x0($t0)
    ctx->pc = 0x256258u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25625c: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x25625Cu;
    {
        const bool branch_taken_0x25625c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x256260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25625Cu;
            // 0x256260: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25625c) {
            ctx->pc = 0x256360u;
            goto label_256360;
        }
    }
    ctx->pc = 0x256264u;
    // 0x256264: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x256264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x256268: 0x24440490  addiu       $a0, $v0, 0x490
    ctx->pc = 0x256268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1168));
    // 0x25626c: 0x24691228  addiu       $t1, $v1, 0x1228
    ctx->pc = 0x25626cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4648));
    // 0x256270: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x256270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x256274: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x256274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_256278:
    // 0x256278: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x256278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x25627c: 0x54620036  bnel        $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x25627Cu;
    {
        const bool branch_taken_0x25627c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25627c) {
            ctx->pc = 0x256280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25627Cu;
            // 0x256280: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x256358u;
            goto label_256358;
        }
    }
    ctx->pc = 0x256284u;
    // 0x256284: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x256284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x256288: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x256288u;
    {
        const bool branch_taken_0x256288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25628Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256288u;
            // 0x25628c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256288) {
            ctx->pc = 0x2562A0u;
            goto label_2562a0;
        }
    }
    ctx->pc = 0x256290u;
    // 0x256290: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x256290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x256294: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x256294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x256298: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x256298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25629c: 0x0  nop
    ctx->pc = 0x25629cu;
    // NOP
label_2562a0:
    // 0x2562a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2562a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2562a4: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2562a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x2562a8: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x2562a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2562ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2562ACu;
    {
        const bool branch_taken_0x2562ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2562B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2562ACu;
            // 0x2562b0: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2562ac) {
            ctx->pc = 0x2562C0u;
            goto label_2562c0;
        }
    }
    ctx->pc = 0x2562B4u;
    // 0x2562b4: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x2562b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
    // 0x2562b8: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x2562b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2562bc: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x2562bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2562c0:
    // 0x2562c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2562c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2562c4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2562c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2562c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2562c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2562cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2562ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2562d0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2562d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2562d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2562d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2562d8: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x2562d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2562dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2562dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2562e0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2562E0u;
    {
        const bool branch_taken_0x2562e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2562e0) {
            ctx->pc = 0x2562E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2562E0u;
            // 0x2562e4: 0x96020088  lhu         $v0, 0x88($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2562F8u;
            goto label_2562f8;
        }
    }
    ctx->pc = 0x2562E8u;
    // 0x2562e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2562e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2562ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2562ECu;
    {
        const bool branch_taken_0x2562ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2562F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2562ECu;
            // 0x2562f0: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2562ec) {
            ctx->pc = 0x256308u;
            goto label_256308;
        }
    }
    ctx->pc = 0x2562F4u;
    // 0x2562f4: 0x0  nop
    ctx->pc = 0x2562f4u;
    // NOP
label_2562f8:
    // 0x2562f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2562f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2562fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2562fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256300: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x256300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x256304: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x256304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_256308:
    // 0x256308: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x256308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25630c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x25630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256310: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x256310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x256314: 0xdce21218  ld          $v0, 0x1218($a3)
    ctx->pc = 0x256314u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 4632)));
    // 0x256318: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x256318u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x25631c: 0xfce21218  sd          $v0, 0x1218($a3)
    ctx->pc = 0x25631cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4632), GPR_U64(ctx, 2));
    // 0x256320: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x256320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x256324: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x256324u;
    {
        const bool branch_taken_0x256324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x256324) {
            ctx->pc = 0x256328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x256324u;
            // 0x256328: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x256338u;
            goto label_256338;
        }
    }
    ctx->pc = 0x25632Cu;
    // 0x25632c: 0xc08a996  jal         func_22A658
    ctx->pc = 0x25632Cu;
    SET_GPR_U32(ctx, 31, 0x256334u);
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256334u; }
        if (ctx->pc != 0x256334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256334u; }
        if (ctx->pc != 0x256334u) { return; }
    }
    ctx->pc = 0x256334u;
label_256334:
    // 0x256334: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x256334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_256338:
    // 0x256338: 0x1080005c  beqz        $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x256338u;
    {
        const bool branch_taken_0x256338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x256338) {
            ctx->pc = 0x2564ACu;
            goto label_2564ac;
        }
    }
    ctx->pc = 0x256340u;
    // 0x256340: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x256340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x256344: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x256344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x256348: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x256348u;
    {
        const bool branch_taken_0x256348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25634Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256348u;
            // 0x25634c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256348) {
            ctx->pc = 0x256498u;
            goto label_256498;
        }
    }
    ctx->pc = 0x256350u;
    // 0x256350: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x256350u;
    {
        const bool branch_taken_0x256350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256350u;
            // 0x256354: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256350) {
            ctx->pc = 0x2564ACu;
            goto label_2564ac;
        }
    }
    ctx->pc = 0x256358u;
label_256358:
    // 0x256358: 0x5600ffc7  bnel        $s0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x256358u;
    {
        const bool branch_taken_0x256358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x256358) {
            ctx->pc = 0x25635Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x256358u;
            // 0x25635c: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x256278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256278;
        }
    }
    ctx->pc = 0x256360u;
label_256360:
    // 0x256360: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x256360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x256364: 0x4c1ffbc  bgez        $a2, . + 4 + (-0x44 << 2)
    ctx->pc = 0x256364u;
    {
        const bool branch_taken_0x256364 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x256368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256364u;
            // 0x256368: 0x2508fff8  addiu       $t0, $t0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256364) {
            ctx->pc = 0x256258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256258;
        }
    }
    ctx->pc = 0x25636Cu;
    // 0x25636c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x25636Cu;
    {
        const bool branch_taken_0x25636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25636Cu;
            // 0x256370: 0xaca00084  sw          $zero, 0x84($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25636c) {
            ctx->pc = 0x2564E0u;
            goto label_2564e0;
        }
    }
    ctx->pc = 0x256374u;
label_256374:
    // 0x256374: 0xde831218  ld          $v1, 0x1218($s4)
    ctx->pc = 0x256374u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4632)));
    // 0x256378: 0x8c440378  lw          $a0, 0x378($v0)
    ctx->pc = 0x256378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 888)));
    // 0x25637c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x25637cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x256380: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x256380u;
    {
        const bool branch_taken_0x256380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x256384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256380u;
            // 0x256384: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256380) {
            ctx->pc = 0x2564CCu;
            goto label_2564cc;
        }
    }
    ctx->pc = 0x256388u;
    // 0x256388: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x256388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25638c: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x25638cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x256390: 0x24431308  addiu       $v1, $v0, 0x1308
    ctx->pc = 0x256390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x256394: 0x26a41228  addiu       $a0, $s5, 0x1228
    ctx->pc = 0x256394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4648));
    // 0x256398: 0xdc6201d8  ld          $v0, 0x1D8($v1)
    ctx->pc = 0x256398u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 472)));
    // 0x25639c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25639cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563a0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2563a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2563a4: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x2563a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x2563a8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2563a8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2563ac: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x2563acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x2563b0: 0xfc6201d8  sd          $v0, 0x1D8($v1)
    ctx->pc = 0x2563b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 472), GPR_U64(ctx, 2));
    // 0x2563b4: 0x265300cc  addiu       $s3, $s2, 0xCC
    ctx->pc = 0x2563b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
    // 0x2563b8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2563b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563bc: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2563bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2563c0:
    // 0x2563c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2563c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2563c4: 0x5200003d  beql        $s0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x2563C4u;
    {
        const bool branch_taken_0x2563c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2563c4) {
            ctx->pc = 0x2563C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2563C4u;
            // 0x2563c8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2564BCu;
            goto label_2564bc;
        }
    }
    ctx->pc = 0x2563CCu;
    // 0x2563cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2563ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2563d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2563D0u;
    {
        const bool branch_taken_0x2563d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2563D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2563D0u;
            // 0x2563d4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563d0) {
            ctx->pc = 0x2563E8u;
            goto label_2563e8;
        }
    }
    ctx->pc = 0x2563D8u;
    // 0x2563d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2563d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2563dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2563dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2563e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2563e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2563e4: 0x0  nop
    ctx->pc = 0x2563e4u;
    // NOP
label_2563e8:
    // 0x2563e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2563e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2563ec: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2563ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x2563f0: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x2563f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2563f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2563F4u;
    {
        const bool branch_taken_0x2563f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2563F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2563F4u;
            // 0x2563f8: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563f4) {
            ctx->pc = 0x256408u;
            goto label_256408;
        }
    }
    ctx->pc = 0x2563FCu;
    // 0x2563fc: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x2563fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
    // 0x256400: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x256400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x256404: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x256404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_256408:
    // 0x256408: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25640c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x25640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x256410: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x256410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x256414: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x256414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x256418: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x256418u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25641c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256420: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x256420u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x256424: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x256424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256428: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x256428u;
    {
        const bool branch_taken_0x256428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256428) {
            ctx->pc = 0x25642Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x256428u;
            // 0x25642c: 0x96020088  lhu         $v0, 0x88($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x256440u;
            goto label_256440;
        }
    }
    ctx->pc = 0x256430u;
    // 0x256430: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x256430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x256434: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x256434u;
    {
        const bool branch_taken_0x256434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256434u;
            // 0x256438: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256434) {
            ctx->pc = 0x256450u;
            goto label_256450;
        }
    }
    ctx->pc = 0x25643Cu;
    // 0x25643c: 0x0  nop
    ctx->pc = 0x25643cu;
    // NOP
label_256440:
    // 0x256440: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x256440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x256444: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256448: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x256448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25644c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x25644cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_256450:
    // 0x256450: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x256450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x256454: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x256454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256458: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25645c: 0xdce41218  ld          $a0, 0x1218($a3)
    ctx->pc = 0x25645cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 4632)));
    // 0x256460: 0x6484ffff  daddiu      $a0, $a0, -0x1
    ctx->pc = 0x256460u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x256464: 0xfce41218  sd          $a0, 0x1218($a3)
    ctx->pc = 0x256464u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4632), GPR_U64(ctx, 4));
    // 0x256468: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x256468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x25646c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25646Cu;
    {
        const bool branch_taken_0x25646c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25646c) {
            ctx->pc = 0x256470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25646Cu;
            // 0x256470: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x256480u;
            goto label_256480;
        }
    }
    ctx->pc = 0x256474u;
    // 0x256474: 0xc08a996  jal         func_22A658
    ctx->pc = 0x256474u;
    SET_GPR_U32(ctx, 31, 0x25647Cu);
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25647Cu; }
        if (ctx->pc != 0x25647Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25647Cu; }
        if (ctx->pc != 0x25647Cu) { return; }
    }
    ctx->pc = 0x25647Cu;
label_25647c:
    // 0x25647c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x25647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_256480:
    // 0x256480: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x256480u;
    {
        const bool branch_taken_0x256480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x256480) {
            ctx->pc = 0x2564ACu;
            goto label_2564ac;
        }
    }
    ctx->pc = 0x256488u;
    // 0x256488: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x256488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x25648c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x25648cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x256490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256490u;
    {
        const bool branch_taken_0x256490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256490u;
            // 0x256494: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256490) {
            ctx->pc = 0x2564A8u;
            goto label_2564a8;
        }
    }
    ctx->pc = 0x256498u;
label_256498:
    // 0x256498: 0xc090c4c  jal         func_243130
    ctx->pc = 0x256498u;
    SET_GPR_U32(ctx, 31, 0x2564A0u);
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564A0u; }
        if (ctx->pc != 0x2564A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564A0u; }
        if (ctx->pc != 0x2564A0u) { return; }
    }
    ctx->pc = 0x2564A0u;
label_2564a0:
    // 0x2564a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2564A0u;
    {
        const bool branch_taken_0x2564a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2564a0) {
            ctx->pc = 0x2564ACu;
            goto label_2564ac;
        }
    }
    ctx->pc = 0x2564A8u;
label_2564a8:
    // 0x2564a8: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x2564a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_2564ac:
    // 0x2564ac: 0xc098560  jal         func_261580
    ctx->pc = 0x2564ACu;
    SET_GPR_U32(ctx, 31, 0x2564B4u);
    ctx->pc = 0x2564B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2564ACu;
            // 0x2564b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564B4u; }
        if (ctx->pc != 0x2564B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564B4u; }
        if (ctx->pc != 0x2564B4u) { return; }
    }
    ctx->pc = 0x2564B4u;
label_2564b4:
    // 0x2564b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2564B4u;
    {
        const bool branch_taken_0x2564b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2564B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2564B4u;
            // 0x2564b8: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564b4) {
            ctx->pc = 0x2564DCu;
            goto label_2564dc;
        }
    }
    ctx->pc = 0x2564BCu;
label_2564bc:
    // 0x2564bc: 0x4c1ffc0  bgez        $a2, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2564BCu;
    {
        const bool branch_taken_0x2564bc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2564C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2564BCu;
            // 0x2564c0: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564bc) {
            ctx->pc = 0x2563C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2563c0;
        }
    }
    ctx->pc = 0x2564C4u;
    // 0x2564c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2564C4u;
    {
        const bool branch_taken_0x2564c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2564C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2564C4u;
            // 0x2564c8: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564c4) {
            ctx->pc = 0x2564DCu;
            goto label_2564dc;
        }
    }
    ctx->pc = 0x2564CCu;
label_2564cc:
    // 0x2564cc: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x2564ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x2564d0: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x2564d0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x2564d4: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x2564d4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x2564d8: 0x265300cc  addiu       $s3, $s2, 0xCC
    ctx->pc = 0x2564d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
label_2564dc:
    // 0x2564dc: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x2564dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
label_2564e0:
    // 0x2564e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2564e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2564e4: 0xa4400088  sh          $zero, 0x88($v0)
    ctx->pc = 0x2564e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 136), (uint16_t)GPR_U32(ctx, 0));
    // 0x2564e8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2564e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2564ec: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2564ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2564f0: 0x94a30088  lhu         $v1, 0x88($a1)
    ctx->pc = 0x2564f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x2564f4: 0x26c41548  addiu       $a0, $s6, 0x1548
    ctx->pc = 0x2564f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 5448));
    // 0x2564f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2564f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2564fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2564fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x256500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x256500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256504: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x256504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x256508: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x256508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x25650c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x25650cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256510: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x256510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x256514: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x256514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x256518: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256518u;
    {
        const bool branch_taken_0x256518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256518u;
            // 0x25651c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256518) {
            ctx->pc = 0x256530u;
            goto label_256530;
        }
    }
    ctx->pc = 0x256520u;
    // 0x256520: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x256520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x256524: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256524u;
    {
        const bool branch_taken_0x256524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256524u;
            // 0x256528: 0x8fc2f990  lw          $v0, -0x670($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294965648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256524) {
            ctx->pc = 0x256540u;
            goto label_256540;
        }
    }
    ctx->pc = 0x25652Cu;
    // 0x25652c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_256530:
    // 0x256530: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x256530u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x256534: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x256534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256538: 0x8fc2f990  lw          $v0, -0x670($fp)
    ctx->pc = 0x256538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294965648)));
    // 0x25653c: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x25653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_256540:
    // 0x256540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256544: 0xaca2007c  sw          $v0, 0x7C($a1)
    ctx->pc = 0x256544u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 2));
    // 0x256548: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x256548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25654c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x25654cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x256550: 0x26a61228  addiu       $a2, $s5, 0x1228
    ctx->pc = 0x256550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4648));
    // 0x256554: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x256554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256558: 0x94820088  lhu         $v0, 0x88($a0)
    ctx->pc = 0x256558u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x25655c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x25655cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256560: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x256560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x256564: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x256564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x256568: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x256568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x25656c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x25656cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256570: 0x94a20088  lhu         $v0, 0x88($a1)
    ctx->pc = 0x256570u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x256574: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256578: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x256578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25657c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25657cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x256580: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x256580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x256584: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x256584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256588: 0x94820088  lhu         $v0, 0x88($a0)
    ctx->pc = 0x256588u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x25658c: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x25658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x256590: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256594: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x256594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x256598: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x256598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x25659c: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x25659cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x2565a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2565A0u;
    {
        const bool branch_taken_0x2565a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2565A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2565A0u;
            // 0x2565a4: 0xac83009c  sw          $v1, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565a0) {
            ctx->pc = 0x2565B8u;
            goto label_2565b8;
        }
    }
    ctx->pc = 0x2565A8u;
    // 0x2565a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2565a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2565ac: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x2565acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x2565b0: 0x2442009c  addiu       $v0, $v0, 0x9C
    ctx->pc = 0x2565b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
    // 0x2565b4: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x2565b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
label_2565b8:
    // 0x2565b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2565b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2565bc: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x2565bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x2565c0: 0xac5300a0  sw          $s3, 0xA0($v0)
    ctx->pc = 0x2565c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 19));
    // 0x2565c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2565c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2565c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2565c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2565cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2565CCu;
    {
        const bool branch_taken_0x2565cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2565D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2565CCu;
            // 0x2565d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565cc) {
            ctx->pc = 0x2565E0u;
            goto label_2565e0;
        }
    }
    ctx->pc = 0x2565D4u;
    // 0x2565d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2565d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2565d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2565d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2565dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2565dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2565e0:
    // 0x2565e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2565e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2565e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2565e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2565e8: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x2565e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x2565ec: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x2565ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2565f0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2565f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2565f4: 0x24451308  addiu       $a1, $v0, 0x1308
    ctx->pc = 0x2565f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x2565f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2565f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2565fc: 0xde821218  ld          $v0, 0x1218($s4)
    ctx->pc = 0x2565fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4632)));
    // 0x256600: 0xdca401c0  ld          $a0, 0x1C0($a1)
    ctx->pc = 0x256600u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 448)));
    // 0x256604: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x256604u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x256608: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x256608u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25660c: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x25660cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x256610: 0xfe821218  sd          $v0, 0x1218($s4)
    ctx->pc = 0x256610u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 4632), GPR_U64(ctx, 2));
    // 0x256614: 0xfca401c0  sd          $a0, 0x1C0($a1)
    ctx->pc = 0x256614u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 448), GPR_U64(ctx, 4));
    // 0x256618: 0xc08c698  jal         func_231A60
    ctx->pc = 0x256618u;
    SET_GPR_U32(ctx, 31, 0x256620u);
    ctx->pc = 0x25661Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256618u;
            // 0x25661c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256620u; }
        if (ctx->pc != 0x256620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256620u; }
        if (ctx->pc != 0x256620u) { return; }
    }
    ctx->pc = 0x256620u;
label_256620:
    // 0x256620: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x256620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x256624: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x256624u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x256628: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x256628u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25662c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x25662cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x256630: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x256630u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256634: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x256634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256638: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x256638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25663c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x25663cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256640: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x256640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256644: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x256644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256648: 0x3e00008  jr          $ra
    ctx->pc = 0x256648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256648u;
            // 0x25664c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256650u;
    ctx->pc = 0x256650u;
}
