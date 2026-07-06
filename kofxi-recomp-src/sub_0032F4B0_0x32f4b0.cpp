#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032F4B0
// Address: 0x32f4b0 - 0x32f6e0
void sub_0032F4B0_0x32f4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F4B0_0x32f4b0");
#endif

    switch (ctx->pc) {
        case 0x32f5dcu: goto label_32f5dc;
        case 0x32f600u: goto label_32f600;
        case 0x32f624u: goto label_32f624;
        case 0x32f648u: goto label_32f648;
        case 0x32f66cu: goto label_32f66c;
        case 0x32f690u: goto label_32f690;
        case 0x32f6b0u: goto label_32f6b0;
        case 0x32f6d4u: goto label_32f6d4;
        default: break;
    }

    ctx->pc = 0x32f4b0u;

    // 0x32f4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32f4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32f4b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32f4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32f4b8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x32f4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32f4bc: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x32f4bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32f4c0: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x32f4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32f4c4: 0x9486000c  lhu         $a2, 0xC($a0)
    ctx->pc = 0x32f4c4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32f4c8: 0xc482006c  lwc1        $f2, 0x6C($a0)
    ctx->pc = 0x32f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32f4cc: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x32f4ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x32f4d0: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x32f4d0u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f4d4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x32f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32f4d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32f4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32f4dc: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x32f4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x32f4e0: 0x358c0  sll         $t3, $v1, 3
    ctx->pc = 0x32f4e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32f4e4: 0x90890070  lbu         $t1, 0x70($a0)
    ctx->pc = 0x32f4e4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x32f4e8: 0x31230002  andi        $v1, $t1, 0x2
    ctx->pc = 0x32f4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x32f4ec: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x32f4ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x32f4f0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x32f4f0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f4f4: 0x0  nop
    ctx->pc = 0x32f4f4u;
    // NOP
    // 0x32f4f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32f4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32f4fc: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x32f4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x32f500: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32f500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32f504: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x32f504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x32f508: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x32f508u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f50c: 0x0  nop
    ctx->pc = 0x32f50cu;
    // NOP
    // 0x32f510: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32f510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32f514: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32f514u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f518: 0x0  nop
    ctx->pc = 0x32f518u;
    // NOP
    // 0x32f51c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32f51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32f520: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x32f520u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x32f524: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x32f524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x32f528: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32f528u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32f52c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x32f52cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x32f530: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32F530u;
    {
        const bool branch_taken_0x32f530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f530) {
            ctx->pc = 0x32F534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F530u;
            // 0x32f534: 0x85100  sll         $t2, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F548u;
            goto label_32f548;
        }
    }
    ctx->pc = 0x32F538u;
    // 0x32f538: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x32f538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x32f53c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32f53cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f540: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32F540u;
    {
        const bool branch_taken_0x32f540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F540u;
            // 0x32f544: 0x2468fff8  addiu       $t0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f540) {
            ctx->pc = 0x32F54Cu;
            goto label_32f54c;
        }
    }
    ctx->pc = 0x32F548u;
label_32f548:
    // 0x32f548: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x32f548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_32f54c:
    // 0x32f54c: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x32f54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x32f550: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32F550u;
    {
        const bool branch_taken_0x32f550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f550) {
            ctx->pc = 0x32F554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F550u;
            // 0x32f554: 0xb5900  sll         $t3, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F568u;
            goto label_32f568;
        }
    }
    ctx->pc = 0x32F558u;
    // 0x32f558: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x32f558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x32f55c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32f55cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f560: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32F560u;
    {
        const bool branch_taken_0x32f560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F560u;
            // 0x32f564: 0x2469fff8  addiu       $t1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f560) {
            ctx->pc = 0x32F56Cu;
            goto label_32f56c;
        }
    }
    ctx->pc = 0x32F568u;
label_32f568:
    // 0x32f568: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x32f568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_32f56c:
    // 0x32f56c: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x32f56cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x32f570: 0x240d2000  addiu       $t5, $zero, 0x2000
    ctx->pc = 0x32f570u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x32f574: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x32f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x32f578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32f57c: 0x148d004e  bne         $a0, $t5, . + 4 + (0x4E << 2)
    ctx->pc = 0x32F57Cu;
    {
        const bool branch_taken_0x32f57c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 13));
        ctx->pc = 0x32F580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F57Cu;
            // 0x32f580: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f57c) {
            ctx->pc = 0x32F6B8u;
            goto label_32f6b8;
        }
    }
    ctx->pc = 0x32F584u;
    // 0x32f584: 0x28640080  slti        $a0, $v1, 0x80
    ctx->pc = 0x32f584u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x32f588: 0x54800043  bnel        $a0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x32F588u;
    {
        const bool branch_taken_0x32f588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f588) {
            ctx->pc = 0x32F58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F588u;
            // 0x32f58c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F698u;
            goto label_32f698;
        }
    }
    ctx->pc = 0x32F590u;
    // 0x32f590: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x32f590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x32f594: 0x9084b281  lbu         $a0, -0x4D7F($a0)
    ctx->pc = 0x32f594u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947457)));
    // 0x32f598: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x32f598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x32f59c: 0x5020004e  beql        $at, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x32F59Cu;
    {
        const bool branch_taken_0x32f59c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f59c) {
            ctx->pc = 0x32F5A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F59Cu;
            // 0x32f5a0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F6D8u;
            goto label_32f6d8;
        }
    }
    ctx->pc = 0x32F5A4u;
    // 0x32f5a4: 0x3c0d0040  lui         $t5, 0x40
    ctx->pc = 0x32f5a4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)64 << 16));
    // 0x32f5a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32f5ac: 0x25ad4630  addiu       $t5, $t5, 0x4630
    ctx->pc = 0x32f5acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 17968));
    // 0x32f5b0: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x32f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x32f5b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x32f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32f5b8: 0x800008  jr          $a0
    ctx->pc = 0x32F5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x32F5C0u: goto label_32f5c0;
            case 0x32F5E4u: goto label_32f5e4;
            case 0x32F608u: goto label_32f608;
            case 0x32F62Cu: goto label_32f62c;
            case 0x32F650u: goto label_32f650;
            case 0x32F674u: goto label_32f674;
            default: break;
        }
        return;
    }
    ctx->pc = 0x32F5C0u;
label_32f5c0:
    // 0x32f5c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32f5c4: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x32f5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f5c8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32f5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32f5cc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32f5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32f5d0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x32f5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x32f5d4: 0xc0cb83c  jal         func_32E0F0
    ctx->pc = 0x32F5D4u;
    SET_GPR_U32(ctx, 31, 0x32F5DCu);
    ctx->pc = 0x32F5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F5D4u;
            // 0x32f5d8: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32E0F0u;
    if (runtime->hasFunction(0x32E0F0u)) {
        auto targetFn = runtime->lookupFunction(0x32E0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F5DCu; }
        if (ctx->pc != 0x32F5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E0F0_0x32e0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F5DCu; }
        if (ctx->pc != 0x32F5DCu) { return; }
    }
    ctx->pc = 0x32F5DCu;
label_32f5dc:
    // 0x32f5dc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x32F5DCu;
    {
        const bool branch_taken_0x32f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f5dc) {
            ctx->pc = 0x32F6D4u;
            goto label_32f6d4;
        }
    }
    ctx->pc = 0x32F5E4u;
label_32f5e4:
    // 0x32f5e4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32f5e8: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x32f5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f5ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32f5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32f5f0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32f5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32f5f4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x32f5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x32f5f8: 0xc0cb8d8  jal         func_32E360
    ctx->pc = 0x32F5F8u;
    SET_GPR_U32(ctx, 31, 0x32F600u);
    ctx->pc = 0x32F5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F5F8u;
            // 0x32f5fc: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32E360u;
    if (runtime->hasFunction(0x32E360u)) {
        auto targetFn = runtime->lookupFunction(0x32E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F600u; }
        if (ctx->pc != 0x32F600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E360_0x32e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F600u; }
        if (ctx->pc != 0x32F600u) { return; }
    }
    ctx->pc = 0x32F600u;
label_32f600:
    // 0x32f600: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x32F600u;
    {
        const bool branch_taken_0x32f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f600) {
            ctx->pc = 0x32F6D4u;
            goto label_32f6d4;
        }
    }
    ctx->pc = 0x32F608u;
label_32f608:
    // 0x32f608: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32f608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32f60c: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x32f60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f610: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32f610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32f614: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32f614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32f618: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x32f618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x32f61c: 0xc0cb978  jal         func_32E5E0
    ctx->pc = 0x32F61Cu;
    SET_GPR_U32(ctx, 31, 0x32F624u);
    ctx->pc = 0x32F620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F61Cu;
            // 0x32f620: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32E5E0u;
    if (runtime->hasFunction(0x32E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x32E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F624u; }
        if (ctx->pc != 0x32F624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E5E0_0x32e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F624u; }
        if (ctx->pc != 0x32F624u) { return; }
    }
    ctx->pc = 0x32F624u;
label_32f624:
    // 0x32f624: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x32F624u;
    {
        const bool branch_taken_0x32f624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f624) {
            ctx->pc = 0x32F6D4u;
            goto label_32f6d4;
        }
    }
    ctx->pc = 0x32F62Cu;
label_32f62c:
    // 0x32f62c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32f630: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x32f630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f634: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32f634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32f638: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32f638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32f63c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x32f63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x32f640: 0xc0cba84  jal         func_32EA10
    ctx->pc = 0x32F640u;
    SET_GPR_U32(ctx, 31, 0x32F648u);
    ctx->pc = 0x32F644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F640u;
            // 0x32f644: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32EA10u;
    if (runtime->hasFunction(0x32EA10u)) {
        auto targetFn = runtime->lookupFunction(0x32EA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F648u; }
        if (ctx->pc != 0x32F648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032EA10_0x32ea10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F648u; }
        if (ctx->pc != 0x32F648u) { return; }
    }
    ctx->pc = 0x32F648u;
label_32f648:
    // 0x32f648: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x32F648u;
    {
        const bool branch_taken_0x32f648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f648) {
            ctx->pc = 0x32F6D4u;
            goto label_32f6d4;
        }
    }
    ctx->pc = 0x32F650u;
label_32f650:
    // 0x32f650: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32f654: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x32f654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f658: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32f658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32f65c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32f65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32f660: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x32f660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x32f664: 0xc0cbb8c  jal         func_32EE30
    ctx->pc = 0x32F664u;
    SET_GPR_U32(ctx, 31, 0x32F66Cu);
    ctx->pc = 0x32F668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F664u;
            // 0x32f668: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32EE30u;
    if (runtime->hasFunction(0x32EE30u)) {
        auto targetFn = runtime->lookupFunction(0x32EE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F66Cu; }
        if (ctx->pc != 0x32F66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032EE30_0x32ee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F66Cu; }
        if (ctx->pc != 0x32F66Cu) { return; }
    }
    ctx->pc = 0x32F66Cu;
label_32f66c:
    // 0x32f66c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x32F66Cu;
    {
        const bool branch_taken_0x32f66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f66c) {
            ctx->pc = 0x32F6D4u;
            goto label_32f6d4;
        }
    }
    ctx->pc = 0x32F674u;
label_32f674:
    // 0x32f674: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32f678: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x32f678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f67c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32f67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32f680: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32f680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32f684: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x32f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x32f688: 0xc0cbc94  jal         func_32F250
    ctx->pc = 0x32F688u;
    SET_GPR_U32(ctx, 31, 0x32F690u);
    ctx->pc = 0x32F68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F688u;
            // 0x32f68c: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32F250u;
    if (runtime->hasFunction(0x32F250u)) {
        auto targetFn = runtime->lookupFunction(0x32F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F690u; }
        if (ctx->pc != 0x32F690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032F250_0x32f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F690u; }
        if (ctx->pc != 0x32F690u) { return; }
    }
    ctx->pc = 0x32F690u;
label_32f690:
    // 0x32f690: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32F690u;
    {
        const bool branch_taken_0x32f690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f690) {
            ctx->pc = 0x32F6D4u;
            goto label_32f6d4;
        }
    }
    ctx->pc = 0x32F698u;
label_32f698:
    // 0x32f698: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x32f698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f69c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32f69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32f6a0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32f6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32f6a4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x32f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x32f6a8: 0xc0cb83c  jal         func_32E0F0
    ctx->pc = 0x32F6A8u;
    SET_GPR_U32(ctx, 31, 0x32F6B0u);
    ctx->pc = 0x32F6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F6A8u;
            // 0x32f6ac: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32E0F0u;
    if (runtime->hasFunction(0x32E0F0u)) {
        auto targetFn = runtime->lookupFunction(0x32E0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F6B0u; }
        if (ctx->pc != 0x32F6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E0F0_0x32e0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F6B0u; }
        if (ctx->pc != 0x32F6B0u) { return; }
    }
    ctx->pc = 0x32F6B0u;
label_32f6b0:
    // 0x32f6b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32F6B0u;
    {
        const bool branch_taken_0x32f6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f6b0) {
            ctx->pc = 0x32F6D4u;
            goto label_32f6d4;
        }
    }
    ctx->pc = 0x32F6B8u;
label_32f6b8:
    // 0x32f6b8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32f6bc: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x32f6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f6c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32f6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32f6c4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32f6c8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x32f6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x32f6cc: 0xc0cbc94  jal         func_32F250
    ctx->pc = 0x32F6CCu;
    SET_GPR_U32(ctx, 31, 0x32F6D4u);
    ctx->pc = 0x32F6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F6CCu;
            // 0x32f6d0: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32F250u;
    if (runtime->hasFunction(0x32F250u)) {
        auto targetFn = runtime->lookupFunction(0x32F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F6D4u; }
        if (ctx->pc != 0x32F6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032F250_0x32f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F6D4u; }
        if (ctx->pc != 0x32F6D4u) { return; }
    }
    ctx->pc = 0x32F6D4u;
label_32f6d4:
    // 0x32f6d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32f6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32f6d8:
    // 0x32f6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x32F6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F6D8u;
            // 0x32f6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32F6E0u;
    ctx->pc = 0x32f6e0u;
}
