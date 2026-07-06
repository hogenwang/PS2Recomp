#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D98D0
// Address: 0x1d98d0 - 0x1d9a20
void sub_001D98D0_0x1d98d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D98D0_0x1d98d0");
#endif

    switch (ctx->pc) {
        case 0x1d9908u: goto label_1d9908;
        case 0x1d9930u: goto label_1d9930;
        case 0x1d9958u: goto label_1d9958;
        case 0x1d99b8u: goto label_1d99b8;
        case 0x1d99e0u: goto label_1d99e0;
        default: break;
    }

    ctx->pc = 0x1d98d0u;

    // 0x1d98d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d98d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d98d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d98d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d98d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d98d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d98dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d98dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d98e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d98e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d98e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d98e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d98e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d98e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d98ec: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D98ECu;
    {
        const bool branch_taken_0x1d98ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D98F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98ECu;
            // 0x1d98f0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98ec) {
            ctx->pc = 0x1D9900u;
            goto label_1d9900;
        }
    }
    ctx->pc = 0x1D98F4u;
    // 0x1d98f4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d98f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D98F8u;
    {
        const bool branch_taken_0x1d98f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D98FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98F8u;
            // 0x1d98fc: 0x2444e6b0  addiu       $a0, $v0, -0x1950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98f8) {
            ctx->pc = 0x1D9934u;
            goto label_1d9934;
        }
    }
    ctx->pc = 0x1D9900u;
label_1d9900:
    // 0x1d9900: 0xc0770ee  jal         func_1DC3B8
    ctx->pc = 0x1D9900u;
    SET_GPR_U32(ctx, 31, 0x1D9908u);
    ctx->pc = 0x1DC3B8u;
    if (runtime->hasFunction(0x1DC3B8u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9908u; }
        if (ctx->pc != 0x1D9908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3B8_0x1dc3b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9908u; }
        if (ctx->pc != 0x1D9908u) { return; }
    }
    ctx->pc = 0x1D9908u;
label_1d9908:
    // 0x1d9908: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d9908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d990c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D990Cu;
    {
        const bool branch_taken_0x1d990c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D990Cu;
            // 0x1d9910: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d990c) {
            ctx->pc = 0x1D9930u;
            goto label_1d9930;
        }
    }
    ctx->pc = 0x1D9914u;
    // 0x1d9914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9918: 0x34a50203  ori         $a1, $a1, 0x203
    ctx->pc = 0x1d9918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
    // 0x1d991c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d991cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9924: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d9924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9928: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1D9928u;
    ctx->pc = 0x1D992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9928u;
            // 0x1d992c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    if (runtime->hasFunction(0x1D9A20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D9930u;
label_1d9930:
    // 0x1d9930: 0x2604025c  addiu       $a0, $s0, 0x25C
    ctx->pc = 0x1d9930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 604));
label_1d9934:
    // 0x1d9934: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x1d9934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x1d9938: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d993c: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x1d993cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x1d9940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9948: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d994c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d994cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9950: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9950u;
            // 0x1d9954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9958u;
label_1d9958:
    // 0x1d9958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d995c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d995cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9960: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9964: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9968: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d9968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d996c: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D996Cu;
    {
        const bool branch_taken_0x1d996c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D996Cu;
            // 0x1d9970: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d996c) {
            ctx->pc = 0x1D99B0u;
            goto label_1d99b0;
        }
    }
    ctx->pc = 0x1D9974u;
    // 0x1d9974: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d9974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d9978: 0x2446e6b0  addiu       $a2, $v0, -0x1950
    ctx->pc = 0x1d9978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
    // 0x1d997c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1d997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d9980: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1d9980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d9984: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1d9984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d9988: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1d9988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d998c: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1d998cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1d9990: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1d9990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9994: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1d9994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9998: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x1d9998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d999c: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x1d999cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d99a0: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x1d99a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x1d99a4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D99A4u;
    {
        const bool branch_taken_0x1d99a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D99A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99A4u;
            // 0x1d99a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99a4) {
            ctx->pc = 0x1D9A0Cu;
            goto label_1d9a0c;
        }
    }
    ctx->pc = 0x1D99ACu;
    // 0x1d99ac: 0x0  nop
    ctx->pc = 0x1d99acu;
    // NOP
label_1d99b0:
    // 0x1d99b0: 0xc0770ee  jal         func_1DC3B8
    ctx->pc = 0x1D99B0u;
    SET_GPR_U32(ctx, 31, 0x1D99B8u);
    ctx->pc = 0x1DC3B8u;
    if (runtime->hasFunction(0x1DC3B8u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99B8u; }
        if (ctx->pc != 0x1D99B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3B8_0x1dc3b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99B8u; }
        if (ctx->pc != 0x1D99B8u) { return; }
    }
    ctx->pc = 0x1D99B8u;
label_1d99b8:
    // 0x1d99b8: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d99b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d99bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D99BCu;
    {
        const bool branch_taken_0x1d99bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D99C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99BCu;
            // 0x1d99c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99bc) {
            ctx->pc = 0x1D99E0u;
            goto label_1d99e0;
        }
    }
    ctx->pc = 0x1D99C4u;
    // 0x1d99c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d99c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d99c8: 0x34a50204  ori         $a1, $a1, 0x204
    ctx->pc = 0x1d99c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)516);
    // 0x1d99cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d99ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d99d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d99d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d99d4: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1D99D4u;
    ctx->pc = 0x1D99D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99D4u;
            // 0x1d99d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    if (runtime->hasFunction(0x1D9A20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D99DCu;
    // 0x1d99dc: 0x0  nop
    ctx->pc = 0x1d99dcu;
    // NOP
label_1d99e0:
    // 0x1d99e0: 0x6a020263  ldl         $v0, 0x263($s0)
    ctx->pc = 0x1d99e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 611); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d99e4: 0x6e02025c  ldr         $v0, 0x25C($s0)
    ctx->pc = 0x1d99e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 604); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d99e8: 0x6a03026b  ldl         $v1, 0x26B($s0)
    ctx->pc = 0x1d99e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 619); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d99ec: 0x6e030264  ldr         $v1, 0x264($s0)
    ctx->pc = 0x1d99ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 612); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d99f0: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x1d99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x1d99f4: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1d99f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d99f8: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1d99f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d99fc: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x1d99fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9a00: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x1d9a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9a04: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x1d9a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x1d9a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9a0c:
    // 0x1d9a0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9a14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A18u;
            // 0x1d9a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9A20u;
    ctx->pc = 0x1d9a20u;
}
