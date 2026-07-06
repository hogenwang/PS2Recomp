#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024D908
// Address: 0x24d908 - 0x24dea8
void sub_0024D908_0x24d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D908_0x24d908");
#endif

    switch (ctx->pc) {
        case 0x24d968u: goto label_24d968;
        case 0x24d978u: goto label_24d978;
        case 0x24d98cu: goto label_24d98c;
        case 0x24da10u: goto label_24da10;
        case 0x24da64u: goto label_24da64;
        case 0x24da6cu: goto label_24da6c;
        case 0x24da78u: goto label_24da78;
        case 0x24daf4u: goto label_24daf4;
        case 0x24db10u: goto label_24db10;
        case 0x24db78u: goto label_24db78;
        case 0x24dbb8u: goto label_24dbb8;
        case 0x24dbd0u: goto label_24dbd0;
        case 0x24dc08u: goto label_24dc08;
        case 0x24dc38u: goto label_24dc38;
        case 0x24dc68u: goto label_24dc68;
        case 0x24dc90u: goto label_24dc90;
        case 0x24dca8u: goto label_24dca8;
        case 0x24dcf0u: goto label_24dcf0;
        case 0x24dcf4u: goto label_24dcf4;
        case 0x24dd20u: goto label_24dd20;
        case 0x24ddb0u: goto label_24ddb0;
        case 0x24de50u: goto label_24de50;
        case 0x24de68u: goto label_24de68;
        case 0x24de78u: goto label_24de78;
        default: break;
    }

    ctx->pc = 0x24d908u;

    // 0x24d908: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x24d908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x24d90c: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x24d90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x24d910: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x24d910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x24d914: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x24d914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x24d918: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24d918u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d91c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x24d91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x24d920: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24d920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d924: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x24d924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x24d928: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x24d928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x24d92c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d92cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d930: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x24d930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x24d934: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x24d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x24d938: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x24d938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x24d93c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x24d93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x24d940: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x24d940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x24d944: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x24d944u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24d948: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x24d948u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24d94c: 0x8a63000f  lwl         $v1, 0xF($s3)
    ctx->pc = 0x24d94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24d950: 0x9a63000c  lwr         $v1, 0xC($s3)
    ctx->pc = 0x24d950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24d954: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24d954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24d958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d95c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x24d95cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24d960: 0xc09253c  jal         func_2494F0
    ctx->pc = 0x24D960u;
    SET_GPR_U32(ctx, 31, 0x24D968u);
    ctx->pc = 0x24D964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D960u;
            // 0x24d964: 0x2457ffec  addiu       $s7, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2494F0u;
    if (runtime->hasFunction(0x2494F0u)) {
        auto targetFn = runtime->lookupFunction(0x2494F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D968u; }
        if (ctx->pc != 0x24D968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002494F0_0x2494f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D968u; }
        if (ctx->pc != 0x24D968u) { return; }
    }
    ctx->pc = 0x24D968u;
label_24d968:
    // 0x24d968: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24D968u;
    {
        const bool branch_taken_0x24d968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d968) {
            ctx->pc = 0x24D994u;
            goto label_24d994;
        }
    }
    ctx->pc = 0x24D970u;
    // 0x24d970: 0xc08a254  jal         func_228950
    ctx->pc = 0x24D970u;
    SET_GPR_U32(ctx, 31, 0x24D978u);
    ctx->pc = 0x24D974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D970u;
            // 0x24d974: 0x3c04ff00  lui         $a0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D978u; }
        if (ctx->pc != 0x24D978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D978u; }
        if (ctx->pc != 0x24D978u) { return; }
    }
    ctx->pc = 0x24D978u;
label_24d978:
    // 0x24d978: 0x8a70000f  lwl         $s0, 0xF($s3)
    ctx->pc = 0x24d978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x24d97c: 0x9a70000c  lwr         $s0, 0xC($s3)
    ctx->pc = 0x24d97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x24d980: 0x3c047f00  lui         $a0, 0x7F00
    ctx->pc = 0x24d980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32512 << 16));
    // 0x24d984: 0xc08a254  jal         func_228950
    ctx->pc = 0x24D984u;
    SET_GPR_U32(ctx, 31, 0x24D98Cu);
    ctx->pc = 0x24D988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D984u;
            // 0x24d988: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D98Cu; }
        if (ctx->pc != 0x24D98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D98Cu; }
        if (ctx->pc != 0x24D98Cu) { return; }
    }
    ctx->pc = 0x24D98Cu;
label_24d98c:
    // 0x24d98c: 0x160200b4  bne         $s0, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x24D98Cu;
    {
        const bool branch_taken_0x24d98c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x24d98c) {
            ctx->pc = 0x24DC60u;
            goto label_24dc60;
        }
    }
    ctx->pc = 0x24D994u;
label_24d994:
    // 0x24d994: 0x8a620013  lwl         $v0, 0x13($s3)
    ctx->pc = 0x24d994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24d998: 0x9a620010  lwr         $v0, 0x10($s3)
    ctx->pc = 0x24d998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24d99c: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x24d99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24d9a0: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x24d9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24d9a4: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x24d9a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x24d9a8: 0x8a66000f  lwl         $a2, 0xF($s3)
    ctx->pc = 0x24d9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x24d9ac: 0x9a66000c  lwr         $a2, 0xC($s3)
    ctx->pc = 0x24d9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x24d9b0: 0xaa660013  swl         $a2, 0x13($s3)
    ctx->pc = 0x24d9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24d9b4: 0xba660010  swr         $a2, 0x10($s3)
    ctx->pc = 0x24d9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24d9b8: 0x240301fd  addiu       $v1, $zero, 0x1FD
    ctx->pc = 0x24d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
    // 0x24d9bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24D9BCu;
    {
        const bool branch_taken_0x24d9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d9bc) {
            ctx->pc = 0x24D9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24D9BCu;
            // 0x24d9c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x24D9C4u;
            goto label_24d9c4;
        }
    }
    ctx->pc = 0x24D9C4u;
label_24d9c4:
    // 0x24d9c4: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x24d9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d9c8: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x24d9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x24d9cc: 0xe3001b  divu        $zero, $a3, $v1
    ctx->pc = 0x24d9ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x24d9d0: 0x1010  mfhi        $v0
    ctx->pc = 0x24d9d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x24d9d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d9d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24d9dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d9e0: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x24D9E0u;
    {
        const bool branch_taken_0x24d9e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D9E0u;
            // 0x24d9e4: 0x3c08003a  lui         $t0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9e0) {
            ctx->pc = 0x24DA48u;
            goto label_24da48;
        }
    }
    ctx->pc = 0x24D9E8u;
    // 0x24d9e8: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x24d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x24d9ec: 0x54470008  bnel        $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D9ECu;
    {
        const bool branch_taken_0x24d9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x24d9ec) {
            ctx->pc = 0x24D9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24D9ECu;
            // 0x24d9f0: 0x8ca5004c  lw          $a1, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DA10u;
            goto label_24da10;
        }
    }
    ctx->pc = 0x24D9F4u;
    // 0x24d9f4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x24d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24d9f8: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x24d9f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24d9fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24d9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24da00: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24DA00u;
    {
        const bool branch_taken_0x24da00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24da00) {
            ctx->pc = 0x24DA38u;
            goto label_24da38;
        }
    }
    ctx->pc = 0x24DA08u;
    // 0x24da08: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x24da08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x24da0c: 0x0  nop
    ctx->pc = 0x24da0cu;
    // NOP
label_24da10:
    // 0x24da10: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x24DA10u;
    {
        const bool branch_taken_0x24da10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da10) {
            ctx->pc = 0x24DA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA10u;
            // 0x24da14: 0x8e830014  lw          $v1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DA4Cu;
            goto label_24da4c;
        }
    }
    ctx->pc = 0x24DA18u;
    // 0x24da18: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x24da18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x24da1c: 0x5447fffc  bnel        $v0, $a3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x24DA1Cu;
    {
        const bool branch_taken_0x24da1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x24da1c) {
            ctx->pc = 0x24DA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA1Cu;
            // 0x24da20: 0x8ca5004c  lw          $a1, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24da10;
        }
    }
    ctx->pc = 0x24DA24u;
    // 0x24da24: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x24da24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24da28: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x24da28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24da2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24da2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24da30: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24DA30u;
    {
        const bool branch_taken_0x24da30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da30) {
            ctx->pc = 0x24DA34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA30u;
            // 0x24da34: 0x8ca5004c  lw          $a1, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24da10;
        }
    }
    ctx->pc = 0x24DA38u;
label_24da38:
    // 0x24da38: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x24DA38u;
    {
        const bool branch_taken_0x24da38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA38u;
            // 0x24da3c: 0x24b0005c  addiu       $s0, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da38) {
            ctx->pc = 0x24DAA4u;
            goto label_24daa4;
        }
    }
    ctx->pc = 0x24DA40u;
    // 0x24da40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24DA40u;
    {
        const bool branch_taken_0x24da40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA40u;
            // 0x24da44: 0x8e830014  lw          $v1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da40) {
            ctx->pc = 0x24DA4Cu;
            goto label_24da4c;
        }
    }
    ctx->pc = 0x24DA48u;
label_24da48:
    // 0x24da48: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x24da48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_24da4c:
    // 0x24da4c: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x24da4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24da50: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24da50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24da54: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24DA54u;
    {
        const bool branch_taken_0x24da54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA54u;
            // 0x24da58: 0x24b0005c  addiu       $s0, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da54) {
            ctx->pc = 0x24DAA4u;
            goto label_24daa4;
        }
    }
    ctx->pc = 0x24DA5Cu;
    // 0x24da5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24DA5Cu;
    {
        const bool branch_taken_0x24da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA5Cu;
            // 0x24da60: 0x8c66000c  lw          $a2, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da5c) {
            ctx->pc = 0x24DA78u;
            goto label_24da78;
        }
    }
    ctx->pc = 0x24DA64u;
label_24da64:
    // 0x24da64: 0xc090c4c  jal         func_243130
    ctx->pc = 0x24DA64u;
    SET_GPR_U32(ctx, 31, 0x24DA6Cu);
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DA6Cu; }
        if (ctx->pc != 0x24DA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DA6Cu; }
        if (ctx->pc != 0x24DA6Cu) { return; }
    }
    ctx->pc = 0x24DA6Cu;
label_24da6c:
    // 0x24da6c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x24DA6Cu;
    {
        const bool branch_taken_0x24da6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da6c) {
            ctx->pc = 0x24DB30u;
            goto label_24db30;
        }
    }
    ctx->pc = 0x24DA74u;
    // 0x24da74: 0x0  nop
    ctx->pc = 0x24da74u;
    // NOP
label_24da78:
    // 0x24da78: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x24DA78u;
    {
        const bool branch_taken_0x24da78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA78u;
            // 0x24da7c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da78) {
            ctx->pc = 0x24DAA0u;
            goto label_24daa0;
        }
    }
    ctx->pc = 0x24DA80u;
    // 0x24da80: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24da84: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24da84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x24da88: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24DA88u;
    {
        const bool branch_taken_0x24da88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24da88) {
            ctx->pc = 0x24DA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA88u;
            // 0x24da8c: 0x8cc60010  lw          $a2, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DA78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24da78;
        }
    }
    ctx->pc = 0x24DA90u;
    // 0x24da90: 0x8cc20070  lw          $v0, 0x70($a2)
    ctx->pc = 0x24da90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x24da94: 0x54e2fff8  bnel        $a3, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24DA94u;
    {
        const bool branch_taken_0x24da94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x24da94) {
            ctx->pc = 0x24DA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA94u;
            // 0x24da98: 0x8cc60010  lw          $a2, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DA78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24da78;
        }
    }
    ctx->pc = 0x24DA9Cu;
    // 0x24da9c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x24da9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24daa0:
    // 0x24daa0: 0x24b0005c  addiu       $s0, $a1, 0x5C
    ctx->pc = 0x24daa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
label_24daa4:
    // 0x24daa4: 0x25020dd8  addiu       $v0, $t0, 0xDD8
    ctx->pc = 0x24daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 3544));
    // 0x24daa8: 0x5800a  movz        $s0, $zero, $a1
    ctx->pc = 0x24daa8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x24daac: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x24daacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24dab0: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x24dab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24dab4: 0xa8430007  swl         $v1, 0x7($v0)
    ctx->pc = 0x24dab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24dab8: 0xb8430004  swr         $v1, 0x4($v0)
    ctx->pc = 0x24dab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24dabc: 0x1600006c  bnez        $s0, . + 4 + (0x6C << 2)
    ctx->pc = 0x24DABCu;
    {
        const bool branch_taken_0x24dabc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DABCu;
            // 0x24dac0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dabc) {
            ctx->pc = 0x24DC70u;
            goto label_24dc70;
        }
    }
    ctx->pc = 0x24DAC4u;
    // 0x24dac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24dac8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x24dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24dacc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x24daccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24dad0: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x24dad0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x24dad4: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x24dad4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x24dad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24dad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dadc: 0x8a670013  lwl         $a3, 0x13($s3)
    ctx->pc = 0x24dadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x24dae0: 0x9a670010  lwr         $a3, 0x10($s3)
    ctx->pc = 0x24dae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x24dae4: 0xaba70017  swl         $a3, 0x17($sp)
    ctx->pc = 0x24dae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24dae8: 0xbba70014  swr         $a3, 0x14($sp)
    ctx->pc = 0x24dae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24daec: 0xc048c96  jal         func_123258
    ctx->pc = 0x24DAECu;
    SET_GPR_U32(ctx, 31, 0x24DAF4u);
    ctx->pc = 0x24DAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DAECu;
            // 0x24daf0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DAF4u; }
        if (ctx->pc != 0x24DAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DAF4u; }
        if (ctx->pc != 0x24DAF4u) { return; }
    }
    ctx->pc = 0x24DAF4u;
label_24daf4:
    // 0x24daf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24daf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24daf8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x24daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x24dafc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x24dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24db00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24db00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24db04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db08: 0xc093302  jal         func_24CC08
    ctx->pc = 0x24DB08u;
    SET_GPR_U32(ctx, 31, 0x24DB10u);
    ctx->pc = 0x24DB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DB08u;
            // 0x24db0c: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24CC08u;
    if (runtime->hasFunction(0x24CC08u)) {
        auto targetFn = runtime->lookupFunction(0x24CC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DB10u; }
        if (ctx->pc != 0x24DB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024CC08_0x24cc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DB10u; }
        if (ctx->pc != 0x24DB10u) { return; }
    }
    ctx->pc = 0x24DB10u;
label_24db10:
    // 0x24db10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24db10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24db14: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24DB14u;
    {
        const bool branch_taken_0x24db14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DB14u;
            // 0x24db18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db14) {
            ctx->pc = 0x24DB30u;
            goto label_24db30;
        }
    }
    ctx->pc = 0x24DB1Cu;
    // 0x24db1c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x24db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x24db20: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x24db20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24db24: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x24DB24u;
    {
        const bool branch_taken_0x24db24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DB24u;
            // 0x24db28: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db24) {
            ctx->pc = 0x24DA64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24da64;
        }
    }
    ctx->pc = 0x24DB2Cu;
    // 0x24db2c: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x24db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_24db30:
    // 0x24db30: 0x52000033  beql        $s0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x24DB30u;
    {
        const bool branch_taken_0x24db30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db30) {
            ctx->pc = 0x24DB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DB30u;
            // 0x24db34: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DC00u;
            goto label_24dc00;
        }
    }
    ctx->pc = 0x24DB38u;
    // 0x24db38: 0x8a070007  lwl         $a3, 0x7($s0)
    ctx->pc = 0x24db38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x24db3c: 0x9a070004  lwr         $a3, 0x4($s0)
    ctx->pc = 0x24db3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x24db40: 0xaba70003  swl         $a3, 0x3($sp)
    ctx->pc = 0x24db40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24db44: 0xbba70000  swr         $a3, 0x0($sp)
    ctx->pc = 0x24db44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24db48: 0x240301fd  addiu       $v1, $zero, 0x1FD
    ctx->pc = 0x24db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
    // 0x24db4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24db4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db50: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24DB50u;
    {
        const bool branch_taken_0x24db50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db50) {
            ctx->pc = 0x24DB54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DB50u;
            // 0x24db54: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DB58u;
            goto label_24db58;
        }
    }
    ctx->pc = 0x24DB58u;
label_24db58:
    // 0x24db58: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x24db58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24db5c: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x24db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x24db60: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x24db60u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x24db64: 0x1010  mfhi        $v0
    ctx->pc = 0x24db64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x24db68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24db68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24db6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24db70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24db70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24db74: 0x0  nop
    ctx->pc = 0x24db74u;
    // NOP
label_24db78:
    // 0x24db78: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x24DB78u;
    {
        const bool branch_taken_0x24db78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db78) {
            ctx->pc = 0x24DBF4u;
            goto label_24dbf4;
        }
    }
    ctx->pc = 0x24DB80u;
    // 0x24db80: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x24db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x24db84: 0x5446fffc  bnel        $v0, $a2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x24DB84u;
    {
        const bool branch_taken_0x24db84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x24db84) {
            ctx->pc = 0x24DB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DB84u;
            // 0x24db88: 0x8ca5004c  lw          $a1, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DB78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24db78;
        }
    }
    ctx->pc = 0x24DB8Cu;
    // 0x24db8c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x24db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24db90: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x24db90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24db94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24db94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24db98: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24DB98u;
    {
        const bool branch_taken_0x24db98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db98) {
            ctx->pc = 0x24DB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DB98u;
            // 0x24db9c: 0x8ca5004c  lw          $a1, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DB78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24db78;
        }
    }
    ctx->pc = 0x24DBA0u;
    // 0x24dba0: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x24DBA0u;
    {
        const bool branch_taken_0x24dba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dba0) {
            ctx->pc = 0x24DBF4u;
            goto label_24dbf4;
        }
    }
    ctx->pc = 0x24DBA8u;
    // 0x24dba8: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x24dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x24dbac: 0x50640011  beql        $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24DBACu;
    {
        const bool branch_taken_0x24dbac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x24dbac) {
            ctx->pc = 0x24DBB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DBACu;
            // 0x24dbb0: 0x24b0005c  addiu       $s0, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DBF4u;
            goto label_24dbf4;
        }
    }
    ctx->pc = 0x24DBB4u;
    // 0x24dbb4: 0x0  nop
    ctx->pc = 0x24dbb4u;
    // NOP
label_24dbb8:
    // 0x24dbb8: 0x88a20063  lwl         $v0, 0x63($a1)
    ctx->pc = 0x24dbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24dbbc: 0x98a20060  lwr         $v0, 0x60($a1)
    ctx->pc = 0x24dbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24dbc0: 0xaba20043  swl         $v0, 0x43($sp)
    ctx->pc = 0x24dbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24dbc4: 0xbba20040  swr         $v0, 0x40($sp)
    ctx->pc = 0x24dbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24dbc8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x24dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24dbcc: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x24dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_24dbd0:
    // 0x24dbd0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24DBD0u;
    {
        const bool branch_taken_0x24dbd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dbd0) {
            ctx->pc = 0x24DBF4u;
            goto label_24dbf4;
        }
    }
    ctx->pc = 0x24DBD8u;
    // 0x24dbd8: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x24dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x24dbdc: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x24DBDCu;
    {
        const bool branch_taken_0x24dbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24dbdc) {
            ctx->pc = 0x24DBE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DBDCu;
            // 0x24dbe0: 0x8ca5004c  lw          $a1, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DBD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24dbd0;
        }
    }
    ctx->pc = 0x24DBE4u;
    // 0x24dbe4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x24dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24dbe8: 0x1444fff3  bne         $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x24DBE8u;
    {
        const bool branch_taken_0x24dbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x24dbe8) {
            ctx->pc = 0x24DBB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24dbb8;
        }
    }
    ctx->pc = 0x24DBF0u;
    // 0x24dbf0: 0x24b0005c  addiu       $s0, $a1, 0x5C
    ctx->pc = 0x24dbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
label_24dbf4:
    // 0x24dbf4: 0x1600001e  bnez        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x24DBF4u;
    {
        const bool branch_taken_0x24dbf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DBF4u;
            // 0x24dbf8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dbf4) {
            ctx->pc = 0x24DC70u;
            goto label_24dc70;
        }
    }
    ctx->pc = 0x24DBFCu;
    // 0x24dbfc: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x24dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_24dc00:
    // 0x24dc00: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x24dc00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24dc04: 0x0  nop
    ctx->pc = 0x24dc04u;
    // NOP
label_24dc08:
    // 0x24dc08: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x24DC08u;
    {
        const bool branch_taken_0x24dc08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC08u;
            // 0x24dc0c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc08) {
            ctx->pc = 0x24DC24u;
            goto label_24dc24;
        }
    }
    ctx->pc = 0x24DC10u;
    // 0x24dc10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24dc14: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24dc14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x24dc18: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24DC18u;
    {
        const bool branch_taken_0x24dc18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24dc18) {
            ctx->pc = 0x24DC1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC18u;
            // 0x24dc1c: 0x8cc60010  lw          $a2, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DC08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24dc08;
        }
    }
    ctx->pc = 0x24DC20u;
    // 0x24dc20: 0x24d0005c  addiu       $s0, $a2, 0x5C
    ctx->pc = 0x24dc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
label_24dc24:
    // 0x24dc24: 0x16000012  bnez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24DC24u;
    {
        const bool branch_taken_0x24dc24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC24u;
            // 0x24dc28: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc24) {
            ctx->pc = 0x24DC70u;
            goto label_24dc70;
        }
    }
    ctx->pc = 0x24DC2Cu;
    // 0x24dc2c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24dc30: 0x8c4511a0  lw          $a1, 0x11A0($v0)
    ctx->pc = 0x24dc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
    // 0x24dc34: 0x0  nop
    ctx->pc = 0x24dc34u;
    // NOP
label_24dc38:
    // 0x24dc38: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24DC38u;
    {
        const bool branch_taken_0x24dc38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dc38) {
            ctx->pc = 0x24DC58u;
            goto label_24dc58;
        }
    }
    ctx->pc = 0x24DC40u;
    // 0x24dc40: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x24dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24dc44: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x24dc44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24dc48: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24dc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x24dc4c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24DC4Cu;
    {
        const bool branch_taken_0x24dc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dc4c) {
            ctx->pc = 0x24DC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC4Cu;
            // 0x24dc50: 0x8ca50054  lw          $a1, 0x54($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DC38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24dc38;
        }
    }
    ctx->pc = 0x24DC54u;
    // 0x24dc54: 0x24b0005c  addiu       $s0, $a1, 0x5C
    ctx->pc = 0x24dc54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
label_24dc58:
    // 0x24dc58: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DC58u;
    {
        const bool branch_taken_0x24dc58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC58u;
            // 0x24dc5c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc58) {
            ctx->pc = 0x24DC70u;
            goto label_24dc70;
        }
    }
    ctx->pc = 0x24DC60u;
label_24dc60:
    // 0x24dc60: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x24DC60u;
    SET_GPR_U32(ctx, 31, 0x24DC68u);
    ctx->pc = 0x24DC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC60u;
            // 0x24dc64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DC68u; }
        if (ctx->pc != 0x24DC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DC68u; }
        if (ctx->pc != 0x24DC68u) { return; }
    }
    ctx->pc = 0x24DC68u;
label_24dc68:
    // 0x24dc68: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x24DC68u;
    {
        const bool branch_taken_0x24dc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dc68) {
            ctx->pc = 0x24DE68u;
            goto label_24de68;
        }
    }
    ctx->pc = 0x24DC70u;
label_24dc70:
    // 0x24dc70: 0x8a030007  lwl         $v1, 0x7($s0)
    ctx->pc = 0x24dc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24dc74: 0x9a030004  lwr         $v1, 0x4($s0)
    ctx->pc = 0x24dc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24dc78: 0xaa63000f  swl         $v1, 0xF($s3)
    ctx->pc = 0x24dc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24dc7c: 0xba63000c  swr         $v1, 0xC($s3)
    ctx->pc = 0x24dc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24dc80: 0x1ae00073  blez        $s7, . + 4 + (0x73 << 2)
    ctx->pc = 0x24DC80u;
    {
        const bool branch_taken_0x24dc80 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x24DC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC80u;
            // 0x24dc84: 0xa2620008  sb          $v0, 0x8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc80) {
            ctx->pc = 0x24DE50u;
            goto label_24de50;
        }
    }
    ctx->pc = 0x24DC88u;
    // 0x24dc88: 0xc094006  jal         func_250018
    ctx->pc = 0x24DC88u;
    SET_GPR_U32(ctx, 31, 0x24DC90u);
    ctx->pc = 0x24DC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC88u;
            // 0x24dc8c: 0x267e0014  addiu       $fp, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250018u;
    if (runtime->hasFunction(0x250018u)) {
        auto targetFn = runtime->lookupFunction(0x250018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DC90u; }
        if (ctx->pc != 0x24DC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00250018_0x250018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DC90u; }
        if (ctx->pc != 0x24DC90u) { return; }
    }
    ctx->pc = 0x24DC90u;
label_24dc90:
    // 0x24dc90: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24dc90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dc94: 0x16a00011  bnez        $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x24DC94u;
    {
        const bool branch_taken_0x24dc94 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC94u;
            // 0x24dc98: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc94) {
            ctx->pc = 0x24DCDCu;
            goto label_24dcdc;
        }
    }
    ctx->pc = 0x24DC9Cu;
    // 0x24dc9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24dc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dca0: 0xc08a946  jal         func_22A518
    ctx->pc = 0x24DCA0u;
    SET_GPR_U32(ctx, 31, 0x24DCA8u);
    ctx->pc = 0x24DCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DCA0u;
            // 0x24dca4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A518u;
    if (runtime->hasFunction(0x22A518u)) {
        auto targetFn = runtime->lookupFunction(0x22A518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DCA8u; }
        if (ctx->pc != 0x24DCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A518_0x22a518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DCA8u; }
        if (ctx->pc != 0x24DCA8u) { return; }
    }
    ctx->pc = 0x24DCA8u;
label_24dca8:
    // 0x24dca8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24dca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dcac: 0x12a0004c  beqz        $s5, . + 4 + (0x4C << 2)
    ctx->pc = 0x24DCACu;
    {
        const bool branch_taken_0x24dcac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DCACu;
            // 0x24dcb0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcac) {
            ctx->pc = 0x24DDE0u;
            goto label_24dde0;
        }
    }
    ctx->pc = 0x24DCB4u;
    // 0x24dcb4: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x24dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24dcb8: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x24dcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x24dcbc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24dcc0: 0x246601d0  addiu       $a2, $v1, 0x1D0
    ctx->pc = 0x24dcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x24dcc4: 0x88c70003  lwl         $a3, 0x3($a2)
    ctx->pc = 0x24dcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x24dcc8: 0x98c70000  lwr         $a3, 0x0($a2)
    ctx->pc = 0x24dcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x24dccc: 0xa8870003  swl         $a3, 0x3($a0)
    ctx->pc = 0x24dcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24dcd0: 0xb8870000  swr         $a3, 0x0($a0)
    ctx->pc = 0x24dcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24dcd4: 0x12a00043  beqz        $s5, . + 4 + (0x43 << 2)
    ctx->pc = 0x24DCD4u;
    {
        const bool branch_taken_0x24dcd4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DCD4u;
            // 0x24dcd8: 0x26f60014  addiu       $s6, $s7, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcd4) {
            ctx->pc = 0x24DDE4u;
            goto label_24dde4;
        }
    }
    ctx->pc = 0x24DCDCu;
label_24dcdc:
    // 0x24dcdc: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x24dcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dce0: 0x8ea7000c  lw          $a3, 0xC($s5)
    ctx->pc = 0x24dce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x24dce4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24DCE4u;
    {
        const bool branch_taken_0x24dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DCE4u;
            // 0x24dce8: 0x26f60014  addiu       $s6, $s7, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dce4) {
            ctx->pc = 0x24DD38u;
            goto label_24dd38;
        }
    }
    ctx->pc = 0x24DCECu;
    // 0x24dcec: 0x0  nop
    ctx->pc = 0x24dcecu;
    // NOP
label_24dcf0:
    // 0x24dcf0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x24dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_24dcf4:
    // 0x24dcf4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DCF4u;
    {
        const bool branch_taken_0x24dcf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DCF4u;
            // 0x24dcf8: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcf4) {
            ctx->pc = 0x24DD0Cu;
            goto label_24dd0c;
        }
    }
    ctx->pc = 0x24DCFCu;
    // 0x24dcfc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DCFCu;
    {
        const bool branch_taken_0x24dcfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DCFCu;
            // 0x24dd00: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcfc) {
            ctx->pc = 0x24DD0Cu;
            goto label_24dd0c;
        }
    }
    ctx->pc = 0x24DD04u;
    // 0x24dd04: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24DD04u;
    {
        const bool branch_taken_0x24dd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24dd04) {
            ctx->pc = 0x24DD08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD04u;
            // 0x24dd08: 0x2519021  addu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DD34u;
            goto label_24dd34;
        }
    }
    ctx->pc = 0x24DD0Cu;
label_24dd0c:
    // 0x24dd0c: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x24dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24dd10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24dd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24dd14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd18: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24DD18u;
    SET_GPR_U32(ctx, 31, 0x24DD20u);
    ctx->pc = 0x24DD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD18u;
            // 0x24dd1c: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD20u; }
        if (ctx->pc != 0x24DD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD20u; }
        if (ctx->pc != 0x24DD20u) { return; }
    }
    ctx->pc = 0x24DD20u;
label_24dd20:
    // 0x24dd20: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x24dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x24dd24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24dd28: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x24dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x24dd2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24dd2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd30: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x24dd30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_24dd34:
    // 0x24dd34: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x24dd34u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_24dd38:
    // 0x24dd38: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24DD38u;
    {
        const bool branch_taken_0x24dd38 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x24DD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD38u;
            // 0x24dd3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd38) {
            ctx->pc = 0x24DD80u;
            goto label_24dd80;
        }
    }
    ctx->pc = 0x24DD40u;
    // 0x24dd40: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x24dd40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24dd44: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24DD44u;
    {
        const bool branch_taken_0x24dd44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD44u;
            // 0x24dd48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd44) {
            ctx->pc = 0x24DD7Cu;
            goto label_24dd7c;
        }
    }
    ctx->pc = 0x24DD4Cu;
    // 0x24dd4c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DD4Cu;
    {
        const bool branch_taken_0x24dd4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24DD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD4Cu;
            // 0x24dd50: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd4c) {
            ctx->pc = 0x24DD5Cu;
            goto label_24dd5c;
        }
    }
    ctx->pc = 0x24DD54u;
    // 0x24dd54: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x24DD54u;
    {
        const bool branch_taken_0x24dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD54u;
            // 0x24dd58: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd54) {
            ctx->pc = 0x24DCF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24dcf0;
        }
    }
    ctx->pc = 0x24DD5Cu;
label_24dd5c:
    // 0x24dd5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24DD5Cu;
    {
        const bool branch_taken_0x24dd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD5Cu;
            // 0x24dd60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd5c) {
            ctx->pc = 0x24DD80u;
            goto label_24dd80;
        }
    }
    ctx->pc = 0x24DD64u;
    // 0x24dd64: 0x92510001  lbu         $s1, 0x1($s2)
    ctx->pc = 0x24dd64u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x24dd68: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x24dd68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24dd6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DD6Cu;
    {
        const bool branch_taken_0x24dd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD6Cu;
            // 0x24dd70: 0x211102b  sltu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd6c) {
            ctx->pc = 0x24DD7Cu;
            goto label_24dd7c;
        }
    }
    ctx->pc = 0x24DD74u;
    // 0x24dd74: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x24DD74u;
    {
        const bool branch_taken_0x24dd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD74u;
            // 0x24dd78: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd74) {
            ctx->pc = 0x24DCF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24dcf4;
        }
    }
    ctx->pc = 0x24DD7Cu;
label_24dd7c:
    // 0x24dd7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24dd80:
    // 0x24dd80: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x24dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x24dd84: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x24dd84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x24dd88: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x24dd88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x24dd8c: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x24dd8cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
    // 0x24dd90: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x24dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24dd94: 0xe28023  subu        $s0, $a3, $v0
    ctx->pc = 0x24dd94u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24dd98: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24DD98u;
    {
        const bool branch_taken_0x24dd98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD98u;
            // 0x24dd9c: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd98) {
            ctx->pc = 0x24DDE4u;
            goto label_24dde4;
        }
    }
    ctx->pc = 0x24DDA0u;
    // 0x24dda0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x24DDA0u;
    {
        const bool branch_taken_0x24dda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dda0) {
            ctx->pc = 0x24DDA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24DDA0u;
            // 0x24dda4: 0x92620003  lbu         $v0, 0x3($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24DDE8u;
            goto label_24dde8;
        }
    }
    ctx->pc = 0x24DDA8u;
    // 0x24dda8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24DDA8u;
    {
        const bool branch_taken_0x24dda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DDA8u;
            // 0x24ddac: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dda8) {
            ctx->pc = 0x24DDB8u;
            goto label_24ddb8;
        }
    }
    ctx->pc = 0x24DDB0u;
label_24ddb0:
    // 0x24ddb0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24ddb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ddb4: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x24ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_24ddb8:
    // 0x24ddb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24ddb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24ddbc: 0x2a040004  slti        $a0, $s0, 0x4
    ctx->pc = 0x24ddbcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24ddc0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x24ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x24ddc4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x24ddc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ddc8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x24ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x24ddcc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x24ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24ddd0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24DDD0u;
    {
        const bool branch_taken_0x24ddd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DDD0u;
            // 0x24ddd4: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddd0) {
            ctx->pc = 0x24DDB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ddb0;
        }
    }
    ctx->pc = 0x24DDD8u;
    // 0x24ddd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24DDD8u;
    {
        const bool branch_taken_0x24ddd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DDD8u;
            // 0x24dddc: 0x92620003  lbu         $v0, 0x3($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddd8) {
            ctx->pc = 0x24DDE8u;
            goto label_24dde8;
        }
    }
    ctx->pc = 0x24DDE0u;
label_24dde0:
    // 0x24dde0: 0x26f60014  addiu       $s6, $s7, 0x14
    ctx->pc = 0x24dde0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
label_24dde4:
    // 0x24dde4: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x24dde4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_24dde8:
    // 0x24dde8: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x24dde8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x24ddec: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24ddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24ddf0: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x24ddf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24ddf4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24ddf8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24ddf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24ddfc: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x24ddfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x24de00: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x24de00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x24de04: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x24de04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x24de08: 0x2223a  dsrl        $a0, $v0, 8
    ctx->pc = 0x24de08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 8);
    // 0x24de0c: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x24de0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x24de10: 0xa2640003  sb          $a0, 0x3($s3)
    ctx->pc = 0x24de10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x24de14: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x24de14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x24de18: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x24de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x24de1c: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x24de1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x24de20: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x24de20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x24de24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24de28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DE28u;
    {
        const bool branch_taken_0x24de28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE28u;
            // 0x24de2c: 0xae83000c  sw          $v1, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de28) {
            ctx->pc = 0x24DE3Cu;
            goto label_24de3c;
        }
    }
    ctx->pc = 0x24DE30u;
    // 0x24de30: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x24de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x24de34: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x24de34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x24de38: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x24de38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_24de3c:
    // 0x24de3c: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x24de3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x24de40: 0x2762021  addu        $a0, $s3, $s6
    ctx->pc = 0x24de40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x24de44: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x24de44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24de48: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24DE48u;
    SET_GPR_U32(ctx, 31, 0x24DE50u);
    ctx->pc = 0x24DE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE48u;
            // 0x24de4c: 0x24c6ffec  addiu       $a2, $a2, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE50u; }
        if (ctx->pc != 0x24DE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE50u; }
        if (ctx->pc != 0x24DE50u) { return; }
    }
    ctx->pc = 0x24DE50u;
label_24de50:
    // 0x24de50: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x24de50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x24de54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24de54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24de58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24de58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24de5c: 0x3042fcff  andi        $v0, $v0, 0xFCFF
    ctx->pc = 0x24de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64767);
    // 0x24de60: 0xc0937aa  jal         func_24DEA8
    ctx->pc = 0x24DE60u;
    SET_GPR_U32(ctx, 31, 0x24DE68u);
    ctx->pc = 0x24DE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE60u;
            // 0x24de64: 0xa6820012  sh          $v0, 0x12($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24DEA8u;
    if (runtime->hasFunction(0x24DEA8u)) {
        auto targetFn = runtime->lookupFunction(0x24DEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE68u; }
        if (ctx->pc != 0x24DE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024DEA8_0x24dea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE68u; }
        if (ctx->pc != 0x24DE68u) { return; }
    }
    ctx->pc = 0x24DE68u;
label_24de68:
    // 0x24de68: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DE68u;
    {
        const bool branch_taken_0x24de68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE68u;
            // 0x24de6c: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de68) {
            ctx->pc = 0x24DE7Cu;
            goto label_24de7c;
        }
    }
    ctx->pc = 0x24DE70u;
    // 0x24de70: 0xc08a996  jal         func_22A658
    ctx->pc = 0x24DE70u;
    SET_GPR_U32(ctx, 31, 0x24DE78u);
    ctx->pc = 0x24DE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE70u;
            // 0x24de74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE78u; }
        if (ctx->pc != 0x24DE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE78u; }
        if (ctx->pc != 0x24DE78u) { return; }
    }
    ctx->pc = 0x24DE78u;
label_24de78:
    // 0x24de78: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x24de78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_24de7c:
    // 0x24de7c: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x24de7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24de80: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x24de80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24de84: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x24de84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24de88: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x24de88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24de8c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x24de8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24de90: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x24de90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24de94: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x24de94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24de98: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x24de98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24de9c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x24de9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24dea0: 0x3e00008  jr          $ra
    ctx->pc = 0x24DEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DEA0u;
            // 0x24dea4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24DEA8u;
    ctx->pc = 0x24dea8u;
}
