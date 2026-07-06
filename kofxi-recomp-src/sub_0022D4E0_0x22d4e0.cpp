#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D4E0
// Address: 0x22d4e0 - 0x22d6b0
void sub_0022D4E0_0x22d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D4E0_0x22d4e0");
#endif

    switch (ctx->pc) {
        case 0x22d54cu: goto label_22d54c;
        case 0x22d578u: goto label_22d578;
        case 0x22d5ccu: goto label_22d5cc;
        case 0x22d600u: goto label_22d600;
        case 0x22d60cu: goto label_22d60c;
        case 0x22d6a8u: goto label_22d6a8;
        default: break;
    }

    ctx->pc = 0x22d4e0u;

    // 0x22d4e0: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x22d4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x22d4e4: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x22D4E4u;
    {
        const bool branch_taken_0x22d4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4E4u;
            // 0x22d4e8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4e4) {
            ctx->pc = 0x22D600u;
            goto label_22d600;
        }
    }
    ctx->pc = 0x22D4ECu;
    // 0x22d4ec: 0xa44026  xor         $t0, $a1, $a0
    ctx->pc = 0x22d4ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x22d4f0: 0x310b0007  andi        $t3, $t0, 0x7
    ctx->pc = 0x22d4f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x22d4f4: 0x1560002a  bnez        $t3, . + 4 + (0x2A << 2)
    ctx->pc = 0x22D4F4u;
    {
        const bool branch_taken_0x22d4f4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4F4u;
            // 0x22d4f8: 0x310a000f  andi        $t2, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4f4) {
            ctx->pc = 0x22D5A0u;
            goto label_22d5a0;
        }
    }
    ctx->pc = 0x22D4FCu;
    // 0x22d4fc: 0x44823  negu        $t1, $a0
    ctx->pc = 0x22d4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x22d500: 0x31290007  andi        $t1, $t1, 0x7
    ctx->pc = 0x22d500u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)7);
    // 0x22d504: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D504u;
    {
        const bool branch_taken_0x22d504 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D504u;
            // 0x22d508: 0xc93023  subu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d504) {
            ctx->pc = 0x22D51Cu;
            goto label_22d51c;
        }
    }
    ctx->pc = 0x22D50Cu;
    // 0x22d50c: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x22d50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x22d510: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x22d510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x22d514: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x22d514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22d518: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x22d518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_22d51c:
    // 0x22d51c: 0x15400015  bnez        $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x22D51Cu;
    {
        const bool branch_taken_0x22d51c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D51Cu;
            // 0x22d520: 0x30890008  andi        $t1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d51c) {
            ctx->pc = 0x22D574u;
            goto label_22d574;
        }
    }
    ctx->pc = 0x22D524u;
    // 0x22d524: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D524u;
    {
        const bool branch_taken_0x22d524 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d524) {
            ctx->pc = 0x22D540u;
            goto label_22d540;
        }
    }
    ctx->pc = 0x22D52Cu;
    // 0x22d52c: 0xdcaf0000  ld          $t7, 0x0($a1)
    ctx->pc = 0x22d52cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22d530: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x22d530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x22d534: 0xfc8f0000  sd          $t7, 0x0($a0)
    ctx->pc = 0x22d534u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 15));
    // 0x22d538: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x22d538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22d53c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x22d53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_22d540:
    // 0x22d540: 0x24caffe0  addiu       $t2, $a2, -0x20
    ctx->pc = 0x22d540u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x22d544: 0x540000b  bltz        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x22D544u;
    {
        const bool branch_taken_0x22d544 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x22d544) {
            ctx->pc = 0x22D574u;
            goto label_22d574;
        }
    }
    ctx->pc = 0x22D54Cu;
label_22d54c:
    // 0x22d54c: 0x78af0000  lq          $t7, 0x0($a1)
    ctx->pc = 0x22d54cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22d550: 0x254affe0  addiu       $t2, $t2, -0x20
    ctx->pc = 0x22d550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x22d554: 0x78ae0010  lq          $t6, 0x10($a1)
    ctx->pc = 0x22d554u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22d558: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x22d558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x22d55c: 0x7c8f0000  sq          $t7, 0x0($a0)
    ctx->pc = 0x22d55cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 15));
    // 0x22d560: 0x7c8e0010  sq          $t6, 0x10($a0)
    ctx->pc = 0x22d560u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 14));
    // 0x22d564: 0x541fff9  bgez        $t2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22D564u;
    {
        const bool branch_taken_0x22d564 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x22D568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D564u;
            // 0x22d568: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d564) {
            ctx->pc = 0x22D54Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d54c;
        }
    }
    ctx->pc = 0x22D56Cu;
    // 0x22d56c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x22D56Cu;
    {
        const bool branch_taken_0x22d56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D56Cu;
            // 0x22d570: 0x25460020  addiu       $a2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d56c) {
            ctx->pc = 0x22D600u;
            goto label_22d600;
        }
    }
    ctx->pc = 0x22D574u;
label_22d574:
    // 0x22d574: 0x24cafff0  addiu       $t2, $a2, -0x10
    ctx->pc = 0x22d574u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_22d578:
    // 0x22d578: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x22d578u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22d57c: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x22d57cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x22d580: 0xdca90008  ld          $t1, 0x8($a1)
    ctx->pc = 0x22d580u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22d584: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x22d584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x22d588: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x22d588u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x22d58c: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x22d58cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x22d590: 0x541fff9  bgez        $t2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22D590u;
    {
        const bool branch_taken_0x22d590 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x22D594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D590u;
            // 0x22d594: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d590) {
            ctx->pc = 0x22D578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d578;
        }
    }
    ctx->pc = 0x22D598u;
    // 0x22d598: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x22D598u;
    {
        const bool branch_taken_0x22d598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D598u;
            // 0x22d59c: 0x25460010  addiu       $a2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d598) {
            ctx->pc = 0x22D600u;
            goto label_22d600;
        }
    }
    ctx->pc = 0x22D5A0u;
label_22d5a0:
    // 0x22d5a0: 0x54823  negu        $t1, $a1
    ctx->pc = 0x22d5a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x22d5a4: 0x31290007  andi        $t1, $t1, 0x7
    ctx->pc = 0x22d5a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)7);
    // 0x22d5a8: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22D5A8u;
    {
        const bool branch_taken_0x22d5a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D5A8u;
            // 0x22d5ac: 0xc93023  subu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5a8) {
            ctx->pc = 0x22D5C8u;
            goto label_22d5c8;
        }
    }
    ctx->pc = 0x22D5B0u;
    // 0x22d5b0: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x22d5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x22d5b4: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x22d5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x22d5b8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x22d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x22d5bc: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x22d5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22d5c0: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x22d5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22d5c4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x22d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_22d5c8:
    // 0x22d5c8: 0x24cafff0  addiu       $t2, $a2, -0x10
    ctx->pc = 0x22d5c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_22d5cc:
    // 0x22d5cc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x22d5ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22d5d0: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x22d5d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x22d5d4: 0xdca90008  ld          $t1, 0x8($a1)
    ctx->pc = 0x22d5d4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22d5d8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x22d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x22d5dc: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x22d5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22d5e0: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x22d5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22d5e4: 0xb089000f  sdl         $t1, 0xF($a0)
    ctx->pc = 0x22d5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22d5e8: 0xb4890008  sdr         $t1, 0x8($a0)
    ctx->pc = 0x22d5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22d5ec: 0x541fff7  bgez        $t2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22D5ECu;
    {
        const bool branch_taken_0x22d5ec = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x22D5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D5ECu;
            // 0x22d5f0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5ec) {
            ctx->pc = 0x22D5CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d5cc;
        }
    }
    ctx->pc = 0x22D5F4u;
    // 0x22d5f4: 0x25460010  addiu       $a2, $t2, 0x10
    ctx->pc = 0x22d5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x22d5f8: 0x0  nop
    ctx->pc = 0x22d5f8u;
    // NOP
    // 0x22d5fc: 0x0  nop
    ctx->pc = 0x22d5fcu;
    // NOP
label_22d600:
    // 0x22d600: 0x24cafff8  addiu       $t2, $a2, -0x8
    ctx->pc = 0x22d600u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x22d604: 0x540000a  bltz        $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x22D604u;
    {
        const bool branch_taken_0x22d604 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x22d604) {
            ctx->pc = 0x22D630u;
            goto label_22d630;
        }
    }
    ctx->pc = 0x22D60Cu;
label_22d60c:
    // 0x22d60c: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x22d60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x22d610: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x22d610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x22d614: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x22d614u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x22d618: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x22d618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22d61c: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x22d61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22d620: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x22d620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22d624: 0x541fff9  bgez        $t2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22D624u;
    {
        const bool branch_taken_0x22d624 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x22D628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D624u;
            // 0x22d628: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d624) {
            ctx->pc = 0x22D60Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d60c;
        }
    }
    ctx->pc = 0x22D62Cu;
    // 0x22d62c: 0x25460008  addiu       $a2, $t2, 0x8
    ctx->pc = 0x22d62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_22d630:
    // 0x22d630: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x22D630u;
    {
        const bool branch_taken_0x22d630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d630) {
            ctx->pc = 0x22D6A8u;
            goto label_22d6a8;
        }
    }
    ctx->pc = 0x22D638u;
    // 0x22d638: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x22d638u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22d63c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d640: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x22D640u;
    {
        const bool branch_taken_0x22d640 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D640u;
            // 0x22d644: 0xa0880000  sb          $t0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d640) {
            ctx->pc = 0x22D6A8u;
            goto label_22d6a8;
        }
    }
    ctx->pc = 0x22D648u;
    // 0x22d648: 0x80a80001  lb          $t0, 0x1($a1)
    ctx->pc = 0x22d648u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x22d64c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d650: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x22D650u;
    {
        const bool branch_taken_0x22d650 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D650u;
            // 0x22d654: 0xa0880001  sb          $t0, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d650) {
            ctx->pc = 0x22D6A8u;
            goto label_22d6a8;
        }
    }
    ctx->pc = 0x22D658u;
    // 0x22d658: 0x80a80002  lb          $t0, 0x2($a1)
    ctx->pc = 0x22d658u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22d65c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d660: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x22D660u;
    {
        const bool branch_taken_0x22d660 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D660u;
            // 0x22d664: 0xa0880002  sb          $t0, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d660) {
            ctx->pc = 0x22D6A8u;
            goto label_22d6a8;
        }
    }
    ctx->pc = 0x22D668u;
    // 0x22d668: 0x80a80003  lb          $t0, 0x3($a1)
    ctx->pc = 0x22d668u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x22d66c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d670: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x22D670u;
    {
        const bool branch_taken_0x22d670 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D670u;
            // 0x22d674: 0xa0880003  sb          $t0, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d670) {
            ctx->pc = 0x22D6A8u;
            goto label_22d6a8;
        }
    }
    ctx->pc = 0x22D678u;
    // 0x22d678: 0x80a80004  lb          $t0, 0x4($a1)
    ctx->pc = 0x22d678u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22d67c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d680: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D680u;
    {
        const bool branch_taken_0x22d680 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D680u;
            // 0x22d684: 0xa0880004  sb          $t0, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d680) {
            ctx->pc = 0x22D6A8u;
            goto label_22d6a8;
        }
    }
    ctx->pc = 0x22D688u;
    // 0x22d688: 0x80a80005  lb          $t0, 0x5($a1)
    ctx->pc = 0x22d688u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x22d68c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d690: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D690u;
    {
        const bool branch_taken_0x22d690 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D690u;
            // 0x22d694: 0xa0880005  sb          $t0, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d690) {
            ctx->pc = 0x22D6A8u;
            goto label_22d6a8;
        }
    }
    ctx->pc = 0x22D698u;
    // 0x22d698: 0x80a80006  lb          $t0, 0x6($a1)
    ctx->pc = 0x22d698u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x22d69c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22d69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d6a0: 0x10c00001  beqz        $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x22D6A0u;
    {
        const bool branch_taken_0x22d6a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D6A0u;
            // 0x22d6a4: 0xa0880006  sb          $t0, 0x6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6a0) {
            ctx->pc = 0x22D6A8u;
            goto label_22d6a8;
        }
    }
    ctx->pc = 0x22D6A8u;
label_22d6a8:
    // 0x22d6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22D6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D6B0u;
    ctx->pc = 0x22d6b0u;
}
