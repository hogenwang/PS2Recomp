#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030BB90
// Address: 0x30bb90 - 0x30bc40
void sub_0030BB90_0x30bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BB90_0x30bb90");
#endif

    switch (ctx->pc) {
        case 0x30bbbcu: goto label_30bbbc;
        case 0x30bc14u: goto label_30bc14;
        default: break;
    }

    ctx->pc = 0x30bb90u;

    // 0x30bb90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30bb94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30bb98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30bb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30bb9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30bb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30bba0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30bba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30bba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30bba8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30bba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bbac: 0x8c900118  lw          $s0, 0x118($a0)
    ctx->pc = 0x30bbacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x30bbb0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x30bbb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bbb4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30BBB4u;
    {
        const bool branch_taken_0x30bbb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BBB4u;
            // 0x30bbb8: 0x2471ffff  addiu       $s1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbb4) {
            ctx->pc = 0x30BC20u;
            goto label_30bc20;
        }
    }
    ctx->pc = 0x30BBBCu;
label_30bbbc:
    // 0x30bbbc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x30bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30bbc0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30bbc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30bbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bbc8: 0x0  nop
    ctx->pc = 0x30bbc8u;
    // NOP
    // 0x30bbcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30bbccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30bbd0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30BBD0u;
    {
        const bool branch_taken_0x30bbd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30bbd0) {
            ctx->pc = 0x30BBD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BBD0u;
            // 0x30bbd4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BBE8u;
            goto label_30bbe8;
        }
    }
    ctx->pc = 0x30BBD8u;
    // 0x30bbd8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30bbd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30bbdc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30bbdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30bbe0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30BBE0u;
    {
        const bool branch_taken_0x30bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BBE0u;
            // 0x30bbe4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbe0) {
            ctx->pc = 0x30BC00u;
            goto label_30bc00;
        }
    }
    ctx->pc = 0x30BBE8u;
label_30bbe8:
    // 0x30bbe8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30bbec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30bbecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30bbf0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30bbf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30bbf4: 0x0  nop
    ctx->pc = 0x30bbf4u;
    // NOP
    // 0x30bbf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30bbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30bbfc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x30bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_30bc00:
    // 0x30bc00: 0x3c0501d1  lui         $a1, 0x1D1
    ctx->pc = 0x30bc00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)465 << 16));
    // 0x30bc04: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x30bc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30bc08: 0x24a51dd0  addiu       $a1, $a1, 0x1DD0
    ctx->pc = 0x30bc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7632));
    // 0x30bc0c: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30BC0Cu;
    SET_GPR_U32(ctx, 31, 0x30BC14u);
    ctx->pc = 0x30BC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC0Cu;
            // 0x30bc10: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC14u; }
        if (ctx->pc != 0x30BC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC14u; }
        if (ctx->pc != 0x30BC14u) { return; }
    }
    ctx->pc = 0x30BC14u;
label_30bc14:
    // 0x30bc14: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x30bc14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc18: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x30BC18u;
    {
        const bool branch_taken_0x30bc18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC18u;
            // 0x30bc1c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc18) {
            ctx->pc = 0x30BBBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30bbbc;
        }
    }
    ctx->pc = 0x30BC20u;
label_30bc20:
    // 0x30bc20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30bc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30bc24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30bc24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30bc28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30bc28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bc2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30bc2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bc30: 0x3e00008  jr          $ra
    ctx->pc = 0x30BC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC30u;
            // 0x30bc34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BC38u;
    // 0x30bc38: 0x0  nop
    ctx->pc = 0x30bc38u;
    // NOP
    // 0x30bc3c: 0x0  nop
    ctx->pc = 0x30bc3cu;
    // NOP
    ctx->pc = 0x30bc40u;
}
