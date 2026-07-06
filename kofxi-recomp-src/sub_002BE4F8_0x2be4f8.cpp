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

// Function: sub_002BE4F8
// Address: 0x2be4f8 - 0x2becb0
void sub_002BE4F8_0x2be4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE4F8_0x2be4f8");
#endif

    switch (ctx->pc) {
        case 0x2be53cu: goto label_2be53c;
        case 0x2be598u: goto label_2be598;
        case 0x2be5f8u: goto label_2be5f8;
        case 0x2be660u: goto label_2be660;
        case 0x2be6c4u: goto label_2be6c4;
        case 0x2be794u: goto label_2be794;
        case 0x2be7d4u: goto label_2be7d4;
        case 0x2be7e4u: goto label_2be7e4;
        case 0x2be7f4u: goto label_2be7f4;
        case 0x2be808u: goto label_2be808;
        case 0x2be8fcu: goto label_2be8fc;
        case 0x2be918u: goto label_2be918;
        case 0x2be930u: goto label_2be930;
        case 0x2be93cu: goto label_2be93c;
        case 0x2be948u: goto label_2be948;
        case 0x2be958u: goto label_2be958;
        case 0x2be964u: goto label_2be964;
        case 0x2be974u: goto label_2be974;
        case 0x2be980u: goto label_2be980;
        case 0x2be990u: goto label_2be990;
        case 0x2be99cu: goto label_2be99c;
        case 0x2be9c0u: goto label_2be9c0;
        case 0x2be9e4u: goto label_2be9e4;
        case 0x2be9f4u: goto label_2be9f4;
        case 0x2bea00u: goto label_2bea00;
        case 0x2bea0cu: goto label_2bea0c;
        case 0x2bea18u: goto label_2bea18;
        case 0x2bea24u: goto label_2bea24;
        case 0x2bea30u: goto label_2bea30;
        case 0x2bea3cu: goto label_2bea3c;
        case 0x2bea48u: goto label_2bea48;
        case 0x2bea54u: goto label_2bea54;
        case 0x2bea60u: goto label_2bea60;
        case 0x2bea88u: goto label_2bea88;
        case 0x2beab0u: goto label_2beab0;
        case 0x2beab8u: goto label_2beab8;
        case 0x2beb64u: goto label_2beb64;
        case 0x2beb6cu: goto label_2beb6c;
        case 0x2bebacu: goto label_2bebac;
        case 0x2bebf8u: goto label_2bebf8;
        case 0x2bec48u: goto label_2bec48;
        default: break;
    }

    ctx->pc = 0x2be4f8u;

    // 0x2be4f8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2be4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2be4fc: 0xffb70150  sd          $s7, 0x150($sp)
    ctx->pc = 0x2be4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 23));
    // 0x2be500: 0xffb30110  sd          $s3, 0x110($sp)
    ctx->pc = 0x2be500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 19));
    // 0x2be504: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2be504u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be508: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x2be508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x2be50c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2be50cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be510: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x2be510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x2be514: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2be514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be518: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x2be518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x2be51c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2be51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be520: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x2be520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x2be524: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2be524u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be528: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x2be528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
    // 0x2be52c: 0xffb50130  sd          $s5, 0x130($sp)
    ctx->pc = 0x2be52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 21));
    // 0x2be530: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x2be530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x2be534: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x2BE534u;
    SET_GPR_U32(ctx, 31, 0x2BE53Cu);
    ctx->pc = 0x2BE538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE534u;
    // 0x2be538: 0xffb100f0  sd          $s1, 0xF0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x2BE534u, 0x2BE53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE53Cu;
label_2be53c:
    // 0x2be53c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2be53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2be540: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2be540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2be544: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x2be544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x2be548: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x2be548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x2be54c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE54Cu;
    {
        const bool branch_taken_0x2be54c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE54Cu;
        // 0x2be550: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be54c) {
            ctx->pc = 0x2BE55Cu;
            goto label_2be55c;
        }
    }
    ctx->pc = 0x2BE554u;
    // 0x2be554: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE554u;
    {
        const bool branch_taken_0x2be554 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE554u;
        // 0x2be558: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be554) {
            ctx->pc = 0x2BE564u;
            goto label_2be564;
        }
    }
    ctx->pc = 0x2BE55Cu;
label_2be55c:
    // 0x2be55c: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x2BE55Cu;
    {
        const bool branch_taken_0x2be55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE55Cu;
        // 0x2be560: 0x24162721  addiu       $s6, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be55c) {
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BE564u;
label_2be564:
    // 0x2be564: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2be564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2be568: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE568u;
    {
        const bool branch_taken_0x2be568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE568u;
        // 0x2be56c: 0x26f50008  addiu       $s5, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be568) {
            ctx->pc = 0x2BE57Cu;
            goto label_2be57c;
        }
    }
    ctx->pc = 0x2BE570u;
    // 0x2be570: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2be570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2be574: 0x1602018f  bne         $s0, $v0, . + 4 + (0x18F << 2)
    ctx->pc = 0x2BE574u;
    {
        const bool branch_taken_0x2be574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE574u;
        // 0x2be578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be574) {
            ctx->pc = 0x2BEBB4u;
            goto label_2bebb4;
        }
    }
    ctx->pc = 0x2BE57Cu;
label_2be57c:
    // 0x2be57c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2be57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2be580: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x2be580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x2be584: 0x2444ebd0  addiu       $a0, $v0, -0x1430
    ctx->pc = 0x2be584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962128));
    // 0x2be588: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x2be588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2be58c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BE58Cu;
    {
        const bool branch_taken_0x2be58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE58Cu;
        // 0x2be590: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be58c) {
            ctx->pc = 0x2BE5F4u;
            goto label_2be5f4;
        }
    }
    ctx->pc = 0x2BE594u;
    // 0x2be594: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2be594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2be598:
    // 0x2be598: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x2be598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2be59c: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x2be59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2be5a0: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x2be5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2be5a4: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x2be5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2be5a8: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x2be5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2be5ac: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x2be5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2be5b0: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x2be5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2be5b4: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x2be5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2be5b8: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x2be5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be5bc: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x2be5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be5c0: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x2be5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be5c4: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x2be5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be5c8: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x2be5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be5cc: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x2be5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be5d0: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x2be5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be5d4: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x2be5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be5d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2be5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2be5dc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2be5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2be5e0: 0x0  nop
    ctx->pc = 0x2be5e0u;
    // NOP
    // 0x2be5e4: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2BE5E4u;
    {
        const bool branch_taken_0x2be5e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be5e4) {
            ctx->pc = 0x2BE598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be598;
        }
    }
    ctx->pc = 0x2BE5ECu;
    // 0x2be5ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BE5ECu;
    {
        const bool branch_taken_0x2be5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be5ec) {
            ctx->pc = 0x2BE62Cu;
            goto label_2be62c;
        }
    }
    ctx->pc = 0x2BE5F4u;
label_2be5f4:
    // 0x2be5f4: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2be5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2be5f8:
    // 0x2be5f8: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x2be5f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2be5fc: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x2be5fcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2be600: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x2be600u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2be604: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x2be604u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2be608: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x2be608u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2be60c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2be60cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2be610: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x2be610u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x2be614: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x2be614u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x2be618: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2be618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2be61c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2be61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2be620: 0x0  nop
    ctx->pc = 0x2be620u;
    // NOP
    // 0x2be624: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BE624u;
    {
        const bool branch_taken_0x2be624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be624) {
            ctx->pc = 0x2BE5F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be5f8;
        }
    }
    ctx->pc = 0x2BE62Cu;
label_2be62c:
    // 0x2be62c: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2be62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2be630: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2be630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2be634: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x2be634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2be638: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x2be638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2be63c: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x2be63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2be640: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x2be640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2be644: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x2be644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be648: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x2be648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be64c: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x2be64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be650: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x2be650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be654: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x2be654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be658: 0xc0a1a8c  jal         func_286A30
    ctx->pc = 0x2BE658u;
    SET_GPR_U32(ctx, 31, 0x2BE660u);
    ctx->pc = 0x2BE65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE658u;
    // 0x2be65c: 0xb4660010  sdr         $a2, 0x10($v1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A30u, 0x2BE658u, 0x2BE660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE660u;
label_2be660:
    // 0x2be660: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2be660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be664: 0x122000a8  beqz        $s1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2BE664u;
    {
        const bool branch_taken_0x2be664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE664u;
        // 0x2be668: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be664) {
            ctx->pc = 0x2BE908u;
            goto label_2be908;
        }
    }
    ctx->pc = 0x2BE66Cu;
    // 0x2be66c: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE66Cu;
    {
        const bool branch_taken_0x2be66c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE66Cu;
        // 0x2be670: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be66c) {
            ctx->pc = 0x2BE688u;
            goto label_2be688;
        }
    }
    ctx->pc = 0x2BE674u;
    // 0x2be674: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2be674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2be678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2be678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be67c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2be67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2be680: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BE680u;
    {
        const bool branch_taken_0x2be680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE680u;
        // 0x2be684: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be680) {
            ctx->pc = 0x2BE6B0u;
            goto label_2be6b0;
        }
    }
    ctx->pc = 0x2BE688u;
label_2be688:
    // 0x2be688: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE688u;
    {
        const bool branch_taken_0x2be688 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE688u;
        // 0x2be68c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be688) {
            ctx->pc = 0x2BE6B4u;
            goto label_2be6b4;
        }
    }
    ctx->pc = 0x2BE690u;
    // 0x2be690: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x2be690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2be694: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2be694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2be698: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2be698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2be69c: 0xa3a30014  sb          $v1, 0x14($sp)
    ctx->pc = 0x2be69cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be6a0: 0xa3a30044  sb          $v1, 0x44($sp)
    ctx->pc = 0x2be6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be6a4: 0xa3a30038  sb          $v1, 0x38($sp)
    ctx->pc = 0x2be6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be6a8: 0xa3a3002c  sb          $v1, 0x2C($sp)
    ctx->pc = 0x2be6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be6ac: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x2be6acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_2be6b0:
    // 0x2be6b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2be6b4:
    // 0x2be6b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2be6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2be6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6bc: 0xc0afb2c  jal         func_2BECB0
    ctx->pc = 0x2BE6BCu;
    SET_GPR_U32(ctx, 31, 0x2BE6C4u);
    ctx->pc = 0x2BE6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6BCu;
    // 0x2be6c0: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BECB0u, 0x2BE6BCu, 0x2BE6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6C4u;
label_2be6c4:
    // 0x2be6c4: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x2be6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be6c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2be6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6cc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2be6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2be6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2be6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be6d4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2be6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be6d8: 0x8fb4000c  lw          $s4, 0xC($sp)
    ctx->pc = 0x2be6d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2be6dc: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x2be6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
    // 0x2be6e0: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x2be6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x2be6e4: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x2be6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x2be6e8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2be6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be6ec: 0x8fb3003c  lw          $s3, 0x3C($sp)
    ctx->pc = 0x2be6ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2be6f0: 0x16020020  bne         $s0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2BE6F0u;
    {
        const bool branch_taken_0x2be6f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6F0u;
        // 0x2be6f4: 0x83b20050  lb          $s2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be6f0) {
            ctx->pc = 0x2BE774u;
            goto label_2be774;
        }
    }
    ctx->pc = 0x2BE6F8u;
    // 0x2be6f8: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x2be6f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2be6fc: 0x5440015e  bnel        $v0, $zero, . + 4 + (0x15E << 2)
    ctx->pc = 0x2BE6FCu;
    {
        const bool branch_taken_0x2be6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be6fc) {
            ctx->pc = 0x2BE700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE6FCu;
            // 0x2be700: 0x24162726  addiu       $s6, $zero, 0x2726 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10022));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BE704u;
    // 0x2be704: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2be704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2be708: 0x24a30064  addiu       $v1, $a1, 0x64
    ctx->pc = 0x2be708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    // 0x2be70c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2be70cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2be710: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2be710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2be714: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2be714u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2be718: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE718u;
    {
        const bool branch_taken_0x2be718 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x2BE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE718u;
        // 0x2be71c: 0x24a5076c  addiu       $a1, $a1, 0x76C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be718) {
            ctx->pc = 0x2BE72Cu;
            goto label_2be72c;
        }
    }
    ctx->pc = 0x2BE720u;
    // 0x2be720: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2be720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be724: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BE724u;
    {
        const bool branch_taken_0x2be724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE724u;
        // 0x2be728: 0x83b20044  lb          $s2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be724) {
            ctx->pc = 0x2BE76Cu;
            goto label_2be76c;
        }
    }
    ctx->pc = 0x2BE72Cu;
label_2be72c:
    // 0x2be72c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2be72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2be730: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE730u;
    {
        const bool branch_taken_0x2be730 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE730u;
        // 0x2be734: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be730) {
            ctx->pc = 0x2BE750u;
            goto label_2be750;
        }
    }
    ctx->pc = 0x2BE738u;
    // 0x2be738: 0x83a60044  lb          $a2, 0x44($sp)
    ctx->pc = 0x2be738u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2be73c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2be73cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2be740: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x2be740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x2be744: 0xafb300b4  sw          $s3, 0xB4($sp)
    ctx->pc = 0x2be744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 19));
    // 0x2be748: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE748u;
    {
        const bool branch_taken_0x2be748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE748u;
        // 0x2be74c: 0xafa700b8  sw          $a3, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be748) {
            ctx->pc = 0x2BE76Cu;
            goto label_2be76c;
        }
    }
    ctx->pc = 0x2BE750u;
label_2be750:
    // 0x2be750: 0x54c2000e  bnel        $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BE750u;
    {
        const bool branch_taken_0x2be750 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be750) {
            ctx->pc = 0x2BE754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE750u;
            // 0x2be754: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE78Cu;
            goto label_2be78c;
        }
    }
    ctx->pc = 0x2BE758u;
    // 0x2be758: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x2be758u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2be75c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2be75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2be760: 0xafa800b4  sw          $t0, 0xB4($sp)
    ctx->pc = 0x2be760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 8));
    // 0x2be764: 0xafb200bc  sw          $s2, 0xBC($sp)
    ctx->pc = 0x2be764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 18));
    // 0x2be768: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2be768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_2be76c:
    // 0x2be76c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE76Cu;
    {
        const bool branch_taken_0x2be76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE76Cu;
        // 0x2be770: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be76c) {
            ctx->pc = 0x2BE78Cu;
            goto label_2be78c;
        }
    }
    ctx->pc = 0x2BE774u;
label_2be774:
    // 0x2be774: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2be774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2be778: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE778u;
    {
        const bool branch_taken_0x2be778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE778u;
        // 0x2be77c: 0x28c20007  slti        $v0, $a2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be778) {
            ctx->pc = 0x2BE79Cu;
            goto label_2be79c;
        }
    }
    ctx->pc = 0x2BE780u;
    // 0x2be780: 0x54d0013d  bnel        $a2, $s0, . + 4 + (0x13D << 2)
    ctx->pc = 0x2BE780u;
    {
        const bool branch_taken_0x2be780 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 16));
        if (branch_taken_0x2be780) {
            ctx->pc = 0x2BE784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE780u;
            // 0x2be784: 0x24162724  addiu       $s6, $zero, 0x2724 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10020));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BE788u;
    // 0x2be788: 0x2412005a  addiu       $s2, $zero, 0x5A
    ctx->pc = 0x2be788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_2be78c:
    // 0x2be78c: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x2BE78Cu;
    SET_GPR_U32(ctx, 31, 0x2BE794u);
    ctx->pc = 0x2BE790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE78Cu;
    // 0x2be790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286DA8u, 0x2BE78Cu, 0x2BE794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE794u;
label_2be794:
    // 0x2be794: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BE794u;
    {
        const bool branch_taken_0x2be794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE794u;
        // 0x2be798: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be794) {
            ctx->pc = 0x2BE7D8u;
            goto label_2be7d8;
        }
    }
    ctx->pc = 0x2BE79Cu;
label_2be79c:
    // 0x2be79c: 0x54400136  bnel        $v0, $zero, . + 4 + (0x136 << 2)
    ctx->pc = 0x2BE79Cu;
    {
        const bool branch_taken_0x2be79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be79c) {
            ctx->pc = 0x2BE7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE79Cu;
            // 0x2be7a0: 0x24162724  addiu       $s6, $zero, 0x2724 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10020));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BE7A4u;
    // 0x2be7a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2be7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2be7a8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2be7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2be7ac: 0x83b2005c  lb          $s2, 0x5C($sp)
    ctx->pc = 0x2be7acu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2be7b0: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE7B0u;
    {
        const bool branch_taken_0x2be7b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7B0u;
        // 0x2be7b4: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7b0) {
            ctx->pc = 0x2BE7CCu;
            goto label_2be7cc;
        }
    }
    ctx->pc = 0x2BE7B8u;
    // 0x2be7b8: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x2be7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2be7bc: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x2be7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2be7c0: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x2be7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x2be7c4: 0xafb200bc  sw          $s2, 0xBC($sp)
    ctx->pc = 0x2be7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 18));
    // 0x2be7c8: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x2be7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
label_2be7cc:
    // 0x2be7cc: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x2BE7CCu;
    SET_GPR_U32(ctx, 31, 0x2BE7D4u);
    ctx->pc = 0x2BE7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7CCu;
    // 0x2be7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286DA8u, 0x2BE7CCu, 0x2BE7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7D4u;
label_2be7d4:
    // 0x2be7d4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2be7d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be7d8:
    // 0x2be7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be7dc: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE7DCu;
    SET_GPR_U32(ctx, 31, 0x2BE7E4u);
    ctx->pc = 0x2BE7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7DCu;
    // 0x2be7e0: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288320u, 0x2BE7DCu, 0x2BE7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7E4u;
label_2be7e4:
    // 0x2be7e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE7E4u;
    {
        const bool branch_taken_0x2be7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE7E4u;
        // 0x2be7e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7e4) {
            ctx->pc = 0x2BE810u;
            goto label_2be810;
        }
    }
    ctx->pc = 0x2BE7ECu;
    // 0x2be7ec: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE7ECu;
    SET_GPR_U32(ctx, 31, 0x2BE7F4u);
    ctx->pc = 0x2BE7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE7ECu;
    // 0x2be7f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288320u, 0x2BE7ECu, 0x2BE7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7F4u;
label_2be7f4:
    // 0x2be7f4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE7F4u;
    {
        const bool branch_taken_0x2be7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be7f4) {
            ctx->pc = 0x2BE7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE7F4u;
            // 0x2be7f8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE818u;
            goto label_2be818;
        }
    }
    ctx->pc = 0x2BE7FCu;
    // 0x2be7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be800: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE800u;
    SET_GPR_U32(ctx, 31, 0x2BE808u);
    ctx->pc = 0x2BE804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE800u;
    // 0x2be804: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288320u, 0x2BE800u, 0x2BE808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE808u;
label_2be808:
    // 0x2be808: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE808u;
    {
        const bool branch_taken_0x2be808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be808) {
            ctx->pc = 0x2BE80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE808u;
            // 0x2be80c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE818u;
            goto label_2be818;
        }
    }
    ctx->pc = 0x2BE810u;
label_2be810:
    // 0x2be810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE810u;
    {
        const bool branch_taken_0x2be810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE810u;
        // 0x2be814: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be810) {
            ctx->pc = 0x2BE820u;
            goto label_2be820;
        }
    }
    ctx->pc = 0x2BE818u;
label_2be818:
    // 0x2be818: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2be818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2be81c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2be81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_2be820:
    // 0x2be820: 0x2a82000d  slti        $v0, $s4, 0xD
    ctx->pc = 0x2be820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2be824: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2BE824u;
    {
        const bool branch_taken_0x2be824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE824u;
        // 0x2be828: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be824) {
            ctx->pc = 0x2BEBC8u;
            goto label_2bebc8;
        }
    }
    ctx->pc = 0x2BE82Cu;
    // 0x2be82c: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x2be82cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2be830: 0x3c21018  mult        $v0, $fp, $v0
    ctx->pc = 0x2be830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2be834: 0x2687ffff  addiu       $a3, $s4, -0x1
    ctx->pc = 0x2be834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2be838: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x2be838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2be83c: 0xafa700d4  sw          $a3, 0xD4($sp)
    ctx->pc = 0x2be83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 7));
    // 0x2be840: 0x251001c8  addiu       $s0, $t0, 0x1C8
    ctx->pc = 0x2be840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 456));
    // 0x2be844: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x2be844u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2be848: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2be848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2be84c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2be84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2be850: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2be850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2be854: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2be854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2be858: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2be858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2be85c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2be85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2be860: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2be860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2be864: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2be864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be868: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2be868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2be86c: 0x54600102  bnel        $v1, $zero, . + 4 + (0x102 << 2)
    ctx->pc = 0x2BE86Cu;
    {
        const bool branch_taken_0x2be86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be86c) {
            ctx->pc = 0x2BE870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE86Cu;
            // 0x2be870: 0x24162726  addiu       $s6, $zero, 0x2726 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10022));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BE874u;
    // 0x2be874: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x2be874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2be878: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x2be878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2be87c: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2BE87Cu;
    {
        const bool branch_taken_0x2be87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE87Cu;
        // 0x2be880: 0x8fa600d0  lw          $a2, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be87c) {
            ctx->pc = 0x2BEBC8u;
            goto label_2bebc8;
        }
    }
    ctx->pc = 0x2BE884u;
    // 0x2be884: 0x28c2003c  slti        $v0, $a2, 0x3C
    ctx->pc = 0x2be884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2be888: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x2BE888u;
    {
        const bool branch_taken_0x2be888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE888u;
        // 0x2be88c: 0x2a62003d  slti        $v0, $s3, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be888) {
            ctx->pc = 0x2BEBC8u;
            goto label_2bebc8;
        }
    }
    ctx->pc = 0x2BE890u;
    // 0x2be890: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x2BE890u;
    {
        const bool branch_taken_0x2be890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE890u;
        // 0x2be894: 0x8fa700b4  lw          $a3, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be890) {
            ctx->pc = 0x2BEBC8u;
            goto label_2bebc8;
        }
    }
    ctx->pc = 0x2BE898u;
    // 0x2be898: 0x28e2000d  slti        $v0, $a3, 0xD
    ctx->pc = 0x2be898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2be89c: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x2BE89Cu;
    {
        const bool branch_taken_0x2be89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE89Cu;
        // 0x2be8a0: 0x8fa800b8  lw          $t0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be89c) {
            ctx->pc = 0x2BEBC8u;
            goto label_2bebc8;
        }
    }
    ctx->pc = 0x2BE8A4u;
    // 0x2be8a4: 0x2902003c  slti        $v0, $t0, 0x3C
    ctx->pc = 0x2be8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2be8a8: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2BE8A8u;
    {
        const bool branch_taken_0x2be8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8A8u;
        // 0x2be8ac: 0x8fa300bc  lw          $v1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8a8) {
            ctx->pc = 0x2BEBC8u;
            goto label_2bebc8;
        }
    }
    ctx->pc = 0x2BE8B0u;
    // 0x2be8b0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2be8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2be8b4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BE8B4u;
    {
        const bool branch_taken_0x2be8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8B4u;
        // 0x2be8b8: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8b4) {
            ctx->pc = 0x2BE8E8u;
            goto label_2be8e8;
        }
    }
    ctx->pc = 0x2BE8BCu;
    // 0x2be8bc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE8BCu;
    {
        const bool branch_taken_0x2be8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8BCu;
        // 0x2be8c0: 0x3c03003e  lui         $v1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8bc) {
            ctx->pc = 0x2BE8E8u;
            goto label_2be8e8;
        }
    }
    ctx->pc = 0x2BE8C4u;
    // 0x2be8c4: 0x2644ffe0  addiu       $a0, $s2, -0x20
    ctx->pc = 0x2be8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
    // 0x2be8c8: 0x2463b7c8  addiu       $v1, $v1, -0x4838
    ctx->pc = 0x2be8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948808));
    // 0x2be8cc: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x2be8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2be8d0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2be8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2be8d4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2be8d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2be8d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2be8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2be8dc: 0x242200a  movz        $a0, $s2, $v0
    ctx->pc = 0x2be8dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
    // 0x2be8e0: 0x548500e5  bnel        $a0, $a1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x2BE8E0u;
    {
        const bool branch_taken_0x2be8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2be8e0) {
            ctx->pc = 0x2BE8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE8E0u;
            // 0x2be8e4: 0x24162726  addiu       $s6, $zero, 0x2726 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10022));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BE8E8u;
label_2be8e8:
    // 0x2be8e8: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x2be8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2be8ec: 0x3a62003c  xori        $v0, $s3, 0x3C
    ctx->pc = 0x2be8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)60);
    // 0x2be8f0: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x2be8f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x2be8f4: 0xc0a1b0c  jal         func_286C30
    ctx->pc = 0x2BE8F4u;
    SET_GPR_U32(ctx, 31, 0x2BE8FCu);
    ctx->pc = 0x2BE8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE8F4u;
    // 0x2be8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C30u, 0x2BE8F4u, 0x2BE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8FCu;
label_2be8fc:
    // 0x2be8fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2be8fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be900: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE900u;
    {
        const bool branch_taken_0x2be900 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE900u;
        // 0x2be904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be900) {
            ctx->pc = 0x2BE910u;
            goto label_2be910;
        }
    }
    ctx->pc = 0x2BE908u;
label_2be908:
    // 0x2be908: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2BE908u;
    {
        const bool branch_taken_0x2be908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE908u;
        // 0x2be90c: 0x24162715  addiu       $s6, $zero, 0x2715 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10005));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be908) {
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BE910u;
label_2be910:
    // 0x2be910: 0xc0a217e  jal         func_2885F8
    ctx->pc = 0x2BE910u;
    SET_GPR_U32(ctx, 31, 0x2BE918u);
    ctx->pc = 0x2BE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE910u;
    // 0x2be914: 0x240507b2  addiu       $a1, $zero, 0x7B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1970));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2885F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2885F8u, 0x2BE910u, 0x2BE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE918u;
label_2be918:
    // 0x2be918: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2be918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2be91c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE91Cu;
    {
        const bool branch_taken_0x2be91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE91Cu;
        // 0x2be920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be91c) {
            ctx->pc = 0x2BE934u;
            goto label_2be934;
        }
    }
    ctx->pc = 0x2BE924u;
    // 0x2be924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be928: 0xc0a217e  jal         func_2885F8
    ctx->pc = 0x2BE928u;
    SET_GPR_U32(ctx, 31, 0x2BE930u);
    ctx->pc = 0x2BE92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE928u;
    // 0x2be92c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2885F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2885F8u, 0x2BE928u, 0x2BE930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE930u;
label_2be930:
    // 0x2be930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be934:
    // 0x2be934: 0xc0a21dc  jal         func_288770
    ctx->pc = 0x2BE934u;
    SET_GPR_U32(ctx, 31, 0x2BE93Cu);
    ctx->pc = 0x2BE938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE934u;
    // 0x2be938: 0x2405016d  addiu       $a1, $zero, 0x16D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288770u, 0x2BE934u, 0x2BE93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE93Cu;
label_2be93c:
    // 0x2be93c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be940: 0xc0a20f2  jal         func_2883C8
    ctx->pc = 0x2BE940u;
    SET_GPR_U32(ctx, 31, 0x2BE948u);
    ctx->pc = 0x2BE944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE940u;
    // 0x2be944: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2883C8u, 0x2BE940u, 0x2BE948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE948u;
label_2be948:
    // 0x2be948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be94c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2be94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be950: 0xc0a15fa  jal         func_2857E8
    ctx->pc = 0x2BE950u;
    SET_GPR_U32(ctx, 31, 0x2BE958u);
    ctx->pc = 0x2BE954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE950u;
    // 0x2be954: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857E8u, 0x2BE950u, 0x2BE958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE958u;
label_2be958:
    // 0x2be958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be95c: 0xc0a20f2  jal         func_2883C8
    ctx->pc = 0x2BE95Cu;
    SET_GPR_U32(ctx, 31, 0x2BE964u);
    ctx->pc = 0x2BE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE95Cu;
    // 0x2be960: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2883C8u, 0x2BE95Cu, 0x2BE964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE964u;
label_2be964:
    // 0x2be964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be968: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2be968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be96c: 0xc0a16fa  jal         func_285BE8
    ctx->pc = 0x2BE96Cu;
    SET_GPR_U32(ctx, 31, 0x2BE974u);
    ctx->pc = 0x2BE970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE96Cu;
    // 0x2be970: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285BE8u, 0x2BE96Cu, 0x2BE974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE974u;
label_2be974:
    // 0x2be974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be978: 0xc0a20f2  jal         func_2883C8
    ctx->pc = 0x2BE978u;
    SET_GPR_U32(ctx, 31, 0x2BE980u);
    ctx->pc = 0x2BE97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE978u;
    // 0x2be97c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2883C8u, 0x2BE978u, 0x2BE980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE980u;
label_2be980:
    // 0x2be980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2be984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be988: 0xc0a15fa  jal         func_2857E8
    ctx->pc = 0x2BE988u;
    SET_GPR_U32(ctx, 31, 0x2BE990u);
    ctx->pc = 0x2BE98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE988u;
    // 0x2be98c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857E8u, 0x2BE988u, 0x2BE990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE990u;
label_2be990:
    // 0x2be990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be994: 0xc0a217e  jal         func_2885F8
    ctx->pc = 0x2BE994u;
    SET_GPR_U32(ctx, 31, 0x2BE99Cu);
    ctx->pc = 0x2BE998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE994u;
    // 0x2be998: 0x240501dd  addiu       $a1, $zero, 0x1DD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2885F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2885F8u, 0x2BE994u, 0x2BE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE99Cu;
label_2be99c:
    // 0x2be99c: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2be99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2be9a0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE9A0u;
    {
        const bool branch_taken_0x2be9a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9A0u;
        // 0x2be9a4: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be9a0) {
            ctx->pc = 0x2BE9C4u;
            goto label_2be9c4;
        }
    }
    ctx->pc = 0x2BE9A8u;
    // 0x2be9a8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2be9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2be9ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE9ACu;
    {
        const bool branch_taken_0x2be9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be9ac) {
            ctx->pc = 0x2BE9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE9ACu;
            // 0x2be9b0: 0x8fa500d4  lw          $a1, 0xD4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE9C8u;
            goto label_2be9c8;
        }
    }
    ctx->pc = 0x2BE9B4u;
    // 0x2be9b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be9b8: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BE9B8u;
    SET_GPR_U32(ctx, 31, 0x2BE9C0u);
    ctx->pc = 0x2BE9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9B8u;
    // 0x2be9bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2884A8u, 0x2BE9B8u, 0x2BE9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9C0u;
label_2be9c0:
    // 0x2be9c0: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x2be9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2be9c4:
    // 0x2be9c4: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x2be9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2be9c8:
    // 0x2be9c8: 0x3c31818  mult        $v1, $fp, $v1
    ctx->pc = 0x2be9c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2be9cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be9d0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2be9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2be9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be9d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2be9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2be9dc: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BE9DCu;
    SET_GPR_U32(ctx, 31, 0x2BE9E4u);
    ctx->pc = 0x2BE9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9DCu;
    // 0x2be9e0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2884A8u, 0x2BE9DCu, 0x2BE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9E4u;
label_2be9e4:
    // 0x2be9e4: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2be9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2be9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be9ec: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BE9ECu;
    SET_GPR_U32(ctx, 31, 0x2BE9F4u);
    ctx->pc = 0x2BE9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9ECu;
    // 0x2be9f0: 0x24c5ffff  addiu       $a1, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2884A8u, 0x2BE9ECu, 0x2BE9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9F4u;
label_2be9f4:
    // 0x2be9f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be9f8: 0xc0a21dc  jal         func_288770
    ctx->pc = 0x2BE9F8u;
    SET_GPR_U32(ctx, 31, 0x2BEA00u);
    ctx->pc = 0x2BE9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9F8u;
    // 0x2be9fc: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288770u, 0x2BE9F8u, 0x2BEA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA00u;
label_2bea00:
    // 0x2bea00: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x2bea00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2bea04: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BEA04u;
    SET_GPR_U32(ctx, 31, 0x2BEA0Cu);
    ctx->pc = 0x2BEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA04u;
    // 0x2bea08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2884A8u, 0x2BEA04u, 0x2BEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA0Cu;
label_2bea0c:
    // 0x2bea0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bea0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea10: 0xc0a21dc  jal         func_288770
    ctx->pc = 0x2BEA10u;
    SET_GPR_U32(ctx, 31, 0x2BEA18u);
    ctx->pc = 0x2BEA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA10u;
    // 0x2bea14: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288770u, 0x2BEA10u, 0x2BEA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA18u;
label_2bea18:
    // 0x2bea18: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2bea18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bea1c: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BEA1Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA24u);
    ctx->pc = 0x2BEA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA1Cu;
    // 0x2bea20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2884A8u, 0x2BEA1Cu, 0x2BEA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA24u;
label_2bea24:
    // 0x2bea24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea28: 0xc0a21dc  jal         func_288770
    ctx->pc = 0x2BEA28u;
    SET_GPR_U32(ctx, 31, 0x2BEA30u);
    ctx->pc = 0x2BEA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA28u;
    // 0x2bea2c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288770u, 0x2BEA28u, 0x2BEA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA30u;
label_2bea30:
    // 0x2bea30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bea30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea34: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BEA34u;
    SET_GPR_U32(ctx, 31, 0x2BEA3Cu);
    ctx->pc = 0x2BEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA34u;
    // 0x2bea38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2884A8u, 0x2BEA34u, 0x2BEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA3Cu;
label_2bea3c:
    // 0x2bea3c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2bea3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2bea40: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x2BEA40u;
    SET_GPR_U32(ctx, 31, 0x2BEA48u);
    ctx->pc = 0x2BEA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA40u;
    // 0x2bea44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2BEA40u, 0x2BEA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA48u;
label_2bea48:
    // 0x2bea48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bea48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea4c: 0xc0a1b1c  jal         func_286C70
    ctx->pc = 0x2BEA4Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA54u);
    ctx->pc = 0x2BEA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA4Cu;
    // 0x2bea50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C70u, 0x2BEA4Cu, 0x2BEA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA54u;
label_2bea54:
    // 0x2bea54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bea54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea58: 0xc0a1cae  jal         func_2872B8
    ctx->pc = 0x2BEA58u;
    SET_GPR_U32(ctx, 31, 0x2BEA60u);
    ctx->pc = 0x2BEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA58u;
    // 0x2bea5c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2872B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2872B8u, 0x2BEA58u, 0x2BEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA60u;
label_2bea60:
    // 0x2bea60: 0xa3a000a3  sb          $zero, 0xA3($sp)
    ctx->pc = 0x2bea60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 163), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bea64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bea64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea68: 0xa3a000a2  sb          $zero, 0xA2($sp)
    ctx->pc = 0x2bea68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 162), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bea6c: 0xa3a000a1  sb          $zero, 0xA1($sp)
    ctx->pc = 0x2bea6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 161), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bea70: 0xa3a000a0  sb          $zero, 0xA0($sp)
    ctx->pc = 0x2bea70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bea74: 0xa3a000a7  sb          $zero, 0xA7($sp)
    ctx->pc = 0x2bea74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 167), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bea78: 0xa3a000a6  sb          $zero, 0xA6($sp)
    ctx->pc = 0x2bea78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 166), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bea7c: 0xa3a000a5  sb          $zero, 0xA5($sp)
    ctx->pc = 0x2bea7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 165), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bea80: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x2BEA80u;
    SET_GPR_U32(ctx, 31, 0x2BEA88u);
    ctx->pc = 0x2BEA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA80u;
    // 0x2bea84: 0xa3a000a4  sb          $zero, 0xA4($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 164), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x2BEA80u, 0x2BEA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA88u;
label_2bea88:
    // 0x2bea88: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2bea88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2bea8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bea90: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2bea90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2bea94: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2bea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x2bea98: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2bea98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2bea9c: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x2bea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2beaa0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2beaa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2beaa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2beaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beaa8: 0xc0a1bdc  jal         func_286F70
    ctx->pc = 0x2BEAA8u;
    SET_GPR_U32(ctx, 31, 0x2BEAB0u);
    ctx->pc = 0x2BEAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEAA8u;
    // 0x2beaac: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286F70u, 0x2BEAA8u, 0x2BEAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAB0u;
label_2beab0:
    // 0x2beab0: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2BEAB0u;
    SET_GPR_U32(ctx, 31, 0x2BEAB8u);
    ctx->pc = 0x2BEAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEAB0u;
    // 0x2beab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2BEAB0u, 0x2BEAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAB8u;
label_2beab8:
    // 0x2beab8: 0x93a900a4  lbu         $t1, 0xA4($sp)
    ctx->pc = 0x2beab8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2beabc: 0x93a600a5  lbu         $a2, 0xA5($sp)
    ctx->pc = 0x2beabcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 165)));
    // 0x2beac0: 0x93a800a6  lbu         $t0, 0xA6($sp)
    ctx->pc = 0x2beac0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 166)));
    // 0x2beac4: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x2beac4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x2beac8: 0x93a700a0  lbu         $a3, 0xA0($sp)
    ctx->pc = 0x2beac8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2beacc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2beaccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2bead0: 0x93a400a1  lbu         $a0, 0xA1($sp)
    ctx->pc = 0x2bead0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 161)));
    // 0x2bead4: 0x84238  dsll        $t0, $t0, 8
    ctx->pc = 0x2bead4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 8);
    // 0x2bead8: 0x93a500a2  lbu         $a1, 0xA2($sp)
    ctx->pc = 0x2bead8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 162)));
    // 0x2beadc: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x2beadcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x2beae0: 0x93a300a7  lbu         $v1, 0xA7($sp)
    ctx->pc = 0x2beae0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 167)));
    // 0x2beae4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2beae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2beae8: 0x93a200a3  lbu         $v0, 0xA3($sp)
    ctx->pc = 0x2beae8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 163)));
    // 0x2beaec: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x2beaecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x2beaf0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2beaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2beaf4: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x2beaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x2beaf8: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x2beaf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2beafc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2beafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2beb00: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2beb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2beb04: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2beb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2beb08: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2beb08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2beb0c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2beb0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2beb10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2beb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2beb14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2beb14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2beb18: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x2beb18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x2beb1c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x2beb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x2beb20: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2beb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2beb24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BEB24u;
    {
        const bool branch_taken_0x2beb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB24u;
        // 0x2beb28: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb24) {
            ctx->pc = 0x2BEB48u;
            goto label_2beb48;
        }
    }
    ctx->pc = 0x2BEB2Cu;
    // 0x2beb2c: 0x41827  nor         $v1, $zero, $a0
    ctx->pc = 0x2beb2cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2beb30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2beb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2beb34: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2beb34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2beb38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEB38u;
    {
        const bool branch_taken_0x2beb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB38u;
        // 0x2beb3c: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb38) {
            ctx->pc = 0x2BEB48u;
            goto label_2beb48;
        }
    }
    ctx->pc = 0x2BEB40u;
    // 0x2beb40: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2beb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2beb44: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2beb44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2beb48:
    // 0x2beb48: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x2beb48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2beb4c: 0x3c0205f5  lui         $v0, 0x5F5
    ctx->pc = 0x2beb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1525 << 16));
    // 0x2beb50: 0x3442e100  ori         $v0, $v0, 0xE100
    ctx->pc = 0x2beb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57600);
    // 0x2beb54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2beb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb58: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x2beb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2beb5c: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2BEB5Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB64u);
    ctx->pc = 0x2BEB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB5Cu;
    // 0x2beb60: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2BEB5Cu, 0x2BEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB64u;
label_2beb64:
    // 0x2beb64: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2BEB64u;
    SET_GPR_U32(ctx, 31, 0x2BEB6Cu);
    ctx->pc = 0x2BEB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB64u;
    // 0x2beb68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2BEB64u, 0x2BEB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB6Cu;
label_2beb6c:
    // 0x2beb6c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2beb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2beb70: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2beb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2beb74: 0x240703e8  addiu       $a3, $zero, 0x3E8
    ctx->pc = 0x2beb74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2beb78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2beb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb7c: 0x3848002b  xori        $t0, $v0, 0x2B
    ctx->pc = 0x2beb7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)43);
    // 0x2beb80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2beb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb84: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2beb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2beb88: 0x400013  mtlo        $v0
    ctx->pc = 0x2beb88u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2beb8c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2beb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2beb90: 0x70433000  madd        $a2, $v0, $v1
    ctx->pc = 0x2beb90u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2beb94: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x2beb94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2beb98: 0x61023  negu        $v0, $a2
    ctx->pc = 0x2beb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2beb9c: 0x48300a  movz        $a2, $v0, $t0
    ctx->pc = 0x2beb9cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x2beba0: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x2beba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2beba4: 0xc0afbc6  jal         func_2BEF18
    ctx->pc = 0x2BEBA4u;
    SET_GPR_U32(ctx, 31, 0x2BEBACu);
    ctx->pc = 0x2BEBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBA4u;
    // 0x2beba8: 0xc0302d  daddu       $a2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF18u, 0x2BEBA4u, 0x2BEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBACu;
label_2bebac:
    // 0x2bebac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2BEBACu;
    {
        const bool branch_taken_0x2bebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBACu;
        // 0x2bebb0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bebac) {
            ctx->pc = 0x2BEC7Cu;
            goto label_2bec7c;
        }
    }
    ctx->pc = 0x2BEBB4u;
label_2bebb4:
    // 0x2bebb4: 0x56020030  bnel        $s0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2BEBB4u;
    {
        const bool branch_taken_0x2bebb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bebb4) {
            ctx->pc = 0x2BEBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEBB4u;
            // 0x2bebb8: 0x24162724  addiu       $s6, $zero, 0x2724 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10020));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BEBBCu;
    // 0x2bebbc: 0x2e620009  sltiu       $v0, $s3, 0x9
    ctx->pc = 0x2bebbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2bebc0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEBC0u;
    {
        const bool branch_taken_0x2bebc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bebc0) {
            ctx->pc = 0x2BEBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEBC0u;
            // 0x2bebc4: 0xaea00008  sw          $zero, 0x8($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEBD0u;
            goto label_2bebd0;
        }
    }
    ctx->pc = 0x2BEBC8u;
label_2bebc8:
    // 0x2bebc8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2BEBC8u;
    {
        const bool branch_taken_0x2bebc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBC8u;
        // 0x2bebcc: 0x24162726  addiu       $s6, $zero, 0x2726 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10022));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bebc8) {
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BEBD0u;
label_2bebd0:
    // 0x2bebd0: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x2bebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2bebd4: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2bebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x2bebd8: 0x2464fffe  addiu       $a0, $v1, -0x2
    ctx->pc = 0x2bebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2bebdc: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x2bebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
    // 0x2bebe0: 0x26e6000d  addiu       $a2, $s7, 0xD
    ctx->pc = 0x2bebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 13));
    // 0x2bebe4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bebe4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bebe8: 0x92402b  sltu        $t0, $a0, $s2
    ctx->pc = 0x2bebe8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2bebec: 0x9062ffff  lbu         $v0, -0x1($v1)
    ctx->pc = 0x2bebecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x2bebf0: 0x15000021  bnez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2BEBF0u;
    {
        const bool branch_taken_0x2bebf0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBF0u;
        // 0x2bebf4: 0xa2e2000c  sb          $v0, 0xC($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bebf0) {
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BEBF8u;
label_2bebf8:
    // 0x2bebf8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2bebf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2bebfc: 0x2d220004  sltiu       $v0, $t1, 0x4
    ctx->pc = 0x2bebfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2bec00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEC00u;
    {
        const bool branch_taken_0x2bec00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bec00) {
            ctx->pc = 0x2BEC20u;
            goto label_2bec20;
        }
    }
    ctx->pc = 0x2BEC08u;
    // 0x2bec08: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2bec08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bec0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2bec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2bec10: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2bec10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bec14: 0x92402b  sltu        $t0, $a0, $s2
    ctx->pc = 0x2bec14u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2bec18: 0x1100fff7  beqz        $t0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2BEC18u;
    {
        const bool branch_taken_0x2bec18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC18u;
        // 0x2bec1c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec18) {
            ctx->pc = 0x2BEBF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bebf8;
        }
    }
    ctx->pc = 0x2BEC20u;
label_2bec20:
    // 0x2bec20: 0x15000016  bnez        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BEC20u;
    {
        const bool branch_taken_0x2bec20 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC20u;
        // 0x2bec24: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec20) {
            ctx->pc = 0x2BEC7Cu;
            goto label_2bec7c;
        }
    }
    ctx->pc = 0x2BEC28u;
    // 0x2bec28: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2bec28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bec2c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bec2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec30: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2bec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2bec34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bec34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec38: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2bec38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bec3c: 0x92102b  sltu        $v0, $a0, $s2
    ctx->pc = 0x2bec3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2bec40: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BEC40u;
    {
        const bool branch_taken_0x2bec40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC40u;
        // 0x2bec44: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec40) {
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BEC48u;
label_2bec48:
    // 0x2bec48: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2bec48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2bec4c: 0x2d220004  sltiu       $v0, $t1, 0x4
    ctx->pc = 0x2bec4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2bec50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BEC50u;
    {
        const bool branch_taken_0x2bec50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC50u;
        // 0x2bec54: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec50) {
            ctx->pc = 0x2BEC7Cu;
            goto label_2bec7c;
        }
    }
    ctx->pc = 0x2BEC58u;
    // 0x2bec58: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2bec58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bec5c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2bec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2bec60: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2bec60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bec64: 0x92182b  sltu        $v1, $a0, $s2
    ctx->pc = 0x2bec64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2bec68: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2BEC68u;
    {
        const bool branch_taken_0x2bec68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC68u;
        // 0x2bec6c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec68) {
            ctx->pc = 0x2BEC48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bec48;
        }
    }
    ctx->pc = 0x2BEC70u;
    // 0x2bec70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BEC70u;
    {
        const bool branch_taken_0x2bec70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC70u;
        // 0x2bec74: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec70) {
            ctx->pc = 0x2BEC7Cu;
            goto label_2bec7c;
        }
    }
    ctx->pc = 0x2BEC78u;
label_2bec78:
    // 0x2bec78: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2bec78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bec7c:
    // 0x2bec7c: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x2bec7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bec80: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x2bec80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2bec84: 0xdfb70150  ld          $s7, 0x150($sp)
    ctx->pc = 0x2bec84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bec88: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x2bec88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2bec8c: 0xdfb50130  ld          $s5, 0x130($sp)
    ctx->pc = 0x2bec8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bec90: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2bec90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bec94: 0xdfb30110  ld          $s3, 0x110($sp)
    ctx->pc = 0x2bec94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bec98: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x2bec98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bec9c: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x2bec9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2beca0: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x2beca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2beca4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BECA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECA4u;
        // 0x2beca8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BECA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BECACu;
    // 0x2becac: 0x0  nop
    ctx->pc = 0x2becacu;
    // NOP
    if (ctx->pc == 0x2becacu) { ctx->pc = 0x2becb0u; }
}
