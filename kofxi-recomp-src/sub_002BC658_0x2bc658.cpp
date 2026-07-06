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

// Function: sub_002BC658
// Address: 0x2bc658 - 0x2bc7b0
void sub_002BC658_0x2bc658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC658_0x2bc658");
#endif

    switch (ctx->pc) {
        case 0x2bc680u: goto label_2bc680;
        case 0x2bc6a8u: goto label_2bc6a8;
        case 0x2bc710u: goto label_2bc710;
        default: break;
    }

    ctx->pc = 0x2bc658u;

    // 0x2bc658: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2bc658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2bc65c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bc65cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bc660: 0x8c627d40  lw          $v0, 0x7D40($v1)
    ctx->pc = 0x2bc660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32064)));
    // 0x2bc664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bc664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bc668: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bc668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bc66c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2BC66Cu;
    {
        const bool branch_taken_0x2bc66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC66Cu;
        // 0x2bc670: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc66c) {
            ctx->pc = 0x2BC794u;
            goto label_2bc794;
        }
    }
    ctx->pc = 0x2BC674u;
    // 0x2bc674: 0x0  nop
    ctx->pc = 0x2bc674u;
    // NOP
    // 0x2bc678: 0xc0af646  jal         func_2BD918
    ctx->pc = 0x2BC678u;
    SET_GPR_U32(ctx, 31, 0x2BC680u);
    ctx->pc = 0x2BC67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC678u;
    // 0x2bc67c: 0x3c1001c9  lui         $s0, 0x1C9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)457 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD918u, 0x2BC678u, 0x2BC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC680u;
label_2bc680:
    // 0x2bc680: 0x26034a98  addiu       $v1, $s0, 0x4A98
    ctx->pc = 0x2bc680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 19096));
    // 0x2bc684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bc684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc688: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2bc688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc68c: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x2bc68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2bc690: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2bc690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2bc694: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BC694u;
    {
        const bool branch_taken_0x2bc694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC694u;
        // 0x2bc698: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc694) {
            ctx->pc = 0x2BC704u;
            goto label_2bc704;
        }
    }
    ctx->pc = 0x2BC69Cu;
    // 0x2bc69c: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x2bc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2bc6a0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2bc6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2bc6a4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2bc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
label_2bc6a8:
    // 0x2bc6a8: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2bc6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bc6ac: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2bc6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bc6b0: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x2bc6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bc6b4: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x2bc6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bc6b8: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x2bc6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bc6bc: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x2bc6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bc6c0: 0x68aa001f  ldl         $t2, 0x1F($a1)
    ctx->pc = 0x2bc6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bc6c4: 0x6caa0018  ldr         $t2, 0x18($a1)
    ctx->pc = 0x2bc6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bc6c8: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x2bc6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc6cc: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x2bc6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc6d0: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x2bc6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc6d4: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x2bc6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc6d8: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x2bc6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc6dc: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x2bc6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc6e0: 0xb0ca001f  sdl         $t2, 0x1F($a2)
    ctx->pc = 0x2bc6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc6e4: 0xb4ca0018  sdr         $t2, 0x18($a2)
    ctx->pc = 0x2bc6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc6e8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bc6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bc6ec: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2bc6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2bc6f0: 0x0  nop
    ctx->pc = 0x2bc6f0u;
    // NOP
    // 0x2bc6f4: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2BC6F4u;
    {
        const bool branch_taken_0x2bc6f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bc6f4) {
            ctx->pc = 0x2BC6A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc6a8;
        }
    }
    ctx->pc = 0x2BC6FCu;
    // 0x2bc6fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BC6FCu;
    {
        const bool branch_taken_0x2bc6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6fc) {
            ctx->pc = 0x2BC744u;
            goto label_2bc744;
        }
    }
    ctx->pc = 0x2BC704u;
label_2bc704:
    // 0x2bc704: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x2bc704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2bc708: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2bc708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2bc70c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2bc70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
label_2bc710:
    // 0x2bc710: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x2bc710u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bc714: 0xdca80008  ld          $t0, 0x8($a1)
    ctx->pc = 0x2bc714u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bc718: 0xdca90010  ld          $t1, 0x10($a1)
    ctx->pc = 0x2bc718u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2bc71c: 0xdcaa0018  ld          $t2, 0x18($a1)
    ctx->pc = 0x2bc71cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2bc720: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x2bc720u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x2bc724: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x2bc724u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x2bc728: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x2bc728u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x2bc72c: 0xfcca0018  sd          $t2, 0x18($a2)
    ctx->pc = 0x2bc72cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 10));
    // 0x2bc730: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bc730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bc734: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2bc734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2bc738: 0x0  nop
    ctx->pc = 0x2bc738u;
    // NOP
    // 0x2bc73c: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BC73Cu;
    {
        const bool branch_taken_0x2bc73c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bc73c) {
            ctx->pc = 0x2BC710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc710;
        }
    }
    ctx->pc = 0x2BC744u;
label_2bc744:
    // 0x2bc744: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2bc744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bc748: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2bc748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bc74c: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x2bc74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bc750: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x2bc750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bc754: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x2bc754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bc758: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x2bc758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bc75c: 0x8caa0018  lw          $t2, 0x18($a1)
    ctx->pc = 0x2bc75cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2bc760: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x2bc760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc764: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x2bc764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc768: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x2bc768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc76c: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x2bc76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc770: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x2bc770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc774: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x2bc774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc778: 0x26224a98  addiu       $v0, $s1, 0x4A98
    ctx->pc = 0x2bc778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 19096));
    // 0x2bc77c: 0xacca0018  sw          $t2, 0x18($a2)
    ctx->pc = 0x2bc77cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 10));
    // 0x2bc780: 0x24843250  addiu       $a0, $a0, 0x3250
    ctx->pc = 0x2bc780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12880));
    // 0x2bc784: 0x2463c628  addiu       $v1, $v1, -0x39D8
    ctx->pc = 0x2bc784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952488));
    // 0x2bc788: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x2bc788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x2bc78c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC78Cu;
    {
        const bool branch_taken_0x2bc78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC78Cu;
        // 0x2bc790: 0xac43004c  sw          $v1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc78c) {
            ctx->pc = 0x2BC798u;
            goto label_2bc798;
        }
    }
    ctx->pc = 0x2BC794u;
label_2bc794:
    // 0x2bc794: 0x3c1001c9  lui         $s0, 0x1C9
    ctx->pc = 0x2bc794u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)457 << 16));
label_2bc798:
    // 0x2bc798: 0x26024a98  addiu       $v0, $s0, 0x4A98
    ctx->pc = 0x2bc798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 19096));
    // 0x2bc79c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bc79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc7a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bc7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc7a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc7a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7A8u;
        // 0x2bc7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC7B0u;
}
