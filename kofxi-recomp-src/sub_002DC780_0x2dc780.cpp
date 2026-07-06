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

// Function: sub_002DC780
// Address: 0x2dc780 - 0x2dcab0
void sub_002DC780_0x2dc780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC780_0x2dc780");
#endif

    switch (ctx->pc) {
        case 0x2dc790u: goto label_2dc790;
        case 0x2dc7d8u: goto label_2dc7d8;
        case 0x2dc7dcu: goto label_2dc7dc;
        case 0x2dc7ecu: goto label_2dc7ec;
        case 0x2dc7f0u: goto label_2dc7f0;
        case 0x2dc828u: goto label_2dc828;
        case 0x2dc82cu: goto label_2dc82c;
        case 0x2dc838u: goto label_2dc838;
        case 0x2dc83cu: goto label_2dc83c;
        case 0x2dc84cu: goto label_2dc84c;
        case 0x2dc850u: goto label_2dc850;
        case 0x2dc854u: goto label_2dc854;
        case 0x2dc868u: goto label_2dc868;
        case 0x2dc86cu: goto label_2dc86c;
        case 0x2dc878u: goto label_2dc878;
        case 0x2dc87cu: goto label_2dc87c;
        case 0x2dc880u: goto label_2dc880;
        case 0x2dc884u: goto label_2dc884;
        case 0x2dc888u: goto label_2dc888;
        case 0x2dc88cu: goto label_2dc88c;
        case 0x2dc890u: goto label_2dc890;
        case 0x2dc894u: goto label_2dc894;
        case 0x2dc898u: goto label_2dc898;
        case 0x2dc8a4u: goto label_2dc8a4;
        case 0x2dc8a8u: goto label_2dc8a8;
        case 0x2dc8c4u: goto label_2dc8c4;
        case 0x2dc918u: goto label_2dc918;
        case 0x2dc960u: goto label_2dc960;
        case 0x2dc964u: goto label_2dc964;
        case 0x2dc970u: goto label_2dc970;
        case 0x2dc99cu: goto label_2dc99c;
        case 0x2dc9c4u: goto label_2dc9c4;
        case 0x2dc9e4u: goto label_2dc9e4;
        case 0x2dc9e8u: goto label_2dc9e8;
        case 0x2dc9fcu: goto label_2dc9fc;
        case 0x2dca00u: goto label_2dca00;
        case 0x2dca08u: goto label_2dca08;
        case 0x2dca0cu: goto label_2dca0c;
        case 0x2dca10u: goto label_2dca10;
        case 0x2dca14u: goto label_2dca14;
        case 0x2dca18u: goto label_2dca18;
        case 0x2dca40u: goto label_2dca40;
        case 0x2dca50u: goto label_2dca50;
        case 0x2dca54u: goto label_2dca54;
        case 0x2dca60u: goto label_2dca60;
        case 0x2dca68u: goto label_2dca68;
        case 0x2dca78u: goto label_2dca78;
        case 0x2dca7cu: goto label_2dca7c;
        case 0x2dca84u: goto label_2dca84;
        case 0x2dca88u: goto label_2dca88;
        case 0x2dcaa8u: goto label_2dcaa8;
        case 0x2dcaacu: goto label_2dcaac;
        default: break;
    }

    ctx->pc = 0x2dc780u;

    // 0x2dc780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dc780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2dc784: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2dc784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2dc788: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2dc788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc78c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2dc78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2dc790:
    // 0x2dc790: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2dc790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dc794: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2dc794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2dc798: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2dc798u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc79c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2dc79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2dc7a0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2dc7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2dc7a4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2dc7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2dc7a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dc7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2dc7ac: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dc7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dc7b0: 0x2463c7f8  addiu       $v1, $v1, -0x3808
    ctx->pc = 0x2dc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952952));
    // 0x2dc7b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc7b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC7B8u;
    {
        const bool branch_taken_0x2dc7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc7b8) {
            ctx->pc = 0x2DC7D8u;
            goto label_2dc7d8;
        }
    }
    ctx->pc = 0x2DC7C0u;
    // 0x2dc7c0: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dc7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dc7c4: 0x2484c80c  addiu       $a0, $a0, -0x37F4
    ctx->pc = 0x2dc7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952972));
    // 0x2dc7c8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dc7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dc7cc: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dc7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dc7d0: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DC7D0u;
    SET_GPR_U32(ctx, 31, 0x2DC7D8u);
    ctx->pc = 0x2DC7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC7D0u;
    // 0x2dc7d4: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DC7D0u, 0x2DC7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7D8u;
label_2dc7d8:
    // 0x2dc7d8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2dc7dc:
    if (ctx->pc == 0x2DC7DCu) {
        ctx->pc = 0x2DC7E0u;
        goto label_fallthrough_0x2dc7d8;
    }
    ctx->pc = 0x2DC7D8u;
    {
        const bool branch_taken_0x2dc7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc7d8) {
            ctx->pc = 0x2DC80Cu;
            goto label_2dc80c;
        }
    }
label_fallthrough_0x2dc7d8:
    ctx->pc = 0x2DC7E0u;
    // 0x2dc7e0: 0xdeb6f6b7  ld          $s6, -0x949($s5)
    ctx->pc = 0x2dc7e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 21), 4294964919)));
    // 0x2dc7e4: 0xcdf86f2  jal         func_37E1BC8
    ctx->pc = 0x2DC7E4u;
    SET_GPR_U32(ctx, 31, 0x2DC7ECu);
    ctx->pc = 0x2DC7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC7E4u;
    // 0x2dc7e8: 0x87c66abb  lh          $a2, 0x6ABB($fp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 27323)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E1BC8u, 0x2DC7E4u, 0x2DC7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7ECu;
label_2dc7ec:
    // 0x2dc7ec: 0xdca27fd7  ld          $v0, 0x7FD7($a1)
    ctx->pc = 0x2dc7ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32727)));
label_2dc7f0:
    // 0x2dc7f0: 0xffc468d2  sd          $a0, 0x68D2($fp)
    ctx->pc = 0x2dc7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 26834), GPR_U64(ctx, 4));
    // 0x2dc7f4: 0x299f820  add         $ra, $s4, $t9
    ctx->pc = 0x2dc7f4u;
    {     int32_t rs_val = GPR_S32(ctx, 20);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x2dc7f8: 0x0  nop
    ctx->pc = 0x2dc7f8u;
    // NOP
    // 0x2dc7fc: 0x31587885  andi        $t8, $t2, 0x7885
    ctx->pc = 0x2dc7fcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30853);
    // 0x2dc800: 0xc712f8f8  lwc1        $f18, -0x708($t8)
    ctx->pc = 0x2dc800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dc804: 0x31587aad  andi        $t8, $t2, 0x7AAD
    ctx->pc = 0x2dc804u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)31405);
    // 0x2dc808: 0x0  nop
    ctx->pc = 0x2dc808u;
    // NOP
label_2dc80c:
    // 0x2dc80c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dc810: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2dc810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2dc814: 0x69f8c997  ldl         $t8, -0x3669($t7)
    ctx->pc = 0x2dc814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294953367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x2dc818: 0x69f66f87  ldl         $s6, 0x6F87($t7)
    ctx->pc = 0x2dc818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 28551); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x2dc81c: 0x5607e995  bnel        $s0, $a3, . + 4 + (-0x166B << 2)
    ctx->pc = 0x2DC81Cu;
    {
        const bool branch_taken_0x2dc81c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        if (branch_taken_0x2dc81c) {
            ctx->pc = 0x2DC820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC81Cu;
            // 0x2dc820: 0xdfd4d63  jal         func_7F5358C (Delay Slot)
            // JAL 0x7F5358C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6E74u;
            return;
        }
    }
    ctx->pc = 0x2DC824u;
    // 0x2dc824: 0xc0b6d62  jal         func_2DB588
label_2dc828:
    if (ctx->pc == 0x2DC828u) {
        ctx->pc = 0x2DC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC824u;
        // 0x2dc828: 0x56352995  bnel        $s1, $s5, . + 4 + (0x2995 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DC828 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC82Cu;
        goto label_2dc82c;
    }
    ctx->pc = 0x2DC824u;
    SET_GPR_U32(ctx, 31, 0x2DC82Cu);
    ctx->pc = 0x2DC828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC824u;
    // 0x2dc828: 0x56352995  bnel        $s1, $s5, . + 4 + (0x2995 << 2) (Delay Slot)
    // Likely branch instruction at 0x2DC828 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB588u, 0x2DC824u, 0x2DC82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC82Cu;
label_2dc82c:
    // 0x2dc82c: 0x9f50d9f  j           func_7D4367C
    ctx->pc = 0x2DC82Cu;
    ctx->pc = 0x2DC830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC82Cu;
    // 0x2dc830: 0xdfd4d63  jal         func_7F5358C (Delay Slot)
    // JAL 0x7F5358C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7D4367Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7D4367Cu, 0x2DC82Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC834u;
    // 0x2dc834: 0xc04485c  jal         func_112170
label_2dc838:
    if (ctx->pc == 0x2DC838u) {
        ctx->pc = 0x2DC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC834u;
        // 0x2dc838: 0xa9f8c997  swl         $t8, -0x3669($t7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294953367); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC83Cu;
        goto label_2dc83c;
    }
    ctx->pc = 0x2DC834u;
    SET_GPR_U32(ctx, 31, 0x2DC83Cu);
    ctx->pc = 0x2DC838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC834u;
    // 0x2dc838: 0xa9f8c997  swl         $t8, -0x3669($t7) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294953367); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x2DC834u, 0x2DC83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC83Cu;
label_2dc83c:
    // 0x2dc83c: 0x1dfd4d1f  .word       0x1DFD4D1F                   # bgtz        $t7, . + 4 + (0x4D1F << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DC83Cu;
    {
        const bool branch_taken_0x2dc83c = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x2DC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC83Cu;
        // 0x2dc840: 0x9f5adc7  j           func_7D6B71C (Delay Slot)
        // J 0x7D6B71C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc83c) {
            ctx->pc = 0x2EFCBCu;
            return;
        }
    }
    ctx->pc = 0x2DC844u;
    // 0x2dc844: 0xdfd4d47  jal         func_7F5351C
    ctx->pc = 0x2DC844u;
    SET_GPR_U32(ctx, 31, 0x2DC84Cu);
    ctx->pc = 0x2DC848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC844u;
    // 0x2dc848: 0xcfd4d17  jal         func_3F5345C (Delay Slot)
    // JAL 0x3F5345C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7F5351Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7F5351Cu, 0x2DC844u, 0x2DC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC84Cu;
label_2dc84c:
    // 0x2dc84c: 0xc04495e  jal         func_112578
label_2dc850:
    if (ctx->pc == 0x2DC850u) {
        ctx->pc = 0x2DC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC84Cu;
        // 0x2dc850: 0xc9f8a997  lwc2        $24, -0x5669($t7) (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x32 at 0x2DC850 raw=0xC9F8A997");
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC854u;
        goto label_2dc854;
    }
    ctx->pc = 0x2DC84Cu;
    SET_GPR_U32(ctx, 31, 0x2DC854u);
    ctx->pc = 0x2DC850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC84Cu;
    // 0x2dc850: 0xc9f8a997  lwc2        $24, -0x5669($t7) (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2DC850 raw=0xC9F8A997");
    ctx->in_delay_slot = false;
    ctx->pc = 0x112578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112578u, 0x2DC84Cu, 0x2DC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC854u;
label_2dc854:
    // 0x2dc854: 0x18fd4d1f  .word       0x18FD4D1F                   # blez        $a3, . + 4 + (0x4D1F << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DC854u;
    {
        const bool branch_taken_0x2dc854 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2DC858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC854u;
        // 0x2dc858: 0x9f46dd3  j           func_7D1B74C (Delay Slot)
        // J 0x7D1B74C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc854) {
            ctx->pc = 0x2EFCD4u;
            return;
        }
    }
    ctx->pc = 0x2DC85Cu;
    // 0x2dc85c: 0x9f8ed17  j           func_7E3B45C
    ctx->pc = 0x2DC85Cu;
    ctx->pc = 0x2DC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC85Cu;
    // 0x2dc860: 0xc09ed08  jal         func_27B420 (Delay Slot)
    // JAL 0x27B420 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E3B45Cu, 0x2DC85Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC864u;
    // 0x2dc864: 0xdfd4d53  jal         func_7F5354C
label_2dc868:
    if (ctx->pc == 0x2DC868u) {
        ctx->pc = 0x2DC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC864u;
        // 0x2dc868: 0x1afd4d1f  .word       0x1AFD4D1F                   # blez        $s7, . + 4 + (0x4D1F << 2) # 001D0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DC868 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC86Cu;
        goto label_2dc86c;
    }
    ctx->pc = 0x2DC864u;
    SET_GPR_U32(ctx, 31, 0x2DC86Cu);
    ctx->pc = 0x2DC868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC864u;
    // 0x2dc868: 0x1afd4d1f  .word       0x1AFD4D1F                   # blez        $s7, . + 4 + (0x4D1F << 2) # 001D0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x2DC868 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7F5354Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7F5354Cu, 0x2DC864u, 0x2DC86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC86Cu;
label_2dc86c:
    // 0x2dc86c: 0x9f30f5b  j           func_7CC3D6C
    ctx->pc = 0x2DC86Cu;
    ctx->pc = 0x2DC870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC86Cu;
    // 0x2dc870: 0xdfd4d47  jal         func_7F5351C (Delay Slot)
    // JAL 0x7F5351C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC3D6Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC3D6Cu, 0x2DC86Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC874u;
    // 0x2dc874: 0xcfd4d17  jal         func_3F5345C
label_2dc878:
    if (ctx->pc == 0x2DC878u) {
        ctx->pc = 0x2DC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC874u;
        // 0x2dc878: 0xc04495e  jal         func_112578 (Delay Slot)
        // JAL 0x112578 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC87Cu;
        goto label_2dc87c;
    }
    ctx->pc = 0x2DC874u;
    SET_GPR_U32(ctx, 31, 0x2DC87Cu);
    ctx->pc = 0x2DC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC874u;
    // 0x2dc878: 0xc04495e  jal         func_112578 (Delay Slot)
    // JAL 0x112578 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5345Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5345Cu, 0x2DC874u, 0x2DC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC87Cu;
label_2dc87c:
    // 0x2dc87c: 0xffd4d17  jal         func_FF5345C
label_2dc880:
    if (ctx->pc == 0x2DC880u) {
        ctx->pc = 0x2DC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC87Cu;
        // 0x2dc880: 0x9f3ad9f  j           func_7CEB67C (Delay Slot)
        // J 0x7CEB67C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC884u;
        goto label_2dc884;
    }
    ctx->pc = 0x2DC87Cu;
    SET_GPR_U32(ctx, 31, 0x2DC884u);
    ctx->pc = 0x2DC880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC87Cu;
    // 0x2dc880: 0x9f3ad9f  j           func_7CEB67C (Delay Slot)
    // J 0x7CEB67C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xFF5345Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xFF5345Cu, 0x2DC87Cu, 0x2DC884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC884u;
label_2dc884:
    // 0x2dc884: 0xdfd4d47  jal         func_7F5351C
label_2dc888:
    if (ctx->pc == 0x2DC888u) {
        ctx->pc = 0x2DC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC884u;
        // 0x2dc888: 0xcfd4d5b  jal         func_3F5356C (Delay Slot)
        // JAL 0x3F5356C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC88Cu;
        goto label_2dc88c;
    }
    ctx->pc = 0x2DC884u;
    SET_GPR_U32(ctx, 31, 0x2DC88Cu);
    ctx->pc = 0x2DC888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC884u;
    // 0x2dc888: 0xcfd4d5b  jal         func_3F5356C (Delay Slot)
    // JAL 0x3F5356C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7F5351Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7F5351Cu, 0x2DC884u, 0x2DC88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC88Cu;
label_2dc88c:
    // 0x2dc88c: 0xc0449ee  jal         func_1127B8
label_2dc890:
    if (ctx->pc == 0x2DC890u) {
        ctx->pc = 0x2DC890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC88Cu;
        // 0x2dc890: 0xffd4d53  jal         func_FF5354C (Delay Slot)
        // JAL 0xFF5354C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC894u;
        goto label_2dc894;
    }
    ctx->pc = 0x2DC88Cu;
    SET_GPR_U32(ctx, 31, 0x2DC894u);
    ctx->pc = 0x2DC890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC88Cu;
    // 0x2dc890: 0xffd4d53  jal         func_FF5354C (Delay Slot)
    // JAL 0xFF5354C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127B8u, 0x2DC88Cu, 0x2DC894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC894u;
label_2dc894:
    // 0x2dc894: 0x9f24d9f  j           func_7C9367C
label_2dc898:
    if (ctx->pc == 0x2DC898u) {
        ctx->pc = 0x2DC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC894u;
        // 0x2dc898: 0x9f8ed17  j           func_7E3B45C (Delay Slot)
        // J 0x7E3B45C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC89Cu;
        goto label_fallthrough_0x2dc894;
    }
    ctx->pc = 0x2DC894u;
    ctx->pc = 0x2DC898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC894u;
    // 0x2dc898: 0x9f8ed17  j           func_7E3B45C (Delay Slot)
    // J 0x7E3B45C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9367Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9367Cu, 0x2DC894u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x2dc894:
    ctx->pc = 0x2DC89Cu;
    // 0x2dc89c: 0xc044900  jal         func_112400
    ctx->pc = 0x2DC89Cu;
    SET_GPR_U32(ctx, 31, 0x2DC8A4u);
    ctx->pc = 0x2DC8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC89Cu;
    // 0x2dc8a0: 0xdfd4d47  jal         func_7F5351C (Delay Slot)
    // JAL 0x7F5351C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x112400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112400u, 0x2DC89Cu, 0x2DC8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8A4u;
label_2dc8a4:
    // 0x2dc8a4: 0x9f2cd9f  j           func_7CB367C
label_2dc8a8:
    if (ctx->pc == 0x2DC8A8u) {
        ctx->pc = 0x2DC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8A4u;
        // 0x2dc8a8: 0x49f9a997  .word       0x49F9A997                   # INVALID     $t7, $t9, -0x5669 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC8A8 raw=0x49F9A997");
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC8ACu;
        goto label_fallthrough_0x2dc8a4;
    }
    ctx->pc = 0x2DC8A4u;
    ctx->pc = 0x2DC8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8A4u;
    // 0x2dc8a8: 0x49f9a997  .word       0x49F9A997                   # INVALID     $t7, $t9, -0x5669 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
    throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC8A8 raw=0x49F9A997");
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CB367Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB367Cu, 0x2DC8A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x2dc8a4:
    ctx->pc = 0x2DC8ACu;
    // 0x2dc8ac: 0x69f8fd5b  ldl         $t8, -0x2A5($t7)
    ctx->pc = 0x2dc8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294966619); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x2dc8b0: 0x96070995  lhu         $a3, 0x995($s0)
    ctx->pc = 0x2dc8b0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2453)));
    // 0x2dc8b4: 0x19fd4d5b  .word       0x19FD4D5B                   # blez        $t7, . + 4 + (0x4D5B << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DC8B4u;
    {
        const bool branch_taken_0x2dc8b4 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x2DC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8B4u;
        // 0x2dc8b8: 0x49f92f1b  .word       0x49F92F1B                   # INVALID     $t7, $t9, 0x2F1B # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC8B8 raw=0x49F92F1B");
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc8b4) {
            ctx->pc = 0x2EFE24u;
            return;
        }
    }
    ctx->pc = 0x2DC8BCu;
    // 0x2dc8bc: 0xdfd4d17  jal         func_7F5345C
    ctx->pc = 0x2DC8BCu;
    SET_GPR_U32(ctx, 31, 0x2DC8C4u);
    ctx->pc = 0x2DC8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8BCu;
    // 0x2dc8c0: 0x9f96e53  j           func_7E5B94C (Delay Slot)
    // J 0x7E5B94C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7F5345Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7F5345Cu, 0x2DC8BCu, 0x2DC8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8C4u;
label_2dc8c4:
    // 0x2dc8c4: 0x9f8ed17  j           func_7E3B45C
    ctx->pc = 0x2DC8C4u;
    ctx->pc = 0x2DC8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8C4u;
    // 0x2dc8c8: 0xa9f9a997  swl         $t9, -0x5669($t7) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294945175); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 25); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E3B45Cu, 0x2DC8C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC8CCu;
    // 0x2dc8cc: 0x9f8c9d5  j           func_7E32754
    ctx->pc = 0x2DC8CCu;
    ctx->pc = 0x2DC8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8CCu;
    // 0x2dc8d0: 0x89f8c987  lwl         $t8, -0x3679($t7) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294953351); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 24) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 24, (int32_t)merged); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E32754u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E32754u, 0x2DC8CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC8D4u;
    // 0x2dc8d4: 0x49f8fd57  .word       0x49F8FD57                   # INVALID     $t7, $t8, -0x2A9 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dc8d4u;
    throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC8D4 raw=0x49F8FD57");
    // 0x2dc8d8: 0xa9f82f1f  swl         $t8, 0x2F1F($t7)
    ctx->pc = 0x2dc8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 12063); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dc8dc: 0x2afdad05  slti        $sp, $s7, -0x52FB
    ctx->pc = 0x2dc8dcu;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4294946053) ? 1 : 0);
    // 0x2dc8e0: 0x9f8ed17  j           func_7E3B45C
    ctx->pc = 0x2DC8E0u;
    ctx->pc = 0x2DC8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8E0u;
    // 0x2dc8e4: 0x9f8ed17  j           func_7E3B45C (Delay Slot)
    // J 0x7E3B45C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E3B45Cu, 0x2DC8E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC8E8u;
    // 0x2dc8e8: 0x9f8ed17  j           func_7E3B45C
    ctx->pc = 0x2DC8E8u;
    ctx->pc = 0x2DC8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8E8u;
    // 0x2dc8ec: 0x1607e79b  bne         $s0, $a3, . + 4 + (-0x1865 << 2) (Delay Slot)
    // Likely branch instruction at 0x2DC8EC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E3B45Cu, 0x2DC8E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC8F0u;
    // 0x2dc8f0: 0x9f8c9d5  j           func_7E32754
    ctx->pc = 0x2DC8F0u;
    ctx->pc = 0x2DC8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8F0u;
    // 0x2dc8f4: 0x29ff4f05  slti        $ra, $t7, 0x4F05 (Delay Slot)
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)20229) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E32754u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E32754u, 0x2DC8F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC8F8u;
    // 0x2dc8f8: 0x56352995  bnel        $s1, $s5, . + 4 + (0x2995 << 2)
    ctx->pc = 0x2DC8F8u;
    {
        const bool branch_taken_0x2dc8f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x2dc8f8) {
            ctx->pc = 0x2DC8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC8F8u;
            // 0x2dc8fc: 0x9f8f957  j           func_7E3E55C (Delay Slot)
            // J 0x7E3E55C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6F50u;
            return;
        }
    }
    ctx->pc = 0x2DC900u;
    // 0x2dc900: 0x19fd4d5b  .word       0x19FD4D5B                   # blez        $t7, . + 4 + (0x4D5B << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DC900u;
    {
        const bool branch_taken_0x2dc900 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x2DC904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC900u;
        // 0x2dc904: 0x69ffa997  ldl         $ra, -0x5669($t7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294945175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc900) {
            ctx->pc = 0x2EFE70u;
            return;
        }
    }
    ctx->pc = 0x2DC908u;
    // 0x2dc908: 0x49f8fd5b  .word       0x49F8FD5B                   # INVALID     $t7, $t8, -0x2A5 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dc908u;
    throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC908 raw=0x49F8FD5B");
    // 0x2dc90c: 0x69f90f1f  ldl         $t9, 0xF1F($t7)
    ctx->pc = 0x2dc90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 3871); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x2dc910: 0xdfd4d17  jal         func_7F5345C
    ctx->pc = 0x2DC910u;
    SET_GPR_U32(ctx, 31, 0x2DC918u);
    ctx->pc = 0x2DC914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC910u;
    // 0x2dc914: 0x9f94e53  j           func_7E5394C (Delay Slot)
    // J 0x7E5394C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7F5345Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7F5345Cu, 0x2DC910u, 0x2DC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC918u;
label_2dc918:
    // 0x2dc918: 0x9f8ed17  j           func_7E3B45C
    ctx->pc = 0x2DC918u;
    ctx->pc = 0x2DC91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC918u;
    // 0x2dc91c: 0xa9ffa997  swl         $ra, -0x5669($t7) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294945175); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 31); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E3B45Cu, 0x2DC918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC920u;
    // 0x2dc920: 0x9f8c9d5  j           func_7E32754
    ctx->pc = 0x2DC920u;
    ctx->pc = 0x2DC924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC920u;
    // 0x2dc924: 0x9f8ed17  j           func_7E3B45C (Delay Slot)
    // J 0x7E3B45C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E32754u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E32754u, 0x2DC920u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC928u;
    // 0x2dc928: 0x89f8c987  lwl         $t8, -0x3679($t7)
    ctx->pc = 0x2dc928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294953351); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 24) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 24, (int32_t)merged); }
    // 0x2dc92c: 0x49f8fd57  .word       0x49F8FD57                   # INVALID     $t7, $t8, -0x2A9 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dc92cu;
    throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC92C raw=0x49F8FD57");
    // 0x2dc930: 0xa9f82f1f  swl         $t8, 0x2F1F($t7)
    ctx->pc = 0x2dc930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 12063); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dc934: 0x2afdad05  slti        $sp, $s7, -0x52FB
    ctx->pc = 0x2dc934u;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4294946053) ? 1 : 0);
    // 0x2dc938: 0x9f8ed17  j           func_7E3B45C
    ctx->pc = 0x2DC938u;
    ctx->pc = 0x2DC93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC938u;
    // 0x2dc93c: 0x9f8ed17  j           func_7E3B45C (Delay Slot)
    // J 0x7E3B45C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E3B45Cu, 0x2DC938u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC940u;
    // 0x2dc940: 0x9f8ed17  j           func_7E3B45C
    ctx->pc = 0x2DC940u;
    ctx->pc = 0x2DC944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC940u;
    // 0x2dc944: 0x1607e79b  bne         $s0, $a3, . + 4 + (-0x1865 << 2) (Delay Slot)
    // Likely branch instruction at 0x2DC944 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E3B45Cu, 0x2DC940u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC948u;
    // 0x2dc948: 0x9f8c9d5  j           func_7E32754
    ctx->pc = 0x2DC948u;
    ctx->pc = 0x2DC94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC948u;
    // 0x2dc94c: 0x29fc0f05  slti        $gp, $t7, 0xF05 (Delay Slot)
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)3845) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E32754u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E32754u, 0x2DC948u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC950u;
    // 0x2dc950: 0x56352995  bnel        $s1, $s5, . + 4 + (0x2995 << 2)
    ctx->pc = 0x2DC950u;
    {
        const bool branch_taken_0x2dc950 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x2dc950) {
            ctx->pc = 0x2DC954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC950u;
            // 0x2dc954: 0x9f8a9d5  j           func_7E2A754 (Delay Slot)
            // J 0x7E2A754 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6FA8u;
            return;
        }
    }
    ctx->pc = 0x2DC958u;
    // 0x2dc958: 0xc0b7332  jal         func_2DCCC8
    ctx->pc = 0x2DC958u;
    SET_GPR_U32(ctx, 31, 0x2DC960u);
    ctx->pc = 0x2DC95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC958u;
    // 0x2dc95c: 0xdfd4d57  jal         func_7F5355C (Delay Slot)
    // JAL 0x7F5355C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCCC8u, 0x2DC958u, 0x2DC960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC960u;
label_2dc960:
    // 0x2dc960: 0x49f9889f  .word       0x49F9889F                   # INVALID     $t7, $t9, -0x7761 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dc960u;
    throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC960 raw=0x49F9889F");
label_2dc964:
    // 0x2dc964: 0x9fccf9f  j           func_7F33E7C
    ctx->pc = 0x2DC964u;
    ctx->pc = 0x2DC968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC964u;
    // 0x2dc968: 0xcfd4d17  jal         func_3F5345C (Delay Slot)
    // JAL 0x3F5345C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7F33E7Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7F33E7Cu, 0x2DC964u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC96Cu;
    // 0x2dc96c: 0x9f8ed17  j           func_7E3B45C
label_2dc970:
    if (ctx->pc == 0x2DC970u) {
        ctx->pc = 0x2DC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC96Cu;
        // 0x2dc970: 0xabfccd57  swl         $gp, -0x32A9($ra) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294954327); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 28); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC974u;
        goto label_fallthrough_0x2dc96c;
    }
    ctx->pc = 0x2DC96Cu;
    ctx->pc = 0x2DC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC96Cu;
    // 0x2dc970: 0xabfccd57  swl         $gp, -0x32A9($ra) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294954327); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 28); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E3B45Cu, 0x2DC96Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x2dc96c:
    ctx->pc = 0x2DC974u;
    // 0x2dc974: 0xadfccd43  sw          $gp, -0x32BD($t7)
    ctx->pc = 0x2dc974u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294954307), GPR_U32(ctx, 28));
    // 0x2dc978: 0x69f8ff1f  ldl         $t8, -0xE1($t7)
    ctx->pc = 0x2dc978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294967071); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x2dc97c: 0xa9f8c983  swl         $t8, -0x367D($t7)
    ctx->pc = 0x2dc97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294953347); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dc980: 0x49f86803  .word       0x49F86803                   # INVALID     $t7, $t8, 0x6803 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dc980u;
    throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC980 raw=0x49F86803");
    // 0x2dc984: 0x1607af9f  bne         $s0, $a3, . + 4 + (-0x5061 << 2)
    ctx->pc = 0x2DC984u;
    {
        const bool branch_taken_0x2dc984 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x2DC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC984u;
        // 0x2dc988: 0x69f8f907  ldl         $t8, -0x6F9($t7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294965511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc984) {
            ctx->pc = 0x2C8804u;
            return;
        }
    }
    ctx->pc = 0x2DC98Cu;
    // 0x2dc98c: 0xe9f869c3  swc2        $24, 0x69C3($t7)
    ctx->pc = 0x2dc98cu;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x2DC98C raw=0xE9F869C3");
    // 0x2dc990: 0xc9f849d7  lwc2        $24, 0x49D7($t7)
    ctx->pc = 0x2dc990u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2DC990 raw=0xC9F849D7");
    // 0x2dc994: 0xcfd4d17  jal         func_3F5345C
    ctx->pc = 0x2DC994u;
    SET_GPR_U32(ctx, 31, 0x2DC99Cu);
    ctx->pc = 0x2DC998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC994u;
    // 0x2dc998: 0xabfccd0f  swl         $gp, -0x32F1($ra) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294954255); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 28); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5345Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5345Cu, 0x2DC994u, 0x2DC99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC99Cu;
label_2dc99c:
    // 0x2dc99c: 0xadfccd0b  sw          $gp, -0x32F5($t7)
    ctx->pc = 0x2dc99cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294954251), GPR_U32(ctx, 28));
    // 0x2dc9a0: 0x69f8ff1f  ldl         $t8, -0xE1($t7)
    ctx->pc = 0x2dc9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294967071); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x2dc9a4: 0xa9f8c983  swl         $t8, -0x367D($t7)
    ctx->pc = 0x2dc9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294953347); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dc9a8: 0x49f88803  .word       0x49F88803                   # INVALID     $t7, $t8, -0x77FD # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dc9a8u;
    throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC9A8 raw=0x49F88803");
    // 0x2dc9ac: 0x1607af9f  bne         $s0, $a3, . + 4 + (-0x5061 << 2)
    ctx->pc = 0x2DC9ACu;
    {
        const bool branch_taken_0x2dc9ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x2DC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9ACu;
        // 0x2dc9b0: 0x69f8f907  ldl         $t8, -0x6F9($t7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294965511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9ac) {
            ctx->pc = 0x2C882Cu;
            return;
        }
    }
    ctx->pc = 0x2DC9B4u;
    // 0x2dc9b4: 0xe9f809c3  swc2        $24, 0x9C3($t7)
    ctx->pc = 0x2dc9b4u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x2DC9B4 raw=0xE9F809C3");
    // 0x2dc9b8: 0xc9f9c9d7  lwc2        $25, -0x3629($t7)
    ctx->pc = 0x2dc9b8u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2DC9B8 raw=0xC9F9C9D7");
    // 0x2dc9bc: 0xcfd4d17  jal         func_3F5345C
    ctx->pc = 0x2DC9BCu;
    SET_GPR_U32(ctx, 31, 0x2DC9C4u);
    ctx->pc = 0x2DC9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC9BCu;
    // 0x2dc9c0: 0xabfccd0f  swl         $gp, -0x32F1($ra) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294954255); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 28); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5345Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5345Cu, 0x2DC9BCu, 0x2DC9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC9C4u;
label_2dc9c4:
    // 0x2dc9c4: 0xadfccd0b  sw          $gp, -0x32F5($t7)
    ctx->pc = 0x2dc9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294954251), GPR_U32(ctx, 28));
    // 0x2dc9c8: 0x69f8ff1f  ldl         $t8, -0xE1($t7)
    ctx->pc = 0x2dc9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294967071); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x2dc9cc: 0xa9f8c983  swl         $t8, -0x367D($t7)
    ctx->pc = 0x2dc9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294953347); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dc9d0: 0x49f8a803  .word       0x49F8A803                   # INVALID     $t7, $t8, -0x57FD # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dc9d0u;
    throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC9D0 raw=0x49F8A803");
    // 0x2dc9d4: 0x1607af9f  bne         $s0, $a3, . + 4 + (-0x5061 << 2)
    ctx->pc = 0x2DC9D4u;
    {
        const bool branch_taken_0x2dc9d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x2DC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9D4u;
        // 0x2dc9d8: 0x69f8f907  ldl         $t8, -0x6F9($t7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294965511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9d4) {
            ctx->pc = 0x2C8854u;
            return;
        }
    }
    ctx->pc = 0x2DC9DCu;
    // 0x2dc9dc: 0xdfd4d5b  jal         func_7F5356C
    ctx->pc = 0x2DC9DCu;
    SET_GPR_U32(ctx, 31, 0x2DC9E4u);
    ctx->pc = 0x2DC9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC9DCu;
    // 0x2dc9e0: 0xc09edd6  jal         func_27B758 (Delay Slot)
    // JAL 0x27B758 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7F5356Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7F5356Cu, 0x2DC9DCu, 0x2DC9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC9E4u;
label_2dc9e4:
    // 0x2dc9e4: 0x1afd4d17  .word       0x1AFD4D17                   # blez        $s7, . + 4 + (0x4D17 << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
label_2dc9e8:
    if (ctx->pc == 0x2DC9E8u) {
        ctx->pc = 0x2DC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9E4u;
        // 0x2dc9e8: 0x49f9c995  .word       0x49F9C995                   # INVALID     $t7, $t9, -0x366B # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC9E8 raw=0x49F9C995");
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC9ECu;
        goto label_fallthrough_0x2dc9e4;
    }
    ctx->pc = 0x2DC9E4u;
    {
        const bool branch_taken_0x2dc9e4 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2DC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9E4u;
        // 0x2dc9e8: 0x49f9c995  .word       0x49F9C995                   # INVALID     $t7, $t9, -0x366B # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DC9E8 raw=0x49F9C995");
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9e4) {
            ctx->pc = 0x2EFE44u;
            return;
        }
    }
label_fallthrough_0x2dc9e4:
    ctx->pc = 0x2DC9ECu;
    // 0x2dc9ec: 0x9f88f5b  j           func_7E23D6C
    ctx->pc = 0x2DC9ECu;
    ctx->pc = 0x2DC9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC9ECu;
    // 0x2dc9f0: 0x9f8ed17  j           func_7E3B45C (Delay Slot)
    // J 0x7E3B45C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E23D6Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E23D6Cu, 0x2DC9ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC9F4u;
    // 0x2dc9f4: 0xc09edd6  jal         func_27B758
    ctx->pc = 0x2DC9F4u;
    SET_GPR_U32(ctx, 31, 0x2DC9FCu);
    ctx->pc = 0x2DC9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC9F4u;
    // 0x2dc9f8: 0xdfd4d5b  jal         func_7F5356C (Delay Slot)
    // JAL 0x7F5356C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B758u, 0x2DC9F4u, 0x2DC9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC9FCu;
label_2dc9fc:
    // 0x2dc9fc: 0x9f86dc7  j           func_7E1B71C
label_2dca00:
    if (ctx->pc == 0x2DCA00u) {
        ctx->pc = 0x2DCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9FCu;
        // 0x2dca00: 0xcfd4d63  jal         func_3F5358C (Delay Slot)
        // JAL 0x3F5358C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA04u;
        goto label_fallthrough_0x2dc9fc;
    }
    ctx->pc = 0x2DC9FCu;
    ctx->pc = 0x2DCA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC9FCu;
    // 0x2dca00: 0xcfd4d63  jal         func_3F5358C (Delay Slot)
    // JAL 0x3F5358C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E1B71Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E1B71Cu, 0x2DC9FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x2dc9fc:
    ctx->pc = 0x2DCA04u;
    // 0x2dca04: 0xc044900  jal         func_112400
label_2dca08:
    if (ctx->pc == 0x2DCA08u) {
        ctx->pc = 0x2DCA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA04u;
        // 0x2dca08: 0xdfd4d47  jal         func_7F5351C (Delay Slot)
        // JAL 0x7F5351C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA0Cu;
        goto label_2dca0c;
    }
    ctx->pc = 0x2DCA04u;
    SET_GPR_U32(ctx, 31, 0x2DCA0Cu);
    ctx->pc = 0x2DCA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA04u;
    // 0x2dca08: 0xdfd4d47  jal         func_7F5351C (Delay Slot)
    // JAL 0x7F5351C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x112400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112400u, 0x2DCA04u, 0x2DCA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA0Cu;
label_2dca0c:
    // 0x2dca0c: 0xcfd4d63  jal         func_3F5358C
label_2dca10:
    if (ctx->pc == 0x2DCA10u) {
        ctx->pc = 0x2DCA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA0Cu;
        // 0x2dca10: 0xdfd4d17  jal         func_7F5345C (Delay Slot)
        // JAL 0x7F5345C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA14u;
        goto label_2dca14;
    }
    ctx->pc = 0x2DCA0Cu;
    SET_GPR_U32(ctx, 31, 0x2DCA14u);
    ctx->pc = 0x2DCA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA0Cu;
    // 0x2dca10: 0xdfd4d17  jal         func_7F5345C (Delay Slot)
    // JAL 0x7F5345C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5358Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5358Cu, 0x2DCA0Cu, 0x2DCA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA14u;
label_2dca14:
    // 0x2dca14: 0x9f8ed17  j           func_7E3B45C
label_2dca18:
    if (ctx->pc == 0x2DCA18u) {
        ctx->pc = 0x2DCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA14u;
        // 0x2dca18: 0x8afccd03  lwl         $gp, -0x32FD($s7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294954243); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA1Cu;
        goto label_fallthrough_0x2dca14;
    }
    ctx->pc = 0x2DCA14u;
    ctx->pc = 0x2DCA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA14u;
    // 0x2dca18: 0x8afccd03  lwl         $gp, -0x32FD($s7) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294954243); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E3B45Cu, 0x2DCA14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x2dca14:
    ctx->pc = 0x2DCA1Cu;
    // 0x2dca1c: 0x89f8c987  lwl         $t8, -0x3679($t7)
    ctx->pc = 0x2dca1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294953351); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 24) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 24, (int32_t)merged); }
    // 0x2dca20: 0x49fbe887  .word       0x49FBE887                   # INVALID     $t7, $k1, -0x1779 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dca20u;
    throw std::runtime_error("Unhandled COP2 format: 0xF at 0x2DCA20 raw=0x49FBE887");
    // 0x2dca24: 0x9f8ed17  j           func_7E3B45C
    ctx->pc = 0x2DCA24u;
    ctx->pc = 0x2DCA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA24u;
    // 0x2dca28: 0x9f8ed17  j           func_7E3B45C (Delay Slot)
    // J 0x7E3B45C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E3B45Cu, 0x2DCA24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DCA2Cu;
    // 0x2dca2c: 0x1607af9f  bne         $s0, $a3, . + 4 + (-0x5061 << 2)
    ctx->pc = 0x2DCA2Cu;
    {
        const bool branch_taken_0x2dca2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x2DCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA2Cu;
        // 0x2dca30: 0x9f8f91b  j           func_7E3E46C (Delay Slot)
        // J 0x7E3E46C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca2c) {
            ctx->pc = 0x2C88ACu;
            return;
        }
    }
    ctx->pc = 0x2DCA34u;
    // 0x2dca34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DCA34u;
    {
        const bool branch_taken_0x2dca34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dca34) {
            ctx->pc = 0x2DCA64u;
            goto label_2dca64;
        }
    }
    ctx->pc = 0x2DCA3Cu;
    // 0x2dca3c: 0xdf8fa4ff  ld          $t7, -0x5B01($gp)
    ctx->pc = 0x2dca3cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 28), 4294943999)));
label_2dca40:
    // 0x2dca40: 0x87ea8693  lh          $t2, -0x796D($ra)
    ctx->pc = 0x2dca40u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 31), 4294936211)));
    // 0x2dca44: 0x27184a60  addiu       $t8, $t8, 0x4A60
    ctx->pc = 0x2dca44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 19040));
    // 0x2dca48: 0xa195f521  sb          $s5, -0xADF($t4)
    ctx->pc = 0x2dca48u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4294964513), (uint8_t)GPR_U32(ctx, 21));
    // 0x2dca4c: 0xa0d6dd39  sb          $s6, -0x22C7($a2)
    ctx->pc = 0x2dca4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294958393), (uint8_t)GPR_U32(ctx, 22));
label_2dca50:
    // 0x2dca50: 0xa0711151  sb          $s1, 0x1151($v1)
    ctx->pc = 0x2dca50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4433), (uint8_t)GPR_U32(ctx, 17));
label_2dca54:
    // 0x2dca54: 0x31587588  andi        $t8, $t2, 0x7588
    ctx->pc = 0x2dca54u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30088);
    // 0x2dca58: 0xc712f8f9  lwc1        $f18, -0x707($t8)
    ctx->pc = 0x2dca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294965497)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dca5c: 0x315877a0  andi        $t8, $t2, 0x77A0
    ctx->pc = 0x2dca5cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30624);
label_2dca60:
    // 0x2dca60: 0x0  nop
    ctx->pc = 0x2dca60u;
    // NOP
label_2dca64:
    // 0x2dca64: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dca64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
label_2dca68:
    // 0x2dca68: 0x2442ca54  addiu       $v0, $v0, -0x35AC
    ctx->pc = 0x2dca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953556));
    // 0x2dca6c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dca70: 0x2484ca34  addiu       $a0, $a0, -0x35CC
    ctx->pc = 0x2dca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953524));
    // 0x2dca74: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dca74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2dca78:
    // 0x2dca78: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dca78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2dca7c:
    // 0x2dca7c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DCA7Cu;
    SET_GPR_U32(ctx, 31, 0x2DCA84u);
    ctx->pc = 0x2DCA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA7Cu;
    // 0x2dca80: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DCA7Cu, 0x2DCA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA84u;
label_2dca84:
    // 0x2dca84: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2dca84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dca88:
    // 0x2dca88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2dca88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dca8c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2dca8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dca90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2dca90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dca94: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2dca94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dca98: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2dca98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dca9c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2dca9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dcaa0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dcaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dcaa4: 0x3e00008  jr          $ra
label_2dcaa8:
    if (ctx->pc == 0x2DCAA8u) {
        ctx->pc = 0x2DCAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAA4u;
        // 0x2dcaa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCAACu;
        goto label_2dcaac;
    }
    ctx->pc = 0x2DCAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAA4u;
        // 0x2dcaa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCAACu;
label_2dcaac:
    // 0x2dcaac: 0x0  nop
    ctx->pc = 0x2dcaacu;
    // NOP
}
