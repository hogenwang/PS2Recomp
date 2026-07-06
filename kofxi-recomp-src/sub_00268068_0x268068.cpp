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

// Function: sub_00268068
// Address: 0x268068 - 0x268180
void sub_00268068_0x268068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268068_0x268068");
#endif

    switch (ctx->pc) {
        case 0x2680a4u: goto label_2680a4;
        case 0x2680c4u: goto label_2680c4;
        case 0x2680d4u: goto label_2680d4;
        case 0x268144u: goto label_268144;
        case 0x268158u: goto label_268158;
        default: break;
    }

    ctx->pc = 0x268068u;

    // 0x268068: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x268068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26806c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x26806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x268070: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x268070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x268074: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x268074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268078: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x268078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x26807c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26807cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268080: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x268080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x268084: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x268084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268088: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x268088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x26808c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x26808cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268090: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x268090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x268094: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x268094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268098: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x268098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26809c: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x26809Cu;
    SET_GPR_U32(ctx, 31, 0x2680A4u);
    ctx->pc = 0x2680A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26809Cu;
    // 0x2680a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x26809Cu, 0x2680A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680A4u;
label_2680a4:
    // 0x2680a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2680a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680a8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2680A8u;
    {
        const bool branch_taken_0x2680a8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2680ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680A8u;
        // 0x2680ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680a8) {
            ctx->pc = 0x2680B8u;
            goto label_2680b8;
        }
    }
    ctx->pc = 0x2680B0u;
    // 0x2680b0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2680B0u;
    {
        const bool branch_taken_0x2680b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2680B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680B0u;
        // 0x2680b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680b0) {
            ctx->pc = 0x26815Cu;
            goto label_26815c;
        }
    }
    ctx->pc = 0x2680B8u;
label_2680b8:
    // 0x2680b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2680b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680bc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2680BCu;
    SET_GPR_U32(ctx, 31, 0x2680C4u);
    ctx->pc = 0x2680C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2680BCu;
    // 0x2680c0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2680BCu, 0x2680C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680C4u;
label_2680c4:
    // 0x2680c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2680c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2680c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680cc: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2680CCu;
    SET_GPR_U32(ctx, 31, 0x2680D4u);
    ctx->pc = 0x2680D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2680CCu;
    // 0x2680d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2680CCu, 0x2680D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680D4u;
label_2680d4:
    // 0x2680d4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2680D4u;
    {
        const bool branch_taken_0x2680d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2680D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680D4u;
        // 0x2680d8: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680d4) {
            ctx->pc = 0x2680F4u;
            goto label_2680f4;
        }
    }
    ctx->pc = 0x2680DCu;
    // 0x2680dc: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x2680dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2680e0: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x2680e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2680e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2680e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2680e8: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x2680e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x2680ec: 0xa3a40011  sb          $a0, 0x11($sp)
    ctx->pc = 0x2680ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x2680f0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2680f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2680f4:
    // 0x2680f4: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2680F4u;
    {
        const bool branch_taken_0x2680f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2680F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680F4u;
        // 0x2680f8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680f4) {
            ctx->pc = 0x26810Cu;
            goto label_26810c;
        }
    }
    ctx->pc = 0x2680FCu;
    // 0x2680fc: 0x8a630003  lwl         $v1, 0x3($s3)
    ctx->pc = 0x2680fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x268100: 0x9a630000  lwr         $v1, 0x0($s3)
    ctx->pc = 0x268100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x268104: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x268104u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x268108: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x268108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_26810c:
    // 0x26810c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x26810Cu;
    {
        const bool branch_taken_0x26810c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x268110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26810Cu;
        // 0x268110: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26810c) {
            ctx->pc = 0x26812Cu;
            goto label_26812c;
        }
    }
    ctx->pc = 0x268114u;
    // 0x268114: 0x8a820003  lwl         $v0, 0x3($s4)
    ctx->pc = 0x268114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x268118: 0x9a820000  lwr         $v0, 0x0($s4)
    ctx->pc = 0x268118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x26811c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268120: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x268120u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x268124: 0xa3a40021  sb          $a0, 0x21($sp)
    ctx->pc = 0x268124u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x268128: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x268128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_26812c:
    // 0x26812c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26812cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268130: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x268130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x268134: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x268134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x268138: 0x34a5691a  ori         $a1, $a1, 0x691A
    ctx->pc = 0x268138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26906);
    // 0x26813c: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26813Cu;
    SET_GPR_U32(ctx, 31, 0x268144u);
    ctx->pc = 0x268140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26813Cu;
    // 0x268140: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x26813Cu, 0x268144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268144u;
label_268144:
    // 0x268144: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x268144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x268148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26814c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x26814cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x268150: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x268150u;
    SET_GPR_U32(ctx, 31, 0x268158u);
    ctx->pc = 0x268154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268150u;
    // 0x268154: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x268150u, 0x268158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268158u;
label_268158:
    // 0x268158: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x268158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26815c:
    // 0x26815c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26815cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x268160: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x268160u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x268164: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x268164u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x268168: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x268168u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26816c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x26816cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268170: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x268170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268174: 0x3e00008  jr          $ra
    ctx->pc = 0x268174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268174u;
        // 0x268178: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26817Cu;
    // 0x26817c: 0x0  nop
    ctx->pc = 0x26817cu;
    // NOP
}
