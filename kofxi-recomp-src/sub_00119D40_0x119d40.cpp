#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00119D40
// Address: 0x119d40 - 0x119e90
void sub_00119D40_0x119d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119D40_0x119d40");
#endif

    switch (ctx->pc) {
        case 0x119e30u: goto label_119e30;
        default: break;
    }

    ctx->pc = 0x119d40u;

    // 0x119d40: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119d40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x119d44: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x119d44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x119d48: 0x440d6000  mfc1        $t5, $f12
    ctx->pc = 0x119d48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x119d4c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x119d4cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x119d50: 0x3c0e31ff  lui         $t6, 0x31FF
    ctx->pc = 0x119d50u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)12799 << 16));
    // 0x119d54: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x119d54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x119d58: 0x1af6824  and         $t5, $t5, $t7
    ctx->pc = 0x119d58u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x119d5c: 0x1cd702a  slt         $t6, $t6, $t5
    ctx->pc = 0x119d5cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x119d60: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x119D60u;
    {
        const bool branch_taken_0x119d60 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x119D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D60u;
            // 0x119d64: 0x440c0000  mfc1        $t4, $f0 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d60) {
            ctx->pc = 0x119D78u;
            goto label_119d78;
        }
    }
    ctx->pc = 0x119D68u;
    // 0x119d68: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119d68u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119d6c: 0x25ceaffc  addiu       $t6, $t6, -0x5004
    ctx->pc = 0x119d6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946812));
    // 0x119d70: 0x11800044  beqz        $t4, . + 4 + (0x44 << 2)
    ctx->pc = 0x119D70u;
    {
        const bool branch_taken_0x119d70 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D70u;
            // 0x119d74: 0xc5c00000  lwc1        $f0, 0x0($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d70) {
            ctx->pc = 0x119E84u;
            goto label_119e84;
        }
    }
    ctx->pc = 0x119D78u;
label_119d78:
    // 0x119d78: 0x460c6082  mul.s       $f2, $f12, $f12
    ctx->pc = 0x119d78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x119d7c: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119d7cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119d80: 0x25ceb000  addiu       $t6, $t6, -0x5000
    ctx->pc = 0x119d80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946816));
    // 0x119d84: 0x3c0f3e99  lui         $t7, 0x3E99
    ctx->pc = 0x119d84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16025 << 16));
    // 0x119d88: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x119d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119d8c: 0x35ef9999  ori         $t7, $t7, 0x9999
    ctx->pc = 0x119d8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)39321);
    // 0x119d90: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x119d90u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x119d94: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x119d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119d98: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119d98u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119d9c: 0x25ceb004  addiu       $t6, $t6, -0x4FFC
    ctx->pc = 0x119d9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946820));
    // 0x119da0: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x119da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119da4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119da8: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119da8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119dac: 0x25ceb008  addiu       $t6, $t6, -0x4FF8
    ctx->pc = 0x119dacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946824));
    // 0x119db0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x119db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119db4: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x119db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119db8: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119db8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119dbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119dc0: 0x25ceb00c  addiu       $t6, $t6, -0x4FF4
    ctx->pc = 0x119dc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946828));
    // 0x119dc4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x119dc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119dc8: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x119dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119dcc: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119dccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119dd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119dd4: 0x25ceb010  addiu       $t6, $t6, -0x4FF0
    ctx->pc = 0x119dd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946832));
    // 0x119dd8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x119dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119ddc: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x119ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119de0: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119de0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119de4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119de8: 0x25ceb014  addiu       $t6, $t6, -0x4FEC
    ctx->pc = 0x119de8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946836));
    // 0x119dec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x119decu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119df0: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x119df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119df4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119df8: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x119DF8u;
    {
        const bool branch_taken_0x119df8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x119DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119DF8u;
            // 0x119dfc: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119df8) {
            ctx->pc = 0x119E30u;
            goto label_119e30;
        }
    }
    ctx->pc = 0x119E00u;
    // 0x119e00: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119e00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119e04: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x119e04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119e08: 0x25efb018  addiu       $t7, $t7, -0x4FE8
    ctx->pc = 0x119e08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946840));
    // 0x119e0c: 0x460d605d  msub.s      $f1, $f12, $f13
    ctx->pc = 0x119e0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[13]));
    // 0x119e10: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119e14: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119e14u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119e18: 0x25ceaffc  addiu       $t6, $t6, -0x5004
    ctx->pc = 0x119e18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946812));
    // 0x119e1c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x119e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119e20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x119e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x119e24: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x119e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119e28: 0x3e00008  jr          $ra
    ctx->pc = 0x119E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E28u;
            // 0x119e2c: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119E30u;
label_119e30:
    // 0x119e30: 0x3c0f3f48  lui         $t7, 0x3F48
    ctx->pc = 0x119e30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16200 << 16));
    // 0x119e34: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x119e34u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x119e38: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x119E38u;
    {
        const bool branch_taken_0x119e38 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E38u;
            // 0x119e3c: 0x3c0e3e90  lui         $t6, 0x3E90 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16016 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e38) {
            ctx->pc = 0x119E48u;
            goto label_119e48;
        }
    }
    ctx->pc = 0x119E40u;
    // 0x119e40: 0x3c0fff00  lui         $t7, 0xFF00
    ctx->pc = 0x119e40u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65280 << 16));
    // 0x119e44: 0x1af7021  addu        $t6, $t5, $t7
    ctx->pc = 0x119e44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_119e48:
    // 0x119e48: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119e48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119e4c: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x119e4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119e50: 0x25efb018  addiu       $t7, $t7, -0x4FE8
    ctx->pc = 0x119e50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946840));
    // 0x119e54: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x119e54u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119e58: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119e5c: 0x448e1800  mtc1        $t6, $f3
    ctx->pc = 0x119e5cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x119e60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x119e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119e64: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119e64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119e68: 0x25efaffc  addiu       $t7, $t7, -0x5004
    ctx->pc = 0x119e68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946812));
    // 0x119e6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x119e6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x119e70: 0x460d609d  msub.s      $f2, $f12, $f13
    ctx->pc = 0x119e70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[13]));
    // 0x119e74: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119e78: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x119e78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x119e7c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x119e7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x119e80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x119e80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_119e84:
    // 0x119e84: 0x3e00008  jr          $ra
    ctx->pc = 0x119E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119E8Cu;
    // 0x119e8c: 0x0  nop
    ctx->pc = 0x119e8cu;
    // NOP
    ctx->pc = 0x119e90u;
}
