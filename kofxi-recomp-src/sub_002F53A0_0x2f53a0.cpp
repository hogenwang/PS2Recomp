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

// Function: sub_002F53A0
// Address: 0x2f53a0 - 0x2f5570
void sub_002F53A0_0x2f53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F53A0_0x2f53a0");
#endif

    switch (ctx->pc) {
        case 0x2f53c0u: goto label_2f53c0;
        case 0x2f53f4u: goto label_2f53f4;
        case 0x2f5408u: goto label_2f5408;
        case 0x2f5430u: goto label_2f5430;
        case 0x2f54bcu: goto label_2f54bc;
        case 0x2f54e4u: goto label_2f54e4;
        case 0x2f54f8u: goto label_2f54f8;
        case 0x2f5508u: goto label_2f5508;
        case 0x2f5518u: goto label_2f5518;
        case 0x2f5528u: goto label_2f5528;
        case 0x2f5534u: goto label_2f5534;
        case 0x2f553cu: goto label_2f553c;
        case 0x2f554cu: goto label_2f554c;
        default: break;
    }

    ctx->pc = 0x2f53a0u;

label_2f53a0:
    // 0x2f53a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f53a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f53a4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F53A4u;
    {
        const bool branch_taken_0x2f53a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53A4u;
        // 0x2f53a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53a4) {
            ctx->pc = 0x2F53B4u;
            goto label_2f53b4;
        }
    }
    ctx->pc = 0x2F53ACu;
    // 0x2f53ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F53ACu;
    {
        const bool branch_taken_0x2f53ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53ACu;
        // 0x2f53b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53ac) {
            ctx->pc = 0x2F53C4u;
            goto label_2f53c4;
        }
    }
    ctx->pc = 0x2F53B4u;
label_2f53b4:
    // 0x2f53b4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f53b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f53b8: 0xc0bd9fe  jal         func_2F67F8
    ctx->pc = 0x2F53B8u;
    SET_GPR_U32(ctx, 31, 0x2F53C0u);
    ctx->pc = 0x2F53BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F53B8u;
    // 0x2f53bc: 0x24a51ea8  addiu       $a1, $a1, 0x1EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F67F8u, 0x2F53B8u, 0x2F53C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F53C0u;
label_2f53c0:
    // 0x2f53c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f53c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f53c4:
    // 0x2f53c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f53c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f53c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F53C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53C8u;
        // 0x2f53cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F53C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F53D0u;
    // 0x2f53d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f53d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f53d4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f53d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f53d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f53d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f53dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f53dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f53e0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2f53e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2f53e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f53e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f53e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f53e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f53ec: 0xc0bd4e8  jal         func_2F53A0
    ctx->pc = 0x2F53ECu;
    SET_GPR_U32(ctx, 31, 0x2F53F4u);
    ctx->pc = 0x2F53F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F53ECu;
    // 0x2f53f0: 0xffb20040  sd          $s2, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F53A0u;
    goto label_2f53a0;
    ctx->pc = 0x2F53F4u;
label_2f53f4:
    // 0x2f53f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f53f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f53f8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F53F8u;
    {
        const bool branch_taken_0x2f53f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f53f8) {
            ctx->pc = 0x2F5410u;
            goto label_2f5410;
        }
    }
    ctx->pc = 0x2F5400u;
    // 0x2f5400: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F5400u;
    SET_GPR_U32(ctx, 31, 0x2F5408u);
    ctx->pc = 0x2F5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5400u;
    // 0x2f5404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6510u, 0x2F5400u, 0x2F5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5408u;
label_2f5408:
    // 0x2f5408: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2F5408u;
    {
        const bool branch_taken_0x2f5408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5408u;
        // 0x2f540c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5408) {
            ctx->pc = 0x2F5554u;
            goto label_2f5554;
        }
    }
    ctx->pc = 0x2F5410u;
label_2f5410:
    // 0x2f5410: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2F5410u;
    {
        const bool branch_taken_0x2f5410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5410u;
        // 0x2f5414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5410) {
            ctx->pc = 0x2F5550u;
            goto label_2f5550;
        }
    }
    ctx->pc = 0x2F5418u;
    // 0x2f5418: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f5418u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f541c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2F541Cu;
    {
        const bool branch_taken_0x2f541c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F541Cu;
        // 0x2f5420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f541c) {
            ctx->pc = 0x2F5550u;
            goto label_2f5550;
        }
    }
    ctx->pc = 0x2F5424u;
    // 0x2f5424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5428: 0xc0bd358  jal         func_2F4D60
    ctx->pc = 0x2F5428u;
    SET_GPR_U32(ctx, 31, 0x2F5430u);
    ctx->pc = 0x2F542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5428u;
    // 0x2f542c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D60u, 0x2F5428u, 0x2F5430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5430u;
label_2f5430:
    // 0x2f5430: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f5430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5434: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x2F5434u;
    {
        const bool branch_taken_0x2f5434 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5434u;
        // 0x2f5438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5434) {
            ctx->pc = 0x2F5550u;
            goto label_2f5550;
        }
    }
    ctx->pc = 0x2F543Cu;
    // 0x2f543c: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x2f543cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f5440: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x2f5440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f5444: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x2f5444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f5448: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x2f5448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f544c: 0x6a640017  ldl         $a0, 0x17($s3)
    ctx->pc = 0x2f544cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f5450: 0x6e640010  ldr         $a0, 0x10($s3)
    ctx->pc = 0x2f5450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f5454: 0x8a65001b  lwl         $a1, 0x1B($s3)
    ctx->pc = 0x2f5454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x2f5458: 0x9a650018  lwr         $a1, 0x18($s3)
    ctx->pc = 0x2f5458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x2f545c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2f545cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5460: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2f5460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5464: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2f5464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5468: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2f5468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f546c: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x2f546cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5470: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x2f5470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5474: 0xaba5001b  swl         $a1, 0x1B($sp)
    ctx->pc = 0x2f5474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2f5478: 0xbba50018  swr         $a1, 0x18($sp)
    ctx->pc = 0x2f5478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2f547c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f5480: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5480u;
    {
        const bool branch_taken_0x2f5480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5480u;
        // 0x2f5484: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5480) {
            ctx->pc = 0x2F5494u;
            goto label_2f5494;
        }
    }
    ctx->pc = 0x2F5488u;
    // 0x2f5488: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f5488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f548c: 0x24421ea8  addiu       $v0, $v0, 0x1EA8
    ctx->pc = 0x2f548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7848));
    // 0x2f5490: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2f5490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2f5494:
    // 0x2f5494: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2f5494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2f5498: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F5498u;
    {
        const bool branch_taken_0x2f5498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5498u;
        // 0x2f549c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5498) {
            ctx->pc = 0x2F5544u;
            goto label_2f5544;
        }
    }
    ctx->pc = 0x2F54A0u;
    // 0x2f54a0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F54A0u;
    {
        const bool branch_taken_0x2f54a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54A0u;
        // 0x2f54a4: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54a0) {
            ctx->pc = 0x2F54C4u;
            goto label_2f54c4;
        }
    }
    ctx->pc = 0x2F54A8u;
    // 0x2f54a8: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2f54a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f54ac: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F54ACu;
    {
        const bool branch_taken_0x2f54ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f54ac) {
            ctx->pc = 0x2F54B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F54ACu;
            // 0x2f54b0: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F54C8u;
            goto label_2f54c8;
        }
    }
    ctx->pc = 0x2F54B4u;
    // 0x2f54b4: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F54B4u;
    SET_GPR_U32(ctx, 31, 0x2F54BCu);
    ctx->pc = 0x2F54B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54B4u;
    // 0x2f54b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6510u, 0x2F54B4u, 0x2F54BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54BCu;
label_2f54bc:
    // 0x2f54bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F54BCu;
    {
        const bool branch_taken_0x2f54bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54BCu;
        // 0x2f54c0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54bc) {
            ctx->pc = 0x2F5520u;
            goto label_2f5520;
        }
    }
    ctx->pc = 0x2F54C4u;
label_2f54c4:
    // 0x2f54c4: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2f54c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2f54c8:
    // 0x2f54c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F54C8u;
    {
        const bool branch_taken_0x2f54c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54C8u;
        // 0x2f54cc: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54c8) {
            ctx->pc = 0x2F54DCu;
            goto label_2f54dc;
        }
    }
    ctx->pc = 0x2F54D0u;
    // 0x2f54d0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2f54d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f54d4: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F54D4u;
    {
        const bool branch_taken_0x2f54d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f54d4) {
            ctx->pc = 0x2F5544u;
            goto label_2f5544;
        }
    }
    ctx->pc = 0x2F54DCu;
label_2f54dc:
    // 0x2f54dc: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F54DCu;
    SET_GPR_U32(ctx, 31, 0x2F54E4u);
    ctx->pc = 0x2F6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6510u, 0x2F54DCu, 0x2F54E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54E4u;
label_2f54e4:
    // 0x2f54e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f54e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f54e8: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F54E8u;
    {
        const bool branch_taken_0x2f54e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54E8u;
        // 0x2f54ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54e8) {
            ctx->pc = 0x2F5544u;
            goto label_2f5544;
        }
    }
    ctx->pc = 0x2F54F0u;
    // 0x2f54f0: 0xc04a9d6  jal         func_12A758
    ctx->pc = 0x2F54F0u;
    SET_GPR_U32(ctx, 31, 0x2F54F8u);
    ctx->pc = 0x2F54F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54F0u;
    // 0x2f54f4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A758u, 0x2F54F0u, 0x2F54F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54F8u;
label_2f54f8:
    // 0x2f54f8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2f54f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f54fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f54fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5500: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F5500u;
    SET_GPR_U32(ctx, 31, 0x2F5508u);
    ctx->pc = 0x2F5504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5500u;
    // 0x2f5504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F5500u, 0x2F5508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5508u;
label_2f5508:
    // 0x2f5508: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5508u;
    {
        const bool branch_taken_0x2f5508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5508u;
        // 0x2f550c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5508) {
            ctx->pc = 0x2F5520u;
            goto label_2f5520;
        }
    }
    ctx->pc = 0x2F5510u;
    // 0x2f5510: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5510u;
    SET_GPR_U32(ctx, 31, 0x2F5518u);
    ctx->pc = 0x2F5514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5510u;
    // 0x2f5514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F5510u, 0x2F5518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5518u;
label_2f5518:
    // 0x2f5518: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F5518u;
    {
        const bool branch_taken_0x2f5518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5518) {
            ctx->pc = 0x2F5544u;
            goto label_2f5544;
        }
    }
    ctx->pc = 0x2F5520u;
label_2f5520:
    // 0x2f5520: 0xc0bd476  jal         func_2F51D8
    ctx->pc = 0x2F5520u;
    SET_GPR_U32(ctx, 31, 0x2F5528u);
    ctx->pc = 0x2F5524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5520u;
    // 0x2f5524: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D8u, 0x2F5520u, 0x2F5528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5528u;
label_2f5528:
    // 0x2f5528: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f552c: 0xc0bd44c  jal         func_2F5130
    ctx->pc = 0x2F552Cu;
    SET_GPR_U32(ctx, 31, 0x2F5534u);
    ctx->pc = 0x2F5530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F552Cu;
    // 0x2f5530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5130u, 0x2F552Cu, 0x2F5534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5534u;
label_2f5534:
    // 0x2f5534: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5534u;
    SET_GPR_U32(ctx, 31, 0x2F553Cu);
    ctx->pc = 0x2F5538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5534u;
    // 0x2f5538: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F5534u, 0x2F553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F553Cu;
label_2f553c:
    // 0x2f553c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F553Cu;
    {
        const bool branch_taken_0x2f553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F553Cu;
        // 0x2f5540: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f553c) {
            ctx->pc = 0x2F5550u;
            goto label_2f5550;
        }
    }
    ctx->pc = 0x2F5544u;
label_2f5544:
    // 0x2f5544: 0xc0bd44c  jal         func_2F5130
    ctx->pc = 0x2F5544u;
    SET_GPR_U32(ctx, 31, 0x2F554Cu);
    ctx->pc = 0x2F5548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5544u;
    // 0x2f5548: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5130u, 0x2F5544u, 0x2F554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F554Cu;
label_2f554c:
    // 0x2f554c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f554cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5550:
    // 0x2f5550: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f5550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f5554:
    // 0x2f5554: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2f5554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f5558: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f5558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f555c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2f555cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5560: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f5560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5564: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5564u;
        // 0x2f5568: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F556Cu;
    // 0x2f556c: 0x0  nop
    ctx->pc = 0x2f556cu;
    // NOP
    if (ctx->pc == 0x2f556cu) { ctx->pc = 0x2f5570u; }
}
