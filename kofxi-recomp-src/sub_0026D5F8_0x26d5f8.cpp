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

// Function: sub_0026D5F8
// Address: 0x26d5f8 - 0x26d710
void sub_0026D5F8_0x26d5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D5F8_0x26d5f8");
#endif

    switch (ctx->pc) {
        case 0x26d654u: goto label_26d654;
        case 0x26d680u: goto label_26d680;
        case 0x26d6a0u: goto label_26d6a0;
        case 0x26d6b0u: goto label_26d6b0;
        case 0x26d6c8u: goto label_26d6c8;
        case 0x26d6e8u: goto label_26d6e8;
        case 0x26d6f8u: goto label_26d6f8;
        default: break;
    }

    ctx->pc = 0x26d5f8u;

    // 0x26d5f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26d5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26d5fc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x26d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26d600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26d600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26d608: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x26d608u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26d60c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26D60Cu;
    {
        const bool branch_taken_0x26d60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D60Cu;
        // 0x26d610: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d60c) {
            ctx->pc = 0x26D670u;
            goto label_26d670;
        }
    }
    ctx->pc = 0x26D614u;
    // 0x26d614: 0x2862001d  slti        $v0, $v1, 0x1D
    ctx->pc = 0x26d614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x26d618: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D618u;
    {
        const bool branch_taken_0x26d618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D618u;
        // 0x26d61c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d618) {
            ctx->pc = 0x26D630u;
            goto label_26d630;
        }
    }
    ctx->pc = 0x26D620u;
    // 0x26d620: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26D620u;
    {
        const bool branch_taken_0x26d620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D620u;
        // 0x26d624: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d620) {
            ctx->pc = 0x26D644u;
            goto label_26d644;
        }
    }
    ctx->pc = 0x26D628u;
    // 0x26d628: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x26D628u;
    {
        const bool branch_taken_0x26d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D628u;
        // 0x26d62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d628) {
            ctx->pc = 0x26D700u;
            goto label_26d700;
        }
    }
    ctx->pc = 0x26D630u;
label_26d630:
    // 0x26d630: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x26d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x26d634: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x26D634u;
    {
        const bool branch_taken_0x26d634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D634u;
        // 0x26d638: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d634) {
            ctx->pc = 0x26D6B8u;
            goto label_26d6b8;
        }
    }
    ctx->pc = 0x26D63Cu;
    // 0x26d63c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x26D63Cu;
    {
        const bool branch_taken_0x26d63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D63Cu;
        // 0x26d640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d63c) {
            ctx->pc = 0x26D700u;
            goto label_26d700;
        }
    }
    ctx->pc = 0x26D644u;
label_26d644:
    // 0x26d644: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x26d644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x26d648: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26d648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d64c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26D64Cu;
    SET_GPR_U32(ctx, 31, 0x26D654u);
    ctx->pc = 0x26D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D64Cu;
    // 0x26d650: 0x260403ec  addiu       $a0, $s0, 0x3EC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1004));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26D64Cu, 0x26D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D654u;
label_26d654:
    // 0x26d654: 0x8a0403ef  lwl         $a0, 0x3EF($s0)
    ctx->pc = 0x26d654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1007); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d658: 0x9a0403ec  lwr         $a0, 0x3EC($s0)
    ctx->pc = 0x26d658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1004); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d65c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26d660: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x26d660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x26d664: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26d664u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26d668: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26D668u;
    {
        const bool branch_taken_0x26d668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D668u;
        // 0x26d66c: 0x261093c8  addiu       $s0, $s0, -0x6C38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d668) {
            ctx->pc = 0x26D698u;
            goto label_26d698;
        }
    }
    ctx->pc = 0x26D670u;
label_26d670:
    // 0x26d670: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x26d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x26d674: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26d674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d678: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26D678u;
    SET_GPR_U32(ctx, 31, 0x26D680u);
    ctx->pc = 0x26D67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D678u;
    // 0x26d67c: 0x260403f0  addiu       $a0, $s0, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26D678u, 0x26D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D680u;
label_26d680:
    // 0x26d680: 0x8a0403f3  lwl         $a0, 0x3F3($s0)
    ctx->pc = 0x26d680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1011); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d684: 0x9a0403f0  lwr         $a0, 0x3F0($s0)
    ctx->pc = 0x26d684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1008); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d688: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26d688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26d68c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x26d68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x26d690: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26d690u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26d694: 0x261093e8  addiu       $s0, $s0, -0x6C18
    ctx->pc = 0x26d694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939624));
label_26d698:
    // 0x26d698: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D698u;
    SET_GPR_U32(ctx, 31, 0x26D6A0u);
    ctx->pc = 0x26D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D698u;
    // 0x26d69c: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264360u, 0x26D698u, 0x26D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6A0u;
label_26d6a0:
    // 0x26d6a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6a8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D6A8u;
    SET_GPR_U32(ctx, 31, 0x26D6B0u);
    ctx->pc = 0x26D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6A8u;
    // 0x26d6ac: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26D6A8u, 0x26D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6B0u;
label_26d6b0:
    // 0x26d6b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26D6B0u;
    {
        const bool branch_taken_0x26d6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6B0u;
        // 0x26d6b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6b0) {
            ctx->pc = 0x26D6FCu;
            goto label_26d6fc;
        }
    }
    ctx->pc = 0x26D6B8u;
label_26d6b8:
    // 0x26d6b8: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x26d6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x26d6bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26d6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d6c0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26D6C0u;
    SET_GPR_U32(ctx, 31, 0x26D6C8u);
    ctx->pc = 0x26D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6C0u;
    // 0x26d6c4: 0x260403e8  addiu       $a0, $s0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26D6C0u, 0x26D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6C8u;
label_26d6c8:
    // 0x26d6c8: 0x8a0403eb  lwl         $a0, 0x3EB($s0)
    ctx->pc = 0x26d6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1003); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26d6cc: 0x9a0403e8  lwr         $a0, 0x3E8($s0)
    ctx->pc = 0x26d6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1000); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26d6d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26d6d4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x26d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x26d6d8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26d6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26d6dc: 0x26109410  addiu       $s0, $s0, -0x6BF0
    ctx->pc = 0x26d6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939664));
    // 0x26d6e0: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26D6E0u;
    SET_GPR_U32(ctx, 31, 0x26D6E8u);
    ctx->pc = 0x26D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6E0u;
    // 0x26d6e4: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264360u, 0x26D6E0u, 0x26D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6E8u;
label_26d6e8:
    // 0x26d6e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6f0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D6F0u;
    SET_GPR_U32(ctx, 31, 0x26D6F8u);
    ctx->pc = 0x26D6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6F0u;
    // 0x26d6f4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26D6F0u, 0x26D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6F8u;
label_26d6f8:
    // 0x26d6f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26d6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26d6fc:
    // 0x26d6fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d700:
    // 0x26d700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26d700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d704: 0x3e00008  jr          $ra
    ctx->pc = 0x26D704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D704u;
        // 0x26d708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D70Cu;
    // 0x26d70c: 0x0  nop
    ctx->pc = 0x26d70cu;
    // NOP
    if (ctx->pc == 0x26d70cu) { ctx->pc = 0x26d710u; }
}
