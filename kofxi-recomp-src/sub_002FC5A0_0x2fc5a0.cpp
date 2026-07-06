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

// Function: sub_002FC5A0
// Address: 0x2fc5a0 - 0x2fc700
void sub_002FC5A0_0x2fc5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC5A0_0x2fc5a0");
#endif

    switch (ctx->pc) {
        case 0x2fc5b0u: goto label_2fc5b0;
        case 0x2fc5e0u: goto label_2fc5e0;
        case 0x2fc600u: goto label_2fc600;
        case 0x2fc660u: goto label_2fc660;
        case 0x2fc680u: goto label_2fc680;
        case 0x2fc6b0u: goto label_2fc6b0;
        case 0x2fc6d0u: goto label_2fc6d0;
        case 0x2fc6f0u: goto label_2fc6f0;
        default: break;
    }

    ctx->pc = 0x2fc5a0u;

    // 0x2fc5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc5a8: 0xc099226  jal         func_264898
    ctx->pc = 0x2FC5A8u;
    SET_GPR_U32(ctx, 31, 0x2FC5B0u);
    ctx->pc = 0x264898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264898u, 0x2FC5A8u, 0x2FC5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC5B0u;
label_2fc5b0:
    // 0x2fc5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC5B4u;
        // 0x2fc5b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC5BCu;
    // 0x2fc5bc: 0x0  nop
    ctx->pc = 0x2fc5bcu;
    // NOP
    // 0x2fc5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc5c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2fc5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2fc5c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fc5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fc5cc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fc5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fc5d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc5d4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2fc5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc5d8: 0xc09900a  jal         func_264028
    ctx->pc = 0x2FC5D8u;
    SET_GPR_U32(ctx, 31, 0x2FC5E0u);
    ctx->pc = 0x2FC5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC5D8u;
    // 0x2fc5dc: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264028u, 0x2FC5D8u, 0x2FC5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC5E0u;
label_2fc5e0:
    // 0x2fc5e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC5E4u;
        // 0x2fc5e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC5ECu;
    // 0x2fc5ec: 0x0  nop
    ctx->pc = 0x2fc5ecu;
    // NOP
    // 0x2fc5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fc5f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fc5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fc5f8: 0xc09901e  jal         func_264078
    ctx->pc = 0x2FC5F8u;
    SET_GPR_U32(ctx, 31, 0x2FC600u);
    ctx->pc = 0x264078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264078u, 0x2FC5F8u, 0x2FC600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC600u;
label_2fc600:
    // 0x2fc600: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fc600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc604: 0x22e3a  dsrl        $a1, $v0, 24
    ctx->pc = 0x2fc604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 24);
    // 0x2fc608: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2fc608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x2fc60c: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x2fc60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x2fc610: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x2fc610u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fc614: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x2fc614u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fc618: 0xa3a40012  sb          $a0, 0x12($sp)
    ctx->pc = 0x2fc618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x2fc61c: 0xa3a50013  sb          $a1, 0x13($sp)
    ctx->pc = 0x2fc61cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x2fc620: 0x8ba20013  lwl         $v0, 0x13($sp)
    ctx->pc = 0x2fc620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2fc624: 0x9ba20010  lwr         $v0, 0x10($sp)
    ctx->pc = 0x2fc624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2fc628: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x2fc628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2fc62c: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x2fc62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2fc630: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fc630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc634: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC634u;
        // 0x2fc638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC63Cu;
    // 0x2fc63c: 0x0  nop
    ctx->pc = 0x2fc63cu;
    // NOP
    // 0x2fc640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc644: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2fc644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2fc648: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fc648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fc64c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fc64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fc650: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc654: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2fc654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc658: 0xc099058  jal         func_264160
    ctx->pc = 0x2FC658u;
    SET_GPR_U32(ctx, 31, 0x2FC660u);
    ctx->pc = 0x2FC65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC658u;
    // 0x2fc65c: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264160u, 0x2FC658u, 0x2FC660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC660u;
label_2fc660:
    // 0x2fc660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc664: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC664u;
        // 0x2fc668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC66Cu;
    // 0x2fc66c: 0x0  nop
    ctx->pc = 0x2fc66cu;
    // NOP
    // 0x2fc670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc678: 0xc09906a  jal         func_2641A8
    ctx->pc = 0x2FC678u;
    SET_GPR_U32(ctx, 31, 0x2FC680u);
    ctx->pc = 0x2641A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2641A8u, 0x2FC678u, 0x2FC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC680u;
label_2fc680:
    // 0x2fc680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc684: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC684u;
        // 0x2fc688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC68Cu;
    // 0x2fc68c: 0x0  nop
    ctx->pc = 0x2fc68cu;
    // NOP
    // 0x2fc690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc694: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2fc694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2fc698: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fc698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fc69c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fc69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fc6a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc6a4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2fc6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc6a8: 0xc0990d8  jal         func_264360
    ctx->pc = 0x2FC6A8u;
    SET_GPR_U32(ctx, 31, 0x2FC6B0u);
    ctx->pc = 0x2FC6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC6A8u;
    // 0x2fc6ac: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264360u, 0x2FC6A8u, 0x2FC6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC6B0u;
label_2fc6b0:
    // 0x2fc6b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6B4u;
        // 0x2fc6b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC6BCu;
    // 0x2fc6bc: 0x0  nop
    ctx->pc = 0x2fc6bcu;
    // NOP
    // 0x2fc6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc6c8: 0xc0990f0  jal         func_2643C0
    ctx->pc = 0x2FC6C8u;
    SET_GPR_U32(ctx, 31, 0x2FC6D0u);
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x2FC6C8u, 0x2FC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC6D0u;
label_2fc6d0:
    // 0x2fc6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6D4u;
        // 0x2fc6d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC6DCu;
    // 0x2fc6dc: 0x0  nop
    ctx->pc = 0x2fc6dcu;
    // NOP
    // 0x2fc6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc6e8: 0xc08a254  jal         func_228950
    ctx->pc = 0x2FC6E8u;
    SET_GPR_U32(ctx, 31, 0x2FC6F0u);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x2FC6E8u, 0x2FC6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC6F0u;
label_2fc6f0:
    // 0x2fc6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6F4u;
        // 0x2fc6f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC6FCu;
    // 0x2fc6fc: 0x0  nop
    ctx->pc = 0x2fc6fcu;
    // NOP
    if (ctx->pc == 0x2fc6fcu) { ctx->pc = 0x2fc700u; }
}
