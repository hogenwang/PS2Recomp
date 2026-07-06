#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031C510
// Address: 0x31c510 - 0x31c880
void sub_0031C510_0x31c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C510_0x31c510");
#endif

    switch (ctx->pc) {
        case 0x31c730u: goto label_31c730;
        case 0x31c834u: goto label_31c834;
        default: break;
    }

    ctx->pc = 0x31c510u;

    // 0x31c510: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x31c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x31c514: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31c514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31c518: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x31c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x31c51c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x31c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x31c520: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x31c520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x31c524: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x31c524u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c528: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x31c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x31c52c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x31c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x31c530: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x31c530u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c534: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31c534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31c538: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31c53c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31c53cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c540: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31c544: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x31c544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c548: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31c54c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x31c54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c550: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31c554: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x31c554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c558: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x31c558u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31c55c: 0x8fb700d8  lw          $s7, 0xD8($sp)
    ctx->pc = 0x31c55cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x31c560: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31c560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31c564: 0xa3a900cf  sb          $t1, 0xCF($sp)
    ctx->pc = 0x31c564u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 9));
    // 0x31c568: 0x8c6329f0  lw          $v1, 0x29F0($v1)
    ctx->pc = 0x31c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10736)));
    // 0x31c56c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x31c56cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x31c570: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x31c570u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x31c574: 0x146000b4  bnez        $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x31C574u;
    {
        const bool branch_taken_0x31c574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C574u;
            // 0x31c578: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c574) {
            ctx->pc = 0x31C848u;
            goto label_31c848;
        }
    }
    ctx->pc = 0x31C57Cu;
    // 0x31c57c: 0x520000b3  beql        $s0, $zero, . + 4 + (0xB3 << 2)
    ctx->pc = 0x31C57Cu;
    {
        const bool branch_taken_0x31c57c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c57c) {
            ctx->pc = 0x31C580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31C57Cu;
            // 0x31c580: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31C84Cu;
            goto label_31c84c;
        }
    }
    ctx->pc = 0x31C584u;
    // 0x31c584: 0x12c000b0  beqz        $s6, . + 4 + (0xB0 << 2)
    ctx->pc = 0x31C584u;
    {
        const bool branch_taken_0x31c584 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c584) {
            ctx->pc = 0x31C848u;
            goto label_31c848;
        }
    }
    ctx->pc = 0x31C58Cu;
    // 0x31c58c: 0x124000ae  beqz        $s2, . + 4 + (0xAE << 2)
    ctx->pc = 0x31C58Cu;
    {
        const bool branch_taken_0x31c58c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c58c) {
            ctx->pc = 0x31C848u;
            goto label_31c848;
        }
    }
    ctx->pc = 0x31C594u;
    // 0x31c594: 0x122000ac  beqz        $s1, . + 4 + (0xAC << 2)
    ctx->pc = 0x31C594u;
    {
        const bool branch_taken_0x31c594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c594) {
            ctx->pc = 0x31C848u;
            goto label_31c848;
        }
    }
    ctx->pc = 0x31C59Cu;
    // 0x31c59c: 0x2a810281  slti        $at, $s4, 0x281
    ctx->pc = 0x31c59cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x31c5a0: 0x102000a9  beqz        $at, . + 4 + (0xA9 << 2)
    ctx->pc = 0x31C5A0u;
    {
        const bool branch_taken_0x31c5a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c5a0) {
            ctx->pc = 0x31C848u;
            goto label_31c848;
        }
    }
    ctx->pc = 0x31C5A8u;
    // 0x31c5a8: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x31c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x31c5ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c5acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c5b0: 0x0  nop
    ctx->pc = 0x31c5b0u;
    // NOP
    // 0x31c5b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31c5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31c5b8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x31c5b8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c5bc: 0x0  nop
    ctx->pc = 0x31c5bcu;
    // NOP
    // 0x31c5c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c5c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c5c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31c5c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31c5c8: 0x0  nop
    ctx->pc = 0x31c5c8u;
    // NOP
    // 0x31c5cc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x31c5ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31c5d0: 0x4601a81c  madd.s      $f0, $f21, $f1
    ctx->pc = 0x31c5d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[1]));
    // 0x31c5d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c5d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c5d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31c5d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31c5dc: 0x0  nop
    ctx->pc = 0x31c5dcu;
    // NOP
    // 0x31c5e0: 0x4600099  bltz        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x31C5E0u;
    {
        const bool branch_taken_0x31c5e0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31c5e0) {
            ctx->pc = 0x31C848u;
            goto label_31c848;
        }
    }
    ctx->pc = 0x31C5E8u;
    // 0x31c5e8: 0x2a610281  slti        $at, $s3, 0x281
    ctx->pc = 0x31c5e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x31c5ec: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x31C5ECu;
    {
        const bool branch_taken_0x31c5ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c5ec) {
            ctx->pc = 0x31C848u;
            goto label_31c848;
        }
    }
    ctx->pc = 0x31C5F4u;
    // 0x31c5f4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x31c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x31c5f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c5f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c5fc: 0x0  nop
    ctx->pc = 0x31c5fcu;
    // NOP
    // 0x31c600: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31c600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31c604: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x31c604u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c608: 0x0  nop
    ctx->pc = 0x31c608u;
    // NOP
    // 0x31c60c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c60cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c610: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x31c610u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31c614: 0x4601a01c  madd.s      $f0, $f20, $f1
    ctx->pc = 0x31c614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
    // 0x31c618: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c618u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c61c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31c61cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31c620: 0x0  nop
    ctx->pc = 0x31c620u;
    // NOP
    // 0x31c624: 0x4600088  bltz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x31C624u;
    {
        const bool branch_taken_0x31c624 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31c624) {
            ctx->pc = 0x31C848u;
            goto label_31c848;
        }
    }
    ctx->pc = 0x31C62Cu;
    // 0x31c62c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31c630: 0x8c4229e0  lw          $v0, 0x29E0($v0)
    ctx->pc = 0x31c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10720)));
    // 0x31c634: 0x2842018f  slti        $v0, $v0, 0x18F
    ctx->pc = 0x31c634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)399) ? 1 : 0);
    // 0x31c638: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C638u;
    {
        const bool branch_taken_0x31c638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c638) {
            ctx->pc = 0x31C64Cu;
            goto label_31c64c;
        }
    }
    ctx->pc = 0x31C640u;
    // 0x31c640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c644: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x31c644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31c648: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x31c648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31c64c:
    // 0x31c64c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31c650: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x31c650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
    // 0x31c654: 0x8c4729e0  lw          $a3, 0x29E0($v0)
    ctx->pc = 0x31c654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10720)));
    // 0x31c658: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31c658u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c65c: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x31c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x31c660: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31c660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x31c664: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x31c664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x31c668: 0x24a54df0  addiu       $a1, $a1, 0x4DF0
    ctx->pc = 0x31c668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19952));
    // 0x31c66c: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x31c66cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x31c670: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31c670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31c674: 0x873023  subu        $a2, $a0, $a3
    ctx->pc = 0x31c674u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x31c678: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x31c678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31c67c: 0xac4429e0  sw          $a0, 0x29E0($v0)
    ctx->pc = 0x31c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10720), GPR_U32(ctx, 4));
    // 0x31c680: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x31c680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31c684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c688: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x31c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31c68c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31c690: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31c690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c694: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31C694u;
    {
        const bool branch_taken_0x31c694 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31C698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C694u;
            // 0x31c698: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c694) {
            ctx->pc = 0x31C6ACu;
            goto label_31c6ac;
        }
    }
    ctx->pc = 0x31C69Cu;
    // 0x31c69c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c69cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c6a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31c6a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31c6a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31C6A4u;
    {
        const bool branch_taken_0x31c6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C6A4u;
            // 0x31c6a8: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6a4) {
            ctx->pc = 0x31C6C8u;
            goto label_31c6c8;
        }
    }
    ctx->pc = 0x31C6ACu;
label_31c6ac:
    // 0x31c6ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31c6acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31c6b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31c6b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c6b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c6b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31c6b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31c6bc: 0x0  nop
    ctx->pc = 0x31c6bcu;
    // NOP
    // 0x31c6c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31c6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31c6c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_31c6c8:
    // 0x31c6c8: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x31c6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31c6cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31c6d0: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x31c6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31c6d4: 0xaea20110  sw          $v0, 0x110($s5)
    ctx->pc = 0x31c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 272), GPR_U32(ctx, 2));
    // 0x31c6d8: 0x26a40024  addiu       $a0, $s5, 0x24
    ctx->pc = 0x31c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    // 0x31c6dc: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x31c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x31c6e0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x31c6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6e4: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x31c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
    // 0x31c6e8: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x31c6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x31c6ec: 0xaebe0008  sw          $fp, 0x8($s5)
    ctx->pc = 0x31c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 30));
    // 0x31c6f0: 0xe6b50068  swc1        $f21, 0x68($s5)
    ctx->pc = 0x31c6f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 104), bits); }
    // 0x31c6f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x31c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x31c6f8: 0xe6b4006c  swc1        $f20, 0x6C($s5)
    ctx->pc = 0x31c6f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
    // 0x31c6fc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x31c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x31c700: 0xa6b2000c  sh          $s2, 0xC($s5)
    ctx->pc = 0x31c700u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 12), (uint16_t)GPR_U32(ctx, 18));
    // 0x31c704: 0xa6b1000e  sh          $s1, 0xE($s5)
    ctx->pc = 0x31c704u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 14), (uint16_t)GPR_U32(ctx, 17));
    // 0x31c708: 0xaeb00010  sw          $s0, 0x10($s5)
    ctx->pc = 0x31c708u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
    // 0x31c70c: 0xa6a80014  sh          $t0, 0x14($s5)
    ctx->pc = 0x31c70cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 8));
    // 0x31c710: 0xaea70018  sw          $a3, 0x18($s5)
    ctx->pc = 0x31c710u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 7));
    // 0x31c714: 0xaeb6001c  sw          $s6, 0x1C($s5)
    ctx->pc = 0x31c714u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 22));
    // 0x31c718: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x31c718u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
    // 0x31c71c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x31c71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x31c720: 0x93a200cf  lbu         $v0, 0xCF($sp)
    ctx->pc = 0x31c720u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
    // 0x31c724: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x31c724u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x31c728: 0xc049c48  jal         func_127120
    ctx->pc = 0x31C728u;
    SET_GPR_U32(ctx, 31, 0x31C730u);
    ctx->pc = 0x31C72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C728u;
            // 0x31c72c: 0xa2a20070  sb          $v0, 0x70($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C730u; }
        if (ctx->pc != 0x31C730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C730u; }
        if (ctx->pc != 0x31C730u) { return; }
    }
    ctx->pc = 0x31C730u;
label_31c730:
    // 0x31c730: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x31c730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31c734: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x31c734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x31c738: 0x2463fa10  addiu       $v1, $v1, -0x5F0
    ctx->pc = 0x31c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965776));
    // 0x31c73c: 0xaea40060  sw          $a0, 0x60($s5)
    ctx->pc = 0x31c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 4));
    // 0x31c740: 0xaea30114  sw          $v1, 0x114($s5)
    ctx->pc = 0x31c740u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 3));
    // 0x31c744: 0x92e30036  lbu         $v1, 0x36($s7)
    ctx->pc = 0x31c744u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 54)));
    // 0x31c748: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x31C748u;
    {
        const bool branch_taken_0x31c748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c748) {
            ctx->pc = 0x31C848u;
            goto label_31c848;
        }
    }
    ctx->pc = 0x31C750u;
    // 0x31c750: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31c750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31c754: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31c754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x31c758: 0x8c4629e0  lw          $a2, 0x29E0($v0)
    ctx->pc = 0x31c758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10720)));
    // 0x31c75c: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x31c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
    // 0x31c760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c764: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x31c764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x31c768: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x31c768u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31c76c: 0x24a54df0  addiu       $a1, $a1, 0x4DF0
    ctx->pc = 0x31c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19952));
    // 0x31c770: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x31c770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x31c774: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31c774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31c778: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x31c778u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31c77c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x31c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31c780: 0xac4329e0  sw          $v1, 0x29E0($v0)
    ctx->pc = 0x31c780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10720), GPR_U32(ctx, 3));
    // 0x31c784: 0xc6e10038  lwc1        $f1, 0x38($s7)
    ctx->pc = 0x31c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c788: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x31c788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31c78c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31c790: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31c790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31c794: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31c794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31c798: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31c798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c79c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31C79Cu;
    {
        const bool branch_taken_0x31c79c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31C7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C79Cu;
            // 0x31c7a0: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c79c) {
            ctx->pc = 0x31C7B4u;
            goto label_31c7b4;
        }
    }
    ctx->pc = 0x31C7A4u;
    // 0x31c7a4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c7a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c7a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31c7a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31c7ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31C7ACu;
    {
        const bool branch_taken_0x31c7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C7ACu;
            // 0x31c7b0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7ac) {
            ctx->pc = 0x31C7D0u;
            goto label_31c7d0;
        }
    }
    ctx->pc = 0x31C7B4u;
label_31c7b4:
    // 0x31c7b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31c7b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31c7b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31c7bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c7bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c7c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31c7c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31c7c4: 0x0  nop
    ctx->pc = 0x31c7c4u;
    // NOP
    // 0x31c7c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31c7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31c7cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_31c7d0:
    // 0x31c7d0: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x31c7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31c7d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31c7d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x31c7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c7dc: 0xaea20110  sw          $v0, 0x110($s5)
    ctx->pc = 0x31c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 272), GPR_U32(ctx, 2));
    // 0x31c7e0: 0x26a40024  addiu       $a0, $s5, 0x24
    ctx->pc = 0x31c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    // 0x31c7e4: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x31c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x31c7e8: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x31c7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x31c7ec: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x31c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
    // 0x31c7f0: 0xaebe0008  sw          $fp, 0x8($s5)
    ctx->pc = 0x31c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 30));
    // 0x31c7f4: 0xe6b50068  swc1        $f21, 0x68($s5)
    ctx->pc = 0x31c7f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 104), bits); }
    // 0x31c7f8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x31c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31c7fc: 0xe6b4006c  swc1        $f20, 0x6C($s5)
    ctx->pc = 0x31c7fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
    // 0x31c800: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x31c800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x31c804: 0xa6b2000c  sh          $s2, 0xC($s5)
    ctx->pc = 0x31c804u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 12), (uint16_t)GPR_U32(ctx, 18));
    // 0x31c808: 0xa6b1000e  sh          $s1, 0xE($s5)
    ctx->pc = 0x31c808u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 14), (uint16_t)GPR_U32(ctx, 17));
    // 0x31c80c: 0xaeb00010  sw          $s0, 0x10($s5)
    ctx->pc = 0x31c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
    // 0x31c810: 0xa6a70014  sh          $a3, 0x14($s5)
    ctx->pc = 0x31c810u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x31c814: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x31c814u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x31c818: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x31c818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31c81c: 0xaeb6001c  sw          $s6, 0x1C($s5)
    ctx->pc = 0x31c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 22));
    // 0x31c820: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x31c820u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
    // 0x31c824: 0x93a200cf  lbu         $v0, 0xCF($sp)
    ctx->pc = 0x31c824u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
    // 0x31c828: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x31c828u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x31c82c: 0xc049c48  jal         func_127120
    ctx->pc = 0x31C82Cu;
    SET_GPR_U32(ctx, 31, 0x31C834u);
    ctx->pc = 0x31C830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C82Cu;
            // 0x31c830: 0xa2a20070  sb          $v0, 0x70($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C834u; }
        if (ctx->pc != 0x31C834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C834u; }
        if (ctx->pc != 0x31C834u) { return; }
    }
    ctx->pc = 0x31C834u;
label_31c834:
    // 0x31c834: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x31c834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31c838: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x31c838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x31c83c: 0x2463fa80  addiu       $v1, $v1, -0x580
    ctx->pc = 0x31c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965888));
    // 0x31c840: 0xaea40060  sw          $a0, 0x60($s5)
    ctx->pc = 0x31c840u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 4));
    // 0x31c844: 0xaea30114  sw          $v1, 0x114($s5)
    ctx->pc = 0x31c844u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 3));
label_31c848:
    // 0x31c848: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x31c848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_31c84c:
    // 0x31c84c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x31c84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31c850: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x31c850u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31c854: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31c854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31c858: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x31c858u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31c85c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x31c85cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31c860: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x31c860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31c864: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31c864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c868: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31c868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c86c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31c86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c870: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31c870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31c874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c878: 0x3e00008  jr          $ra
    ctx->pc = 0x31C878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C878u;
            // 0x31c87c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31C880u;
    ctx->pc = 0x31c880u;
}
