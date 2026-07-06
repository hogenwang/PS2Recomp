#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014D7D0
// Address: 0x14d7d0 - 0x14dfb0
void sub_0014D7D0_0x14d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D7D0_0x14d7d0");
#endif

    switch (ctx->pc) {
        case 0x14d7e0u: goto label_14d7e0;
        case 0x14d830u: goto label_14d830;
        case 0x14d844u: goto label_14d844;
        case 0x14d900u: goto label_14d900;
        case 0x14d914u: goto label_14d914;
        case 0x14d9e0u: goto label_14d9e0;
        case 0x14da40u: goto label_14da40;
        case 0x14dab0u: goto label_14dab0;
        case 0x14dac8u: goto label_14dac8;
        case 0x14db80u: goto label_14db80;
        case 0x14dba4u: goto label_14dba4;
        case 0x14dbb4u: goto label_14dbb4;
        case 0x14dc50u: goto label_14dc50;
        case 0x14dc70u: goto label_14dc70;
        case 0x14dda0u: goto label_14dda0;
        case 0x14ddc0u: goto label_14ddc0;
        case 0x14ddf0u: goto label_14ddf0;
        case 0x14de04u: goto label_14de04;
        case 0x14dea0u: goto label_14dea0;
        case 0x14deb4u: goto label_14deb4;
        case 0x14df50u: goto label_14df50;
        case 0x14df60u: goto label_14df60;
        case 0x14df84u: goto label_14df84;
        default: break;
    }

    ctx->pc = 0x14d7d0u;

    // 0x14d7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d7d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d7d8: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x14D7D8u;
    SET_GPR_U32(ctx, 31, 0x14D7E0u);
    ctx->pc = 0x12EFB0u;
    if (runtime->hasFunction(0x12EFB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D7E0u; }
        if (ctx->pc != 0x14D7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFB0_0x12efb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D7E0u; }
        if (ctx->pc != 0x14D7E0u) { return; }
    }
    ctx->pc = 0x14D7E0u;
label_14d7e0:
    // 0x14d7e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14d7e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14d7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d7e8: 0x0  nop
    ctx->pc = 0x14d7e8u;
    // NOP
    // 0x14d7ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14d7ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14d7f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14d7f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d7f4: 0x0  nop
    ctx->pc = 0x14d7f4u;
    // NOP
    // 0x14d7f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14d7f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d7fc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x14D7FCu;
    {
        const bool branch_taken_0x14d7fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d7fc) {
            ctx->pc = 0x14D800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D7FCu;
            // 0x14d800: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D80Cu;
            goto label_14d80c;
        }
    }
    ctx->pc = 0x14D804u;
    // 0x14d804: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x14d804u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x14d808: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14d808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14d80c:
    // 0x14d80c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14d80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d810: 0x0  nop
    ctx->pc = 0x14d810u;
    // NOP
    // 0x14d814: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14d814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d818: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x14D818u;
    {
        const bool branch_taken_0x14d818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d818) {
            ctx->pc = 0x14D81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D818u;
            // 0x14d81c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D828u;
            goto label_14d828;
        }
    }
    ctx->pc = 0x14D820u;
    // 0x14d820: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x14d820u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x14d824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d828:
    // 0x14d828: 0x3e00008  jr          $ra
    ctx->pc = 0x14D828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D828u;
            // 0x14d82c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D830u;
label_14d830:
    // 0x14d830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d83c: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x14D83Cu;
    SET_GPR_U32(ctx, 31, 0x14D844u);
    ctx->pc = 0x14D840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D83Cu;
            // 0x14d840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (runtime->hasFunction(0x19F230u)) {
        auto targetFn = runtime->lookupFunction(0x19F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D844u; }
        if (ctx->pc != 0x14D844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F230_0x19f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D844u; }
        if (ctx->pc != 0x14D844u) { return; }
    }
    ctx->pc = 0x14D844u;
label_14d844:
    // 0x14d844: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x14d844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x14d848: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14d848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14d84c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14d84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d850: 0x0  nop
    ctx->pc = 0x14d850u;
    // NOP
    // 0x14d854: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14d854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14d858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d85c: 0x0  nop
    ctx->pc = 0x14d85cu;
    // NOP
    // 0x14d860: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14d860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d864: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14D864u;
    {
        const bool branch_taken_0x14d864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d864) {
            ctx->pc = 0x14D868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D864u;
            // 0x14d868: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D87Cu;
            goto label_14d87c;
        }
    }
    ctx->pc = 0x14D86Cu;
    // 0x14d86c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d86cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d870: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14d870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14d874: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14D874u;
    {
        const bool branch_taken_0x14d874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D874u;
            // 0x14d878: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d874) {
            ctx->pc = 0x14D894u;
            goto label_14d894;
        }
    }
    ctx->pc = 0x14D87Cu;
label_14d87c:
    // 0x14d87c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14d880: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d884: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14d884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14d888: 0x0  nop
    ctx->pc = 0x14d888u;
    // NOP
    // 0x14d88c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14d88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14d890: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14d894:
    // 0x14d894: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14d898: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x14d898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x14d89c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D89Cu;
    {
        const bool branch_taken_0x14d89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d89c) {
            ctx->pc = 0x14D8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D89Cu;
            // 0x14d8a0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D8ACu;
            goto label_14d8ac;
        }
    }
    ctx->pc = 0x14D8A4u;
    // 0x14d8a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14d8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14d8ac:
    // 0x14d8ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d8b0: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D8B0u;
    {
        const bool branch_taken_0x14d8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d8b0) {
            ctx->pc = 0x14D8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D8B0u;
            // 0x14d8b4: 0x34620200  ori         $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D8D8u;
            goto label_14d8d8;
        }
    }
    ctx->pc = 0x14D8B8u;
    // 0x14d8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d8bc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D8BCu;
    {
        const bool branch_taken_0x14d8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d8bc) {
            ctx->pc = 0x14D8D4u;
            goto label_14d8d4;
        }
    }
    ctx->pc = 0x14D8C4u;
    // 0x14d8c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D8C4u;
    {
        const bool branch_taken_0x14d8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d8c4) {
            ctx->pc = 0x14D8D4u;
            goto label_14d8d4;
        }
    }
    ctx->pc = 0x14D8CCu;
    // 0x14d8cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14D8CCu;
    {
        const bool branch_taken_0x14d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D8CCu;
            // 0x14d8d0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8cc) {
            ctx->pc = 0x14D8E4u;
            goto label_14d8e4;
        }
    }
    ctx->pc = 0x14D8D4u;
label_14d8d4:
    // 0x14d8d4: 0x34620200  ori         $v0, $v1, 0x200
    ctx->pc = 0x14d8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_14d8d8:
    // 0x14d8d8: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x14d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x14d8dc: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x14d8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x14d8e0: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x14d8e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14d8e4:
    // 0x14d8e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14d8e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d8ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D8F0u;
            // 0x14d8f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D8F8u;
    // 0x14d8f8: 0x0  nop
    ctx->pc = 0x14d8f8u;
    // NOP
    // 0x14d8fc: 0x0  nop
    ctx->pc = 0x14d8fcu;
    // NOP
label_14d900:
    // 0x14d900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d90c: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x14D90Cu;
    SET_GPR_U32(ctx, 31, 0x14D914u);
    ctx->pc = 0x14D910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D90Cu;
            // 0x14d910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (runtime->hasFunction(0x19F230u)) {
        auto targetFn = runtime->lookupFunction(0x19F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D914u; }
        if (ctx->pc != 0x14D914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F230_0x19f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D914u; }
        if (ctx->pc != 0x14D914u) { return; }
    }
    ctx->pc = 0x14D914u;
label_14d914:
    // 0x14d914: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x14d914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x14d918: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14d918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14d91c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14d91cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d920: 0x0  nop
    ctx->pc = 0x14d920u;
    // NOP
    // 0x14d924: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14d924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14d928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d92c: 0x0  nop
    ctx->pc = 0x14d92cu;
    // NOP
    // 0x14d930: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14d930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d934: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14D934u;
    {
        const bool branch_taken_0x14d934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d934) {
            ctx->pc = 0x14D938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D934u;
            // 0x14d938: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D94Cu;
            goto label_14d94c;
        }
    }
    ctx->pc = 0x14D93Cu;
    // 0x14d93c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d93cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d940: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14d940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14d944: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14D944u;
    {
        const bool branch_taken_0x14d944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D944u;
            // 0x14d948: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d944) {
            ctx->pc = 0x14D964u;
            goto label_14d964;
        }
    }
    ctx->pc = 0x14D94Cu;
label_14d94c:
    // 0x14d94c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14d950: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d950u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d954: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14d954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14d958: 0x0  nop
    ctx->pc = 0x14d958u;
    // NOP
    // 0x14d95c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14d95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14d960: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14d964:
    // 0x14d964: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14d964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14d968: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x14d968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x14d96c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D96Cu;
    {
        const bool branch_taken_0x14d96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d96c) {
            ctx->pc = 0x14D970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D96Cu;
            // 0x14d970: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D97Cu;
            goto label_14d97c;
        }
    }
    ctx->pc = 0x14D974u;
    // 0x14d974: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14d974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d978: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x14d978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14d97c:
    // 0x14d97c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d980: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D980u;
    {
        const bool branch_taken_0x14d980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d980) {
            ctx->pc = 0x14D984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D980u;
            // 0x14d984: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D9A8u;
            goto label_14d9a8;
        }
    }
    ctx->pc = 0x14D988u;
    // 0x14d988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d98c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D98Cu;
    {
        const bool branch_taken_0x14d98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d98c) {
            ctx->pc = 0x14D9A4u;
            goto label_14d9a4;
        }
    }
    ctx->pc = 0x14D994u;
    // 0x14d994: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D994u;
    {
        const bool branch_taken_0x14d994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d994) {
            ctx->pc = 0x14D9A4u;
            goto label_14d9a4;
        }
    }
    ctx->pc = 0x14D99Cu;
    // 0x14d99c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14D99Cu;
    {
        const bool branch_taken_0x14d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D99Cu;
            // 0x14d9a0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d99c) {
            ctx->pc = 0x14D9C0u;
            goto label_14d9c0;
        }
    }
    ctx->pc = 0x14D9A4u;
label_14d9a4:
    // 0x14d9a4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14d9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14d9a8:
    // 0x14d9a8: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x14d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x14d9ac: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14d9b0: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x14d9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x14d9b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d9b8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x14d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x14d9bc: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x14d9bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14d9c0:
    // 0x14d9c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14d9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d9c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x14D9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9CCu;
            // 0x14d9d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D9D4u;
    // 0x14d9d4: 0x0  nop
    ctx->pc = 0x14d9d4u;
    // NOP
    // 0x14d9d8: 0x0  nop
    ctx->pc = 0x14d9d8u;
    // NOP
    // 0x14d9dc: 0x0  nop
    ctx->pc = 0x14d9dcu;
    // NOP
label_14d9e0:
    // 0x14d9e0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x14d9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14d9e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14d9e8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14D9E8u;
    {
        const bool branch_taken_0x14d9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9E8u;
            // 0x14d9ec: 0x6405002a  daddiu      $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)42);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9e8) {
            ctx->pc = 0x14DA18u;
            goto label_14da18;
        }
    }
    ctx->pc = 0x14D9F0u;
    // 0x14d9f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14d9f4: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D9F4u;
    {
        const bool branch_taken_0x14d9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d9f4) {
            ctx->pc = 0x14D9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9F4u;
            // 0x14d9f8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DA10u;
            goto label_14da10;
        }
    }
    ctx->pc = 0x14D9FCu;
    // 0x14d9fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14da00: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DA00u;
    {
        const bool branch_taken_0x14da00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14da00) {
            ctx->pc = 0x14DA04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA00u;
            // 0x14da04: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DA24u;
            goto label_14da24;
        }
    }
    ctx->pc = 0x14DA08u;
    // 0x14da08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA08u;
    {
        const bool branch_taken_0x14da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da08) {
            ctx->pc = 0x14DA20u;
            goto label_14da20;
        }
    }
    ctx->pc = 0x14DA10u;
label_14da10:
    // 0x14da10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA10u;
    {
        const bool branch_taken_0x14da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA10u;
            // 0x14da14: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da10) {
            ctx->pc = 0x14DA20u;
            goto label_14da20;
        }
    }
    ctx->pc = 0x14DA18u;
label_14da18:
    // 0x14da18: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x14da18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x14da1c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x14da1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14da20:
    // 0x14da20: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x14da20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_14da24:
    // 0x14da24: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x14da24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x14da28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14da28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14da2c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x14da2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x14da30: 0x3e00008  jr          $ra
    ctx->pc = 0x14DA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA30u;
            // 0x14da34: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DA38u;
    // 0x14da38: 0x0  nop
    ctx->pc = 0x14da38u;
    // NOP
    // 0x14da3c: 0x0  nop
    ctx->pc = 0x14da3cu;
    // NOP
label_14da40:
    // 0x14da40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14da44: 0x8c43048c  lw          $v1, 0x48C($v0)
    ctx->pc = 0x14da44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1164)));
    // 0x14da48: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x14da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x14da4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA4Cu;
    {
        const bool branch_taken_0x14da4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA4Cu;
            // 0x14da50: 0x64050021  daddiu      $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)33);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da4c) {
            ctx->pc = 0x14DA5Cu;
            goto label_14da5c;
        }
    }
    ctx->pc = 0x14DA54u;
    // 0x14da54: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14DA54u;
    {
        const bool branch_taken_0x14da54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA54u;
            // 0x14da58: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da54) {
            ctx->pc = 0x14DA94u;
            goto label_14da94;
        }
    }
    ctx->pc = 0x14DA5Cu;
label_14da5c:
    // 0x14da5c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x14da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x14da60: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA60u;
    {
        const bool branch_taken_0x14da60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da60) {
            ctx->pc = 0x14DA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA60u;
            // 0x14da64: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DA70u;
            goto label_14da70;
        }
    }
    ctx->pc = 0x14DA68u;
    // 0x14da68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14DA68u;
    {
        const bool branch_taken_0x14da68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA68u;
            // 0x14da6c: 0x64050020  daddiu      $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da68) {
            ctx->pc = 0x14DA90u;
            goto label_14da90;
        }
    }
    ctx->pc = 0x14DA70u;
label_14da70:
    // 0x14da70: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA70u;
    {
        const bool branch_taken_0x14da70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da70) {
            ctx->pc = 0x14DA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA70u;
            // 0x14da74: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DA80u;
            goto label_14da80;
        }
    }
    ctx->pc = 0x14DA78u;
    // 0x14da78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA78u;
    {
        const bool branch_taken_0x14da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da78) {
            ctx->pc = 0x14DA90u;
            goto label_14da90;
        }
    }
    ctx->pc = 0x14DA80u;
label_14da80:
    // 0x14da80: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA80u;
    {
        const bool branch_taken_0x14da80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da80) {
            ctx->pc = 0x14DA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA80u;
            // 0x14da84: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DA90u;
            goto label_14da90;
        }
    }
    ctx->pc = 0x14DA88u;
    // 0x14da88: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14DA88u;
    {
        const bool branch_taken_0x14da88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA88u;
            // 0x14da8c: 0x64050022  daddiu      $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)34);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da88) {
            ctx->pc = 0x14DA90u;
            goto label_14da90;
        }
    }
    ctx->pc = 0x14DA90u;
label_14da90:
    // 0x14da90: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x14da90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_14da94:
    // 0x14da94: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x14da94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x14da98: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14da98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14da9c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14da9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x14daa0: 0x3e00008  jr          $ra
    ctx->pc = 0x14DAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAA0u;
            // 0x14daa4: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DAA8u;
    // 0x14daa8: 0x0  nop
    ctx->pc = 0x14daa8u;
    // NOP
    // 0x14daac: 0x0  nop
    ctx->pc = 0x14daacu;
    // NOP
label_14dab0:
    // 0x14dab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14dab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14dab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14dabc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14dabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dac0: 0xc053560  jal         func_14D580
    ctx->pc = 0x14DAC0u;
    SET_GPR_U32(ctx, 31, 0x14DAC8u);
    ctx->pc = 0x14DAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAC0u;
            // 0x14dac4: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D580u;
    if (runtime->hasFunction(0x14D580u)) {
        auto targetFn = runtime->lookupFunction(0x14D580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAC8u; }
        if (ctx->pc != 0x14DAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D580_0x14d580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAC8u; }
        if (ctx->pc != 0x14DAC8u) { return; }
    }
    ctx->pc = 0x14DAC8u;
label_14dac8:
    // 0x14dac8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14dac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14dacc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x14daccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x14dad0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14dad4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DAD4u;
    {
        const bool branch_taken_0x14dad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14DAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAD4u;
            // 0x14dad8: 0x64050002  daddiu      $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dad4) {
            ctx->pc = 0x14DAF0u;
            goto label_14daf0;
        }
    }
    ctx->pc = 0x14DADCu;
    // 0x14dadc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14dae0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DAE0u;
    {
        const bool branch_taken_0x14dae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14dae0) {
            ctx->pc = 0x14DAF8u;
            goto label_14daf8;
        }
    }
    ctx->pc = 0x14DAE8u;
    // 0x14dae8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DAE8u;
    {
        const bool branch_taken_0x14dae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dae8) {
            ctx->pc = 0x14DAF8u;
            goto label_14daf8;
        }
    }
    ctx->pc = 0x14DAF0u;
label_14daf0:
    // 0x14daf0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14daf4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x14daf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14daf8:
    // 0x14daf8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DAF8u;
    {
        const bool branch_taken_0x14daf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14daf8) {
            ctx->pc = 0x14DAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAF8u;
            // 0x14dafc: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DB0Cu;
            goto label_14db0c;
        }
    }
    ctx->pc = 0x14DB00u;
    // 0x14db00: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x14db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14db04: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14db04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14db08: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x14db08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14db0c:
    // 0x14db0c: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x14DB0Cu;
    {
        const bool branch_taken_0x14db0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db0c) {
            ctx->pc = 0x14DB10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB0Cu;
            // 0x14db10: 0x2403f000  addiu       $v1, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DB60u;
            goto label_14db60;
        }
    }
    ctx->pc = 0x14DB14u;
    // 0x14db14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14db14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14db18: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14DB18u;
    {
        const bool branch_taken_0x14db18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14db18) {
            ctx->pc = 0x14DB1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB18u;
            // 0x14db1c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DB4Cu;
            goto label_14db4c;
        }
    }
    ctx->pc = 0x14DB20u;
    // 0x14db20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14db20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14db24: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DB24u;
    {
        const bool branch_taken_0x14db24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14db24) {
            ctx->pc = 0x14DB28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB24u;
            // 0x14db28: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DB34u;
            goto label_14db34;
        }
    }
    ctx->pc = 0x14DB2Cu;
    // 0x14db2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14DB2Cu;
    {
        const bool branch_taken_0x14db2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db2c) {
            ctx->pc = 0x14DB5Cu;
            goto label_14db5c;
        }
    }
    ctx->pc = 0x14DB34u;
label_14db34:
    // 0x14db34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14db38: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14db3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14db3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14db40: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x14db40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14db44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DB44u;
    {
        const bool branch_taken_0x14db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB44u;
            // 0x14db48: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db44) {
            ctx->pc = 0x14DB5Cu;
            goto label_14db5c;
        }
    }
    ctx->pc = 0x14DB4Cu;
label_14db4c:
    // 0x14db4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14db50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14db54: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x14db54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14db58: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x14db58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14db5c:
    // 0x14db5c: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x14db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_14db60:
    // 0x14db60: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x14db60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14db64: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x14db64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x14db68: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x14db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    // 0x14db6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14db6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14db70: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14db70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14db74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14db74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14db78: 0x3e00008  jr          $ra
    ctx->pc = 0x14DB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB78u;
            // 0x14db7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DB80u;
label_14db80:
    // 0x14db80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14db84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14db88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14db8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14db90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14db90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14db94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14db94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db98: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14db98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14db9c: 0xc053560  jal         func_14D580
    ctx->pc = 0x14DB9Cu;
    SET_GPR_U32(ctx, 31, 0x14DBA4u);
    ctx->pc = 0x14DBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB9Cu;
            // 0x14dba0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D580u;
    if (runtime->hasFunction(0x14D580u)) {
        auto targetFn = runtime->lookupFunction(0x14D580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBA4u; }
        if (ctx->pc != 0x14DBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D580_0x14d580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBA4u; }
        if (ctx->pc != 0x14DBA4u) { return; }
    }
    ctx->pc = 0x14DBA4u;
label_14dba4:
    // 0x14dba4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14dba8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x14dba8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14dbac: 0xc0534a8  jal         func_14D2A0
    ctx->pc = 0x14DBACu;
    SET_GPR_U32(ctx, 31, 0x14DBB4u);
    ctx->pc = 0x14DBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBACu;
            // 0x14dbb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D2A0u;
    if (runtime->hasFunction(0x14D2A0u)) {
        auto targetFn = runtime->lookupFunction(0x14D2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBB4u; }
        if (ctx->pc != 0x14DBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D2A0_0x14d2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBB4u; }
        if (ctx->pc != 0x14DBB4u) { return; }
    }
    ctx->pc = 0x14DBB4u;
label_14dbb4:
    // 0x14dbb4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14dbb8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DBB8u;
    {
        const bool branch_taken_0x14dbb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBB8u;
            // 0x14dbbc: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbb8) {
            ctx->pc = 0x14DBC8u;
            goto label_14dbc8;
        }
    }
    ctx->pc = 0x14DBC0u;
    // 0x14dbc0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x14dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x14dbc4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x14dbc4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14dbc8:
    // 0x14dbc8: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x14dbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x14dbcc: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x14DBCCu;
    {
        const bool branch_taken_0x14dbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbcc) {
            ctx->pc = 0x14DBD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBCCu;
            // 0x14dbd0: 0x2403f000  addiu       $v1, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DC20u;
            goto label_14dc20;
        }
    }
    ctx->pc = 0x14DBD4u;
    // 0x14dbd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dbd8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14DBD8u;
    {
        const bool branch_taken_0x14dbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14dbd8) {
            ctx->pc = 0x14DBDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBD8u;
            // 0x14dbdc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DC0Cu;
            goto label_14dc0c;
        }
    }
    ctx->pc = 0x14DBE0u;
    // 0x14dbe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dbe4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DBE4u;
    {
        const bool branch_taken_0x14dbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14dbe4) {
            ctx->pc = 0x14DBE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBE4u;
            // 0x14dbe8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DBF4u;
            goto label_14dbf4;
        }
    }
    ctx->pc = 0x14DBECu;
    // 0x14dbec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14DBECu;
    {
        const bool branch_taken_0x14dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbec) {
            ctx->pc = 0x14DC1Cu;
            goto label_14dc1c;
        }
    }
    ctx->pc = 0x14DBF4u;
label_14dbf4:
    // 0x14dbf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14dbf8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14dbfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14dbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14dc00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14dc04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DC04u;
    {
        const bool branch_taken_0x14dc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC04u;
            // 0x14dc08: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc04) {
            ctx->pc = 0x14DC1Cu;
            goto label_14dc1c;
        }
    }
    ctx->pc = 0x14DC0Cu;
label_14dc0c:
    // 0x14dc0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14dc10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14dc14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14dc18: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x14dc18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14dc1c:
    // 0x14dc1c: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x14dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_14dc20:
    // 0x14dc20: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x14dc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x14dc24: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x14dc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x14dc28: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x14dc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    // 0x14dc2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14dc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dc30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14dc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14dc34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14dc34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dc38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14dc38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dc3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14dc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dc40: 0x3e00008  jr          $ra
    ctx->pc = 0x14DC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC40u;
            // 0x14dc44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DC48u;
    // 0x14dc48: 0x0  nop
    ctx->pc = 0x14dc48u;
    // NOP
    // 0x14dc4c: 0x0  nop
    ctx->pc = 0x14dc4cu;
    // NOP
label_14dc50:
    // 0x14dc50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14dc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14dc54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14dc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14dc58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14dc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14dc5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14dc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14dc60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14dc60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc64: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14dc68: 0xc053560  jal         func_14D580
    ctx->pc = 0x14DC68u;
    SET_GPR_U32(ctx, 31, 0x14DC70u);
    ctx->pc = 0x14DC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC68u;
            // 0x14dc6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D580u;
    if (runtime->hasFunction(0x14D580u)) {
        auto targetFn = runtime->lookupFunction(0x14D580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC70u; }
        if (ctx->pc != 0x14DC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D580_0x14d580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC70u; }
        if (ctx->pc != 0x14DC70u) { return; }
    }
    ctx->pc = 0x14DC70u;
label_14dc70:
    // 0x14dc70: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14dc74: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14dc74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14dc78: 0xa062e060  sb          $v0, -0x1FA0($v1)
    ctx->pc = 0x14dc78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294959200), (uint8_t)GPR_U32(ctx, 2));
    // 0x14dc7c: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x14dc7cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x14dc80: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x14dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x14dc84: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x14dc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14dc88: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x14dc8c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x14dc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x14dc90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DC90u;
    {
        const bool branch_taken_0x14dc90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC90u;
            // 0x14dc94: 0xac43ea20  sw          $v1, -0x15E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961696), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc90) {
            ctx->pc = 0x14DCA0u;
            goto label_14dca0;
        }
    }
    ctx->pc = 0x14DC98u;
    // 0x14dc98: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x14dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14dc9c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14dc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14dca0:
    // 0x14dca0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x14dca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14dca4: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x14DCA4u;
    {
        const bool branch_taken_0x14dca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dca4) {
            ctx->pc = 0x14DCA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCA4u;
            // 0x14dca8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DCF8u;
            goto label_14dcf8;
        }
    }
    ctx->pc = 0x14DCACu;
    // 0x14dcac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dcb0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14DCB0u;
    {
        const bool branch_taken_0x14dcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14dcb0) {
            ctx->pc = 0x14DCB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCB0u;
            // 0x14dcb4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DCE4u;
            goto label_14dce4;
        }
    }
    ctx->pc = 0x14DCB8u;
    // 0x14dcb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dcbc: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DCBCu;
    {
        const bool branch_taken_0x14dcbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14dcbc) {
            ctx->pc = 0x14DCC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCBCu;
            // 0x14dcc0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DCCCu;
            goto label_14dccc;
        }
    }
    ctx->pc = 0x14DCC4u;
    // 0x14dcc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14DCC4u;
    {
        const bool branch_taken_0x14dcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dcc4) {
            ctx->pc = 0x14DCF4u;
            goto label_14dcf4;
        }
    }
    ctx->pc = 0x14DCCCu;
label_14dccc:
    // 0x14dccc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14dcd0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14dcd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14dcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14dcd8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x14dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14dcdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DCDCu;
    {
        const bool branch_taken_0x14dcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCDCu;
            // 0x14dce0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcdc) {
            ctx->pc = 0x14DCF4u;
            goto label_14dcf4;
        }
    }
    ctx->pc = 0x14DCE4u;
label_14dce4:
    // 0x14dce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14dce8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14dcec: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x14dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14dcf0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x14dcf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14dcf4:
    // 0x14dcf4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14dcf8:
    // 0x14dcf8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x14dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14dcfc: 0x946300ea  lhu         $v1, 0xEA($v1)
    ctx->pc = 0x14dcfcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
    // 0x14dd00: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14DD00u;
    {
        const bool branch_taken_0x14dd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14dd00) {
            ctx->pc = 0x14DD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD00u;
            // 0x14dd04: 0x2402f000  addiu       $v0, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DD58u;
            goto label_14dd58;
        }
    }
    ctx->pc = 0x14DD08u;
    // 0x14dd08: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x14dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14dd0c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14DD0Cu;
    {
        const bool branch_taken_0x14dd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14dd0c) {
            ctx->pc = 0x14DD10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD0Cu;
            // 0x14dd10: 0x2402f000  addiu       $v0, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DD40u;
            goto label_14dd40;
        }
    }
    ctx->pc = 0x14DD14u;
    // 0x14dd14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dd18: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DD18u;
    {
        const bool branch_taken_0x14dd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14dd18) {
            ctx->pc = 0x14DD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD18u;
            // 0x14dd1c: 0x2402f000  addiu       $v0, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DD28u;
            goto label_14dd28;
        }
    }
    ctx->pc = 0x14DD20u;
    // 0x14dd20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14DD20u;
    {
        const bool branch_taken_0x14dd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD20u;
            // 0x14dd24: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd20) {
            ctx->pc = 0x14DD70u;
            goto label_14dd70;
        }
    }
    ctx->pc = 0x14DD28u;
label_14dd28:
    // 0x14dd28: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14dd2c: 0x2222024  and         $a0, $s1, $v0
    ctx->pc = 0x14dd2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x14dd30: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14dd34: 0x34910302  ori         $s1, $a0, 0x302
    ctx->pc = 0x14dd34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)770);
    // 0x14dd38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14DD38u;
    {
        const bool branch_taken_0x14dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD38u;
            // 0x14dd3c: 0xa043e060  sb          $v1, -0x1FA0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294959200), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd38) {
            ctx->pc = 0x14DD80u;
            goto label_14dd80;
        }
    }
    ctx->pc = 0x14DD40u;
label_14dd40:
    // 0x14dd40: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14dd44: 0x2222024  and         $a0, $s1, $v0
    ctx->pc = 0x14dd44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x14dd48: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14dd4c: 0x34910300  ori         $s1, $a0, 0x300
    ctx->pc = 0x14dd4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x14dd50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14DD50u;
    {
        const bool branch_taken_0x14dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD50u;
            // 0x14dd54: 0xa043e060  sb          $v1, -0x1FA0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294959200), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd50) {
            ctx->pc = 0x14DD80u;
            goto label_14dd80;
        }
    }
    ctx->pc = 0x14DD58u;
label_14dd58:
    // 0x14dd58: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14dd5c: 0x2222024  and         $a0, $s1, $v0
    ctx->pc = 0x14dd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x14dd60: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14dd64: 0x34910300  ori         $s1, $a0, 0x300
    ctx->pc = 0x14dd64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x14dd68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DD68u;
    {
        const bool branch_taken_0x14dd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD68u;
            // 0x14dd6c: 0xa043e060  sb          $v1, -0x1FA0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294959200), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd68) {
            ctx->pc = 0x14DD80u;
            goto label_14dd80;
        }
    }
    ctx->pc = 0x14DD70u;
label_14dd70:
    // 0x14dd70: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x14dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x14dd74: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x14dd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x14dd78: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x14dd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    // 0x14dd7c: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x14dd7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14dd80:
    // 0x14dd80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14dd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14dd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dd88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14dd88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dd8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14dd8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dd90: 0x3e00008  jr          $ra
    ctx->pc = 0x14DD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD90u;
            // 0x14dd94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DD98u;
    // 0x14dd98: 0x0  nop
    ctx->pc = 0x14dd98u;
    // NOP
    // 0x14dd9c: 0x0  nop
    ctx->pc = 0x14dd9cu;
    // NOP
label_14dda0:
    // 0x14dda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14dda4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14dda8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14dda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ddac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ddb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ddb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ddb4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14ddb8: 0xc0534a8  jal         func_14D2A0
    ctx->pc = 0x14DDB8u;
    SET_GPR_U32(ctx, 31, 0x14DDC0u);
    ctx->pc = 0x14DDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DDB8u;
            // 0x14ddbc: 0x64100030  daddiu      $s0, $zero, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D2A0u;
    if (runtime->hasFunction(0x14D2A0u)) {
        auto targetFn = runtime->lookupFunction(0x14D2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DDC0u; }
        if (ctx->pc != 0x14DDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D2A0_0x14d2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DDC0u; }
        if (ctx->pc != 0x14DDC0u) { return; }
    }
    ctx->pc = 0x14DDC0u;
label_14ddc0:
    // 0x14ddc0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x14ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14ddc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ddc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ddc8: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x14ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x14ddcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ddccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ddd0: 0x2221824  and         $v1, $s1, $v0
    ctx->pc = 0x14ddd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x14ddd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ddd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ddd8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14ddd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14dddc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14dddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x14dde0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14dde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14dde4: 0x3e00008  jr          $ra
    ctx->pc = 0x14DDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DDE4u;
            // 0x14dde8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DDECu;
    // 0x14ddec: 0x0  nop
    ctx->pc = 0x14ddecu;
    // NOP
label_14ddf0:
    // 0x14ddf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ddf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14ddf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14ddf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ddfc: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x14DDFCu;
    SET_GPR_U32(ctx, 31, 0x14DE04u);
    ctx->pc = 0x14DE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DDFCu;
            // 0x14de00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (runtime->hasFunction(0x19F230u)) {
        auto targetFn = runtime->lookupFunction(0x19F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE04u; }
        if (ctx->pc != 0x14DE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F230_0x19f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE04u; }
        if (ctx->pc != 0x14DE04u) { return; }
    }
    ctx->pc = 0x14DE04u;
label_14de04:
    // 0x14de04: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x14de04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x14de08: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14de08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14de0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14de0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14de10: 0x0  nop
    ctx->pc = 0x14de10u;
    // NOP
    // 0x14de14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14de14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14de18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14de18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14de1c: 0x0  nop
    ctx->pc = 0x14de1cu;
    // NOP
    // 0x14de20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14de20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14de24: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14DE24u;
    {
        const bool branch_taken_0x14de24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14de24) {
            ctx->pc = 0x14DE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE24u;
            // 0x14de28: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DE3Cu;
            goto label_14de3c;
        }
    }
    ctx->pc = 0x14DE2Cu;
    // 0x14de2c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14de2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14de30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14de30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14de34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14DE34u;
    {
        const bool branch_taken_0x14de34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE34u;
            // 0x14de38: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de34) {
            ctx->pc = 0x14DE54u;
            goto label_14de54;
        }
    }
    ctx->pc = 0x14DE3Cu;
label_14de3c:
    // 0x14de3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14de40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14de40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14de44: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14de44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14de48: 0x0  nop
    ctx->pc = 0x14de48u;
    // NOP
    // 0x14de4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14de4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14de50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14de50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14de54:
    // 0x14de54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14de54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14de58: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x14de58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14de5c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DE5Cu;
    {
        const bool branch_taken_0x14de5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14de5c) {
            ctx->pc = 0x14DE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE5Cu;
            // 0x14de60: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DE6Cu;
            goto label_14de6c;
        }
    }
    ctx->pc = 0x14DE64u;
    // 0x14de64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14de64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de68: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x14de68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14de6c:
    // 0x14de6c: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x14de6cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x14de70: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x14de70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14de74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14de74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14de78: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x14de78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x14de7c: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x14de7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x14de80: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14de80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14de84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14de84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14de88: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x14de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14de8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14de8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14de90: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x14de94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14de94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14de98: 0x3e00008  jr          $ra
    ctx->pc = 0x14DE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE98u;
            // 0x14de9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DEA0u;
label_14dea0:
    // 0x14dea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14dea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14dea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14dea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14dea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14deac: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x14DEACu;
    SET_GPR_U32(ctx, 31, 0x14DEB4u);
    ctx->pc = 0x14DEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DEACu;
            // 0x14deb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (runtime->hasFunction(0x19F230u)) {
        auto targetFn = runtime->lookupFunction(0x19F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DEB4u; }
        if (ctx->pc != 0x14DEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F230_0x19f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DEB4u; }
        if (ctx->pc != 0x14DEB4u) { return; }
    }
    ctx->pc = 0x14DEB4u;
label_14deb4:
    // 0x14deb4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x14deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x14deb8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14debc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14debcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14dec0: 0x0  nop
    ctx->pc = 0x14dec0u;
    // NOP
    // 0x14dec4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14dec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14dec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14dec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14decc: 0x0  nop
    ctx->pc = 0x14deccu;
    // NOP
    // 0x14ded0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14ded0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ded4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14DED4u;
    {
        const bool branch_taken_0x14ded4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ded4) {
            ctx->pc = 0x14DED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DED4u;
            // 0x14ded8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DEECu;
            goto label_14deec;
        }
    }
    ctx->pc = 0x14DEDCu;
    // 0x14dedc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14dedcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14dee0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14dee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14dee4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14DEE4u;
    {
        const bool branch_taken_0x14dee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DEE4u;
            // 0x14dee8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dee4) {
            ctx->pc = 0x14DF04u;
            goto label_14df04;
        }
    }
    ctx->pc = 0x14DEECu;
label_14deec:
    // 0x14deec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14deecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14def0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14def0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14def4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14def4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14def8: 0x0  nop
    ctx->pc = 0x14def8u;
    // NOP
    // 0x14defc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14defcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14df00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14df00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14df04:
    // 0x14df04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14df04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14df08: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x14df08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14df0c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DF0Cu;
    {
        const bool branch_taken_0x14df0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14df0c) {
            ctx->pc = 0x14DF10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF0Cu;
            // 0x14df10: 0x6403000a  daddiu      $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DF1Cu;
            goto label_14df1c;
        }
    }
    ctx->pc = 0x14DF14u;
    // 0x14df14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14df14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df18: 0x6403000a  daddiu      $v1, $zero, 0xA
    ctx->pc = 0x14df18u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
label_14df1c:
    // 0x14df1c: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x14df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x14df20: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x14df20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14df24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14df24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14df28: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x14df28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x14df2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14df2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14df30: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14df30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14df34: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14df34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x14df38: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14df3c: 0x3e00008  jr          $ra
    ctx->pc = 0x14DF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF3Cu;
            // 0x14df40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DF44u;
    // 0x14df44: 0x0  nop
    ctx->pc = 0x14df44u;
    // NOP
    // 0x14df48: 0x0  nop
    ctx->pc = 0x14df48u;
    // NOP
    // 0x14df4c: 0x0  nop
    ctx->pc = 0x14df4cu;
    // NOP
label_14df50:
    // 0x14df50: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x14df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x14df54: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x14df58: 0x3e00008  jr          $ra
    ctx->pc = 0x14DF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF58u;
            // 0x14df5c: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DF60u;
label_14df60:
    // 0x14df60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14df64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14df68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14df6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14df6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14df70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14df70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14df78: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x14df78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x14df7c: 0xc062804  jal         func_18A010
    ctx->pc = 0x14DF7Cu;
    SET_GPR_U32(ctx, 31, 0x14DF84u);
    ctx->pc = 0x14DF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF7Cu;
            // 0x14df80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF84u; }
        if (ctx->pc != 0x14DF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF84u; }
        if (ctx->pc != 0x14DF84u) { return; }
    }
    ctx->pc = 0x14DF84u;
label_14df84:
    // 0x14df84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14df84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14df88: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x14df88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x14df8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14df8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14df90: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14df90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x14df94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14df94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14df98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14df98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14df9c: 0x34420302  ori         $v0, $v0, 0x302
    ctx->pc = 0x14df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)770);
    // 0x14dfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x14DFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DFA0u;
            // 0x14dfa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DFA8u;
    // 0x14dfa8: 0x0  nop
    ctx->pc = 0x14dfa8u;
    // NOP
    // 0x14dfac: 0x0  nop
    ctx->pc = 0x14dfacu;
    // NOP
    ctx->pc = 0x14dfb0u;
}
