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

// Function: sub_00119E90
// Address: 0x119e90 - 0x11a6b0
void sub_00119E90_0x119e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119E90_0x119e90");
#endif

    switch (ctx->pc) {
        case 0x119f30u: goto label_119f30;
        case 0x119f78u: goto label_119f78;
        case 0x119f8cu: goto label_119f8c;
        case 0x119fc8u: goto label_119fc8;
        case 0x119ffcu: goto label_119ffc;
        case 0x11a04cu: goto label_11a04c;
        case 0x11a064u: goto label_11a064;
        case 0x11a0c0u: goto label_11a0c0;
        case 0x11a0e4u: goto label_11a0e4;
        case 0x11a128u: goto label_11a128;
        case 0x11a150u: goto label_11a150;
        case 0x11a17cu: goto label_11a17c;
        case 0x11a1c8u: goto label_11a1c8;
        case 0x11a234u: goto label_11a234;
        case 0x11a254u: goto label_11a254;
        case 0x11a2c4u: goto label_11a2c4;
        case 0x11a2e0u: goto label_11a2e0;
        case 0x11a2f4u: goto label_11a2f4;
        case 0x11a314u: goto label_11a314;
        case 0x11a34cu: goto label_11a34c;
        case 0x11a374u: goto label_11a374;
        case 0x11a3a0u: goto label_11a3a0;
        case 0x11a3d8u: goto label_11a3d8;
        case 0x11a3dcu: goto label_11a3dc;
        case 0x11a424u: goto label_11a424;
        case 0x11a464u: goto label_11a464;
        case 0x11a4a0u: goto label_11a4a0;
        case 0x11a4c4u: goto label_11a4c4;
        case 0x11a4e4u: goto label_11a4e4;
        case 0x11a520u: goto label_11a520;
        case 0x11a568u: goto label_11a568;
        case 0x11a5dcu: goto label_11a5dc;
        case 0x11a668u: goto label_11a668;
        default: break;
    }

    ctx->pc = 0x119e90u;

    // 0x119e90: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x119e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x119e94: 0x24cffffd  addiu       $t7, $a2, -0x3
    ctx->pc = 0x119e94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x119e98: 0x24cd0004  addiu       $t5, $a2, 0x4
    ctx->pc = 0x119e98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x119e9c: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x119e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x119ea0: 0x29ee0000  slti        $t6, $t7, 0x0
    ctx->pc = 0x119ea0u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x119ea4: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x119ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x119ea8: 0x1ae780b  movn        $t7, $t5, $t6
    ctx->pc = 0x119ea8u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x119eac: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x119eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x119eb0: 0xfa8c3  sra         $s5, $t7, 3
    ctx->pc = 0x119eb0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 15), 3));
    // 0x119eb4: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x119eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x119eb8: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119eb8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119ebc: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x119ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x119ec0: 0x2aad0000  slti        $t5, $s5, 0x0
    ctx->pc = 0x119ec0u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x119ec4: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x119ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x119ec8: 0x25efb020  addiu       $t7, $t7, -0x4FE0
    ctx->pc = 0x119ec8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946848));
    // 0x119ecc: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x119eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x119ed0: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x119ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x119ed4: 0x87080  sll         $t6, $t0, 2
    ctx->pc = 0x119ed4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x119ed8: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x119ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x119edc: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x119edcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x119ee0: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x119ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x119ee4: 0xda80b  movn        $s5, $zero, $t5
    ctx->pc = 0x119ee4u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x119ee8: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x119ee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x119eec: 0x1578c0  sll         $t7, $s5, 3
    ctx->pc = 0x119eecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x119ef0: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x119ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x119ef4: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x119ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x119ef8: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x119ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x119efc: 0xcf3023  subu        $a2, $a2, $t7
    ctx->pc = 0x119efcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x119f00: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x119f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x119f04: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x119f04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f08: 0xafa90148  sw          $t1, 0x148($sp)
    ctx->pc = 0x119f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
    // 0x119f0c: 0x24d3fff8  addiu       $s3, $a2, -0x8
    ctx->pc = 0x119f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x119f10: 0x2306821  addu        $t5, $s1, $s0
    ctx->pc = 0x119f10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x119f14: 0x5a00010  bltz        $t5, . + 4 + (0x10 << 2)
    ctx->pc = 0x119F14u;
    {
        const bool branch_taken_0x119f14 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x119F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F14u;
        // 0x119f18: 0x2b17023  subu        $t6, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f14) {
            ctx->pc = 0x119F58u;
            goto label_119f58;
        }
    }
    ctx->pc = 0x119F1Cu;
    // 0x119f1c: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x119f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x119f20: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x119f20u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f24: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x119f24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x119f28: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x119f28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x119f2c: 0x27ae0050  addiu       $t6, $sp, 0x50
    ctx->pc = 0x119f2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_119f30:
    // 0x119f30: 0x5800003  bltz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x119F30u;
    {
        const bool branch_taken_0x119f30 = (GPR_S32(ctx, 12) < 0);
        ctx->pc = 0x119F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F30u;
        // 0x119f34: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f30) {
            ctx->pc = 0x119F40u;
            goto label_119f40;
        }
    }
    ctx->pc = 0x119F38u;
    // 0x119f38: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119f3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_119f40:
    // 0x119f40: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x119f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x119f44: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x119f44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x119f48: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x119f48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x119f4c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x119f4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x119f50: 0x15a0fff7  bnez        $t5, . + 4 + (-0x9 << 2)
    ctx->pc = 0x119F50u;
    {
        const bool branch_taken_0x119f50 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F50u;
        // 0x119f54: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f50) {
            ctx->pc = 0x119F30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119f30;
        }
    }
    ctx->pc = 0x119F58u;
label_119f58:
    // 0x119f58: 0x2a0e0000  slti        $t6, $s0, 0x0
    ctx->pc = 0x119f58u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x119f5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x119f5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f60: 0x15c00018  bnez        $t6, . + 4 + (0x18 << 2)
    ctx->pc = 0x119F60u;
    {
        const bool branch_taken_0x119f60 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F60u;
        // 0x119f64: 0xafae014c  sw          $t6, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f60) {
            ctx->pc = 0x119FC4u;
            goto label_119fc4;
        }
    }
    ctx->pc = 0x119F68u;
    // 0x119f68: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x119f68u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x119f6c: 0x2a270000  slti        $a3, $s1, 0x0
    ctx->pc = 0x119f6cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x119f70: 0x1fd6021  addu        $t4, $t7, $sp
    ctx->pc = 0x119f70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x119f74: 0x27ab00f0  addiu       $t3, $sp, 0xF0
    ctx->pc = 0x119f74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_119f78:
    // 0x119f78: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x119F78u;
    {
        const bool branch_taken_0x119f78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F78u;
        // 0x119f7c: 0x44801000  mtc1        $zero, $f2 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f78) {
            ctx->pc = 0x119FACu;
            goto label_119fac;
        }
    }
    ctx->pc = 0x119F80u;
    // 0x119f80: 0x258e0050  addiu       $t6, $t4, 0x50
    ctx->pc = 0x119f80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
    // 0x119f84: 0x2c0782d  daddu       $t7, $s6, $zero
    ctx->pc = 0x119f84u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f88: 0x262d0001  addiu       $t5, $s1, 0x1
    ctx->pc = 0x119f88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_119f8c:
    // 0x119f8c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119f90: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x119f90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x119f94: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x119f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119f98: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x119f98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x119f9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x119f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x119fa0: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x119fa0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x119fa4: 0x15a0fff9  bnez        $t5, . + 4 + (-0x7 << 2)
    ctx->pc = 0x119FA4u;
    {
        const bool branch_taken_0x119fa4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x119FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FA4u;
        // 0x119fa8: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fa4) {
            ctx->pc = 0x119F8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119f8c;
        }
    }
    ctx->pc = 0x119FACu;
label_119fac:
    // 0x119fac: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x119facu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x119fb0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x119fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x119fb4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x119fb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x119fb8: 0x209782a  slt         $t7, $s0, $t1
    ctx->pc = 0x119fb8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x119fbc: 0x11e0ffee  beqz        $t7, . + 4 + (-0x12 << 2)
    ctx->pc = 0x119FBCu;
    {
        const bool branch_taken_0x119fbc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FBCu;
        // 0x119fc0: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fbc) {
            ctx->pc = 0x119F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119f78;
        }
    }
    ctx->pc = 0x119FC4u;
label_119fc4:
    // 0x119fc4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x119fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119fc8:
    // 0x119fc8: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x119fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x119fcc: 0x29d7821  addu        $t7, $s4, $sp
    ctx->pc = 0x119fccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x119fd0: 0x1a40001a  blez        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x119FD0u;
    {
        const bool branch_taken_0x119fd0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x119FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FD0u;
        // 0x119fd4: 0xc5f400f0  lwc1        $f20, 0xF0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fd0) {
            ctx->pc = 0x11A03Cu;
            goto label_11a03c;
        }
    }
    ctx->pc = 0x119FD8u;
    // 0x119fd8: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119fd8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119fdc: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x119fdcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fe0: 0x25ceb06c  addiu       $t6, $t6, -0x4F94
    ctx->pc = 0x119fe0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946924));
    // 0x119fe4: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x119fe4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fe8: 0xc5c40000  lwc1        $f4, 0x0($t6)
    ctx->pc = 0x119fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x119fec: 0x25ee00ec  addiu       $t6, $t7, 0xEC
    ctx->pc = 0x119fecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 236));
    // 0x119ff0: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119ff0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119ff4: 0x25efb070  addiu       $t7, $t7, -0x4F90
    ctx->pc = 0x119ff4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946928));
    // 0x119ff8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_119ffc:
    // 0x119ffc: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x119ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x11a000: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x11a000u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x11a004: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11a004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a008: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11a008u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11a00c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a00cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11a010: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x11a010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11a014: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x11a014u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a018: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11a018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11a01c: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x11a01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11a020: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11a020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11a024: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a024u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x11a028: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x11a028u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11a02c: 0x440f2800  mfc1        $t7, $f5
    ctx->pc = 0x11a02cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11a030: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x11a030u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x11a034: 0x1d80fff1  bgtz        $t4, . + 4 + (-0xF << 2)
    ctx->pc = 0x11A034u;
    {
        const bool branch_taken_0x11a034 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x11A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A034u;
        // 0x11a038: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a034) {
            ctx->pc = 0x119FFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119ffc;
        }
    }
    ctx->pc = 0x11A03Cu;
label_11a03c:
    // 0x11a03c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a03cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a040: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a044: 0xc046b30  jal         func_11ACC0
    ctx->pc = 0x11A044u;
    SET_GPR_U32(ctx, 31, 0x11A04Cu);
    ctx->pc = 0x11A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A044u;
    // 0x11a048: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACC0u, 0x11A044u, 0x11A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A04Cu;
label_11a04c:
    // 0x11a04c: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x11a04cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x11a050: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11a050u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x11a054: 0x25ceb074  addiu       $t6, $t6, -0x4F8C
    ctx->pc = 0x11a054u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946932));
    // 0x11a058: 0xc5cc0000  lwc1        $f12, 0x0($t6)
    ctx->pc = 0x11a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11a05c: 0xc046afa  jal         func_11ABE8
    ctx->pc = 0x11A05Cu;
    SET_GPR_U32(ctx, 31, 0x11A064u);
    ctx->pc = 0x11A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A05Cu;
    // 0x11a060: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ABE8u, 0x11A05Cu, 0x11A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A064u;
label_11a064:
    // 0x11a064: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a064u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a068: 0x25efb078  addiu       $t7, $t7, -0x4F88
    ctx->pc = 0x11a068u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946936));
    // 0x11a06c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a070: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11a070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a074: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11a074u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11a078: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a078u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11a07c: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x11a07cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x11a080: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x11a080u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a084: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a088: 0x1a60017c  blez        $s3, . + 4 + (0x17C << 2)
    ctx->pc = 0x11A088u;
    {
        const bool branch_taken_0x11a088 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x11A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A088u;
        // 0x11a08c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a088) {
            ctx->pc = 0x11A67Cu;
            goto label_11a67c;
        }
    }
    ctx->pc = 0x11A090u;
    // 0x11a090: 0x29d6021  addu        $t4, $s4, $sp
    ctx->pc = 0x11a090u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11a094: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x11a094u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11a098: 0x8d8dfffc  lw          $t5, -0x4($t4)
    ctx->pc = 0x11a098u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967292)));
    // 0x11a09c: 0x1f37823  subu        $t7, $t7, $s3
    ctx->pc = 0x11a09cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x11a0a0: 0x240e0007  addiu       $t6, $zero, 0x7
    ctx->pc = 0x11a0a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11a0a4: 0x1ed4807  srav        $t1, $t5, $t7
    ctx->pc = 0x11a0a4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x11a0a8: 0x1d37023  subu        $t6, $t6, $s3
    ctx->pc = 0x11a0a8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x11a0ac: 0x1e97804  sllv        $t7, $t1, $t7
    ctx->pc = 0x11a0acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 15) & 0x1F));
    // 0x11a0b0: 0x2e9b821  addu        $s7, $s7, $t1
    ctx->pc = 0x11a0b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
    // 0x11a0b4: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x11a0b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x11a0b8: 0xad8dfffc  sw          $t5, -0x4($t4)
    ctx->pc = 0x11a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967292), GPR_U32(ctx, 13));
    // 0x11a0bc: 0x1cdf007  srav        $fp, $t5, $t6
    ctx->pc = 0x11a0bcu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 14) & 0x1F));
label_11a0c0:
    // 0x11a0c0: 0x5bc00025  blezl       $fp, . + 4 + (0x25 << 2)
    ctx->pc = 0x11A0C0u;
    {
        const bool branch_taken_0x11a0c0 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x11a0c0) {
            ctx->pc = 0x11A0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A0C0u;
            // 0x11a0c4: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
            { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A158u;
            goto label_11a158;
        }
    }
    ctx->pc = 0x11A0C8u;
    // 0x11a0c8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x11a0c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x11a0cc: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x11A0CCu;
    {
        const bool branch_taken_0x11a0cc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0CCu;
        // 0x11a0d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0cc) {
            ctx->pc = 0x11A10Cu;
            goto label_11a10c;
        }
    }
    ctx->pc = 0x11A0D4u;
    // 0x11a0d4: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x11a0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11a0d8: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x11a0d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11a0dc: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x11a0dcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0e0: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x11a0e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a0e4:
    // 0x11a0e4: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x11a0e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x11a0e8: 0x15600004  bnez        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A0E8u;
    {
        const bool branch_taken_0x11a0e8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E8u;
        // 0x11a0ec: 0x14e7823  subu        $t7, $t2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0e8) {
            ctx->pc = 0x11A0FCu;
            goto label_11a0fc;
        }
    }
    ctx->pc = 0x11A0F0u;
    // 0x11a0f0: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A0F0u;
    {
        const bool branch_taken_0x11a0f0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0F0u;
        // 0x11a0f4: 0x12e7823  subu        $t7, $t1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0f0) {
            ctx->pc = 0x11A100u;
            goto label_11a100;
        }
    }
    ctx->pc = 0x11A0F8u;
    // 0x11a0f8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x11a0f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a0fc:
    // 0x11a0fc: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x11a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
label_11a100:
    // 0x11a100: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x11a100u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x11a104: 0x1580fff7  bnez        $t4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11A104u;
    {
        const bool branch_taken_0x11a104 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A104u;
        // 0x11a108: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a104) {
            ctx->pc = 0x11A0E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a0e4;
        }
    }
    ctx->pc = 0x11A10Cu;
label_11a10c:
    // 0x11a10c: 0x1a600006  blez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A10Cu;
    {
        const bool branch_taken_0x11a10c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x11A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A10Cu;
        // 0x11a110: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a10c) {
            ctx->pc = 0x11A128u;
            goto label_11a128;
        }
    }
    ctx->pc = 0x11A114u;
    // 0x11a114: 0x526f0156  beql        $s3, $t7, . + 4 + (0x156 << 2)
    ctx->pc = 0x11A114u;
    {
        const bool branch_taken_0x11a114 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        if (branch_taken_0x11a114) {
            ctx->pc = 0x11A118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A114u;
            // 0x11a118: 0x29d7021  addu        $t6, $s4, $sp (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A670u;
            goto label_11a670;
        }
    }
    ctx->pc = 0x11A11Cu;
    // 0x11a11c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11a11cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a120: 0x526f014f  beql        $s3, $t7, . + 4 + (0x14F << 2)
    ctx->pc = 0x11A120u;
    {
        const bool branch_taken_0x11a120 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        if (branch_taken_0x11a120) {
            ctx->pc = 0x11A124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A120u;
            // 0x11a124: 0x29d7021  addu        $t6, $s4, $sp (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A660u;
            goto label_11a660;
        }
    }
    ctx->pc = 0x11A128u;
label_11a128:
    // 0x11a128: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11a128u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a12c: 0x17cf000a  bne         $fp, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11A12Cu;
    {
        const bool branch_taken_0x11a12c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 15));
        ctx->pc = 0x11A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A12Cu;
        // 0x11a130: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a12c) {
            ctx->pc = 0x11A158u;
            goto label_11a158;
        }
    }
    ctx->pc = 0x11A134u;
    // 0x11a134: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a134u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a138: 0x25efb080  addiu       $t7, $t7, -0x4F80
    ctx->pc = 0x11a138u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946944));
    // 0x11a13c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x11a13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11a140: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A140u;
    {
        const bool branch_taken_0x11a140 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A140u;
        // 0x11a144: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a140) {
            ctx->pc = 0x11A158u;
            goto label_11a158;
        }
    }
    ctx->pc = 0x11A148u;
    // 0x11a148: 0xc046b30  jal         func_11ACC0
    ctx->pc = 0x11A148u;
    SET_GPR_U32(ctx, 31, 0x11A150u);
    ctx->pc = 0x11A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A148u;
    // 0x11a14c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACC0u, 0x11A148u, 0x11A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A150u;
label_11a150:
    // 0x11a150: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11a150u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11a154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11a154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a158:
    // 0x11a158: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11a158u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a15c: 0x4500011c  bc1f        . + 4 + (0x11C << 2)
    ctx->pc = 0x11A15Cu;
    {
        const bool branch_taken_0x11a15c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A15Cu;
        // 0x11a160: 0x2649ffff  addiu       $t1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a15c) {
            ctx->pc = 0x11A5D0u;
            goto label_11a5d0;
        }
    }
    ctx->pc = 0x11A164u;
    // 0x11a164: 0x130782a  slt         $t7, $t1, $s0
    ctx->pc = 0x11a164u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a168: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11A168u;
    {
        const bool branch_taken_0x11a168 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A168u;
        // 0x11a16c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a168) {
            ctx->pc = 0x11A19Cu;
            goto label_11a19c;
        }
    }
    ctx->pc = 0x11A170u;
    // 0x11a170: 0x97880  sll         $t7, $t1, 2
    ctx->pc = 0x11a170u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x11a174: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x11a174u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a178: 0x1fd6021  addu        $t4, $t7, $sp
    ctx->pc = 0x11a178u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11a17c:
    // 0x11a17c: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x11a17cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11a180: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11a180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11a184: 0x130702a  slt         $t6, $t1, $s0
    ctx->pc = 0x11a184u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a188: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x11a188u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x11a18c: 0x0  nop
    ctx->pc = 0x11a18cu;
    // NOP
    // 0x11a190: 0x11c0fffa  beqz        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A190u;
    {
        const bool branch_taken_0x11a190 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A190u;
        // 0x11a194: 0x258cfffc  addiu       $t4, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a190) {
            ctx->pc = 0x11A17Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a17c;
        }
    }
    ctx->pc = 0x11A198u;
    // 0x11a198: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x11a198u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_11a19c:
    // 0x11a19c: 0x15c0003f  bnez        $t6, . + 4 + (0x3F << 2)
    ctx->pc = 0x11A19Cu;
    {
        const bool branch_taken_0x11a19c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A19Cu;
        // 0x11a1a0: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a19c) {
            ctx->pc = 0x11A29Cu;
            goto label_11a29c;
        }
    }
    ctx->pc = 0x11A1A4u;
    // 0x11a1a4: 0x260fffff  addiu       $t7, $s0, -0x1
    ctx->pc = 0x11a1a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11a1a8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x11a1a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x11a1ac: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11a1acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11a1b0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x11a1b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x11a1b4: 0x15c0000b  bnez        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x11A1B4u;
    {
        const bool branch_taken_0x11a1b4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1B4u;
        // 0x11a1b8: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1b4) {
            ctx->pc = 0x11A1E4u;
            goto label_11a1e4;
        }
    }
    ctx->pc = 0x11A1BCu;
    // 0x11a1bc: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x11a1bcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11a1c0: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11a1c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11a1c4: 0x25eefffc  addiu       $t6, $t7, -0x4
    ctx->pc = 0x11a1c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
label_11a1c8:
    // 0x11a1c8: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11a1c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11a1cc: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x11a1ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11a1d0: 0x0  nop
    ctx->pc = 0x11a1d0u;
    // NOP
    // 0x11a1d4: 0x0  nop
    ctx->pc = 0x11a1d4u;
    // NOP
    // 0x11a1d8: 0x0  nop
    ctx->pc = 0x11a1d8u;
    // NOP
    // 0x11a1dc: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A1DCu;
    {
        const bool branch_taken_0x11a1dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1DCu;
        // 0x11a1e0: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1dc) {
            ctx->pc = 0x11A1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a1c8;
        }
    }
    ctx->pc = 0x11A1E4u;
label_11a1e4:
    // 0x11a1e4: 0x24c3021  addu        $a2, $s2, $t4
    ctx->pc = 0x11a1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
    // 0x11a1e8: 0x26490001  addiu       $t1, $s2, 0x1
    ctx->pc = 0x11a1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11a1ec: 0xc9782a  slt         $t7, $a2, $t1
    ctx->pc = 0x11a1ecu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x11a1f0: 0x15e0ff75  bnez        $t7, . + 4 + (-0x8B << 2)
    ctx->pc = 0x11A1F0u;
    {
        const bool branch_taken_0x11a1f0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1F0u;
        // 0x11a1f4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1f0) {
            ctx->pc = 0x119FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119fc8;
        }
    }
    ctx->pc = 0x11A1F8u;
    // 0x11a1f8: 0x97080  sll         $t6, $t1, 2
    ctx->pc = 0x11a1f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x11a1fc: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x11a1fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11a200: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x11a200u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11a204: 0x2a96821  addu        $t5, $s5, $t1
    ctx->pc = 0x11a204u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
    // 0x11a208: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11a208u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11a20c: 0x2296021  addu        $t4, $s1, $t1
    ctx->pc = 0x11a20cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x11a210: 0x25e80050  addiu       $t0, $t7, 0x50
    ctx->pc = 0x11a210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 80));
    // 0x11a214: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x11a214u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x11a218: 0x8faf0148  lw          $t7, 0x148($sp)
    ctx->pc = 0x11a218u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x11a21c: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x11a21cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x11a220: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x11a220u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x11a224: 0x19d6021  addu        $t4, $t4, $sp
    ctx->pc = 0x11a224u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x11a228: 0x25ce00f0  addiu       $t6, $t6, 0xF0
    ctx->pc = 0x11a228u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 240));
    // 0x11a22c: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x11a22cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x11a230: 0x2a270000  slti        $a3, $s1, 0x0
    ctx->pc = 0x11a230u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
label_11a234:
    // 0x11a234: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a238: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11a238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a23c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a23cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a240: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x11A240u;
    {
        const bool branch_taken_0x11a240 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A240u;
        // 0x11a244: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a240) {
            ctx->pc = 0x11A274u;
            goto label_11a274;
        }
    }
    ctx->pc = 0x11A248u;
    // 0x11a248: 0x258b0050  addiu       $t3, $t4, 0x50
    ctx->pc = 0x11a248u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
    // 0x11a24c: 0x2c0782d  daddu       $t7, $s6, $zero
    ctx->pc = 0x11a24cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a250: 0x262a0001  addiu       $t2, $s1, 0x1
    ctx->pc = 0x11a250u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11a254:
    // 0x11a254: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a258: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x11a258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x11a25c: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x11a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a260: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x11a260u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x11a264: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11a264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a268: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x11a268u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x11a26c: 0x1540fff9  bnez        $t2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A26Cu;
    {
        const bool branch_taken_0x11a26c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A26Cu;
        // 0x11a270: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a26c) {
            ctx->pc = 0x11A254u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a254;
        }
    }
    ctx->pc = 0x11A274u;
label_11a274:
    // 0x11a274: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x11a274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x11a278: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11a278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11a27c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x11a27cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x11a280: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x11a280u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x11a284: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x11a284u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x11a288: 0xc9782a  slt         $t7, $a2, $t1
    ctx->pc = 0x11a288u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x11a28c: 0x11e0ffe9  beqz        $t7, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11A28Cu;
    {
        const bool branch_taken_0x11a28c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A28Cu;
        // 0x11a290: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a28c) {
            ctx->pc = 0x11A234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a234;
        }
    }
    ctx->pc = 0x11A294u;
    // 0x11a294: 0x1000ff4c  b           . + 4 + (-0xB4 << 2)
    ctx->pc = 0x11A294u;
    {
        const bool branch_taken_0x11a294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A294u;
        // 0x11a298: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a294) {
            ctx->pc = 0x119FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119fc8;
        }
    }
    ctx->pc = 0x11A29Cu;
label_11a29c:
    // 0x11a29c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11a29cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a2a0: 0x450000cc  bc1f        . + 4 + (0xCC << 2)
    ctx->pc = 0x11A2A0u;
    {
        const bool branch_taken_0x11a2a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2A0u;
        // 0x11a2a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2a0) {
            ctx->pc = 0x11A5D4u;
            goto label_11a5d4;
        }
    }
    ctx->pc = 0x11A2A8u;
    // 0x11a2a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11a2a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11a2ac: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11a2acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11a2b0: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11a2b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11a2b4: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x11a2b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x11a2b8: 0x15c00009  bnez        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A2B8u;
    {
        const bool branch_taken_0x11a2b8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2B8u;
        // 0x11a2bc: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2b8) {
            ctx->pc = 0x11A2E0u;
            goto label_11a2e0;
        }
    }
    ctx->pc = 0x11A2C0u;
    // 0x11a2c0: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x11a2c0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_11a2c4:
    // 0x11a2c4: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11a2c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11a2c8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11a2c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11a2cc: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x11a2ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11a2d0: 0x0  nop
    ctx->pc = 0x11a2d0u;
    // NOP
    // 0x11a2d4: 0x0  nop
    ctx->pc = 0x11a2d4u;
    // NOP
    // 0x11a2d8: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A2D8u;
    {
        const bool branch_taken_0x11a2d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2D8u;
        // 0x11a2dc: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2d8) {
            ctx->pc = 0x11A2C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a2c4;
        }
    }
    ctx->pc = 0x11A2E0u;
label_11a2e0:
    // 0x11a2e0: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x11a2e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x11a2e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2e8: 0x25ceb080  addiu       $t6, $t6, -0x4F80
    ctx->pc = 0x11a2e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946944));
    // 0x11a2ec: 0xc046b30  jal         func_11ACC0
    ctx->pc = 0x11A2ECu;
    SET_GPR_U32(ctx, 31, 0x11A2F4u);
    ctx->pc = 0x11A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A2ECu;
    // 0x11a2f0: 0xc5cc0000  lwc1        $f12, 0x0($t6) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACC0u, 0x11A2ECu, 0x11A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2F4u;
label_11a2f4:
    // 0x11a2f4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x11a2f4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x11a2f8: 0x640002f  bltz        $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x11A2F8u;
    {
        const bool branch_taken_0x11a2f8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2F8u;
        // 0x11a2fc: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2f8) {
            ctx->pc = 0x11A3B8u;
            goto label_11a3b8;
        }
    }
    ctx->pc = 0x11A300u;
    // 0x11a300: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x11a300u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x11a304: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11a304u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11a308: 0x25ceb06c  addiu       $t6, $t6, -0x4F94
    ctx->pc = 0x11a308u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946924));
    // 0x11a30c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11a30cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11a310: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a314:
    // 0x11a314: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a318: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11a318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11a31c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a31cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a320: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11a320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11a324: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x11a324u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11a328: 0xe5e000f0  swc1        $f0, 0xF0($t7)
    ctx->pc = 0x11a328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 240), bits); }
    // 0x11a32c: 0x521fff9  bgez        $t1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A32Cu;
    {
        const bool branch_taken_0x11a32c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x11A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A32Cu;
        // 0x11a330: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a32c) {
            ctx->pc = 0x11A314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a314;
        }
    }
    ctx->pc = 0x11A334u;
    // 0x11a334: 0x6400020  bltz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x11A334u;
    {
        const bool branch_taken_0x11a334 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A334u;
        // 0x11a338: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a334) {
            ctx->pc = 0x11A3B8u;
            goto label_11a3b8;
        }
    }
    ctx->pc = 0x11A33Cu;
    // 0x11a33c: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x11a33cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11a340: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a340u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a344: 0x25e6b030  addiu       $a2, $t7, -0x4FD0
    ctx->pc = 0x11a344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946864));
    // 0x11a348: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x11a348u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
label_11a34c:
    // 0x11a34c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11a34cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a350: 0x8faf014c  lw          $t7, 0x14C($sp)
    ctx->pc = 0x11a350u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x11a354: 0x15e0009c  bnez        $t7, . + 4 + (0x9C << 2)
    ctx->pc = 0x11A354u;
    {
        const bool branch_taken_0x11a354 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A354u;
        // 0x11a358: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a354) {
            ctx->pc = 0x11A5C8u;
            goto label_11a5c8;
        }
    }
    ctx->pc = 0x11A35Cu;
    // 0x11a35c: 0x2494023  subu        $t0, $s2, $t1
    ctx->pc = 0x11a35cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x11a360: 0x500000f  bltz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x11A360u;
    {
        const bool branch_taken_0x11a360 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x11A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A360u;
        // 0x11a364: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a360) {
            ctx->pc = 0x11A3A0u;
            goto label_11a3a0;
        }
    }
    ctx->pc = 0x11A368u;
    // 0x11a368: 0x25cb00f0  addiu       $t3, $t6, 0xF0
    ctx->pc = 0x11a368u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 240));
    // 0x11a36c: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x11a36cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a370: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11a370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a374:
    // 0x11a374: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x11a374u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x11a378: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x11a378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a37c: 0xec502a  slt         $t2, $a3, $t4
    ctx->pc = 0x11a37cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11a380: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x11a380u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x11a384: 0x20c782a  slt         $t7, $s0, $t4
    ctx->pc = 0x11a384u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11a388: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11a388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a38c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x11a38cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x11a390: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A390u;
    {
        const bool branch_taken_0x11a390 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A390u;
        // 0x11a394: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a390) {
            ctx->pc = 0x11A3A0u;
            goto label_11a3a0;
        }
    }
    ctx->pc = 0x11A398u;
    // 0x11a398: 0x5140fff6  beql        $t2, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x11A398u;
    {
        const bool branch_taken_0x11a398 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a398) {
            ctx->pc = 0x11A39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A398u;
            // 0x11a39c: 0xc5a00000  lwc1        $f0, 0x0($t5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A374u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a374;
        }
    }
    ctx->pc = 0x11A3A0u;
label_11a3a0:
    // 0x11a3a0: 0x87880  sll         $t7, $t0, 2
    ctx->pc = 0x11a3a0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11a3a4: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11a3a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11a3a8: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11a3a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11a3ac: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11a3acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11a3b0: 0x521ffe6  bgez        $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x11A3B0u;
    {
        const bool branch_taken_0x11a3b0 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x11A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3B0u;
        // 0x11a3b4: 0xe5e200a0  swc1        $f2, 0xA0($t7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3b0) {
            ctx->pc = 0x11A34Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a34c;
        }
    }
    ctx->pc = 0x11A3B8u;
label_11a3b8:
    // 0x11a3b8: 0x8fae0144  lw          $t6, 0x144($sp)
    ctx->pc = 0x11a3b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x11a3bc: 0x29cf0003  slti        $t7, $t6, 0x3
    ctx->pc = 0x11a3bcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11a3c0: 0x51e00042  beql        $t7, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x11A3C0u;
    {
        const bool branch_taken_0x11a3c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a3c0) {
            ctx->pc = 0x11A3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A3C0u;
            // 0x11a3c4: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A4CCu;
            goto label_11a4cc;
        }
    }
    ctx->pc = 0x11A3C8u;
    // 0x11a3c8: 0x5dc00021  bgtzl       $t6, . + 4 + (0x21 << 2)
    ctx->pc = 0x11A3C8u;
    {
        const bool branch_taken_0x11a3c8 = (GPR_S32(ctx, 14) > 0);
        if (branch_taken_0x11a3c8) {
            ctx->pc = 0x11A3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A3C8u;
            // 0x11a3cc: 0x44801000  mtc1        $zero, $f2 (Delay Slot)
            { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A450u;
            goto label_11a450;
        }
    }
    ctx->pc = 0x11A3D0u;
    // 0x11a3d0: 0x51c0000f  beql        $t6, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x11A3D0u;
    {
        const bool branch_taken_0x11a3d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a3d0) {
            ctx->pc = 0x11A3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A3D0u;
            // 0x11a3d4: 0x44801000  mtc1        $zero, $f2 (Delay Slot)
            { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A410u;
            goto label_11a410;
        }
    }
    ctx->pc = 0x11A3D8u;
label_11a3d8:
    // 0x11a3d8: 0x32e20007  andi        $v0, $s7, 0x7
    ctx->pc = 0x11a3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)7);
label_11a3dc:
    // 0x11a3dc: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x11a3dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x11a3e0: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x11a3e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x11a3e4: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x11a3e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x11a3e8: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x11a3e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x11a3ec: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x11a3ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x11a3f0: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x11a3f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x11a3f4: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x11a3f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x11a3f8: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x11a3f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x11a3fc: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x11a3fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x11a400: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x11a400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x11a404: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x11a404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a408: 0x3e00008  jr          $ra
    ctx->pc = 0x11A408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A408u;
        // 0x11a40c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A410u;
label_11a410:
    // 0x11a410: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A410u;
    {
        const bool branch_taken_0x11a410 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A410u;
        // 0x11a414: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a410) {
            ctx->pc = 0x11A438u;
            goto label_11a438;
        }
    }
    ctx->pc = 0x11A418u;
    // 0x11a418: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11a418u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11a41c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11a41cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11a420: 0x25ef00a0  addiu       $t7, $t7, 0xA0
    ctx->pc = 0x11a420u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_11a424:
    // 0x11a424: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a428: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11a428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11a42c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11a42cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11a430: 0x521fffc  bgez        $t1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11A430u;
    {
        const bool branch_taken_0x11a430 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x11A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A430u;
        // 0x11a434: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a430) {
            ctx->pc = 0x11A424u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a424;
        }
    }
    ctx->pc = 0x11A438u;
label_11a438:
    // 0x11a438: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A438u;
    {
        const bool branch_taken_0x11a438 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A438u;
        // 0x11a43c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a438) {
            ctx->pc = 0x11A444u;
            goto label_11a444;
        }
    }
    ctx->pc = 0x11A440u;
    // 0x11a440: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11a440u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_11a444:
    // 0x11a444: 0x8faf0140  lw          $t7, 0x140($sp)
    ctx->pc = 0x11a444u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11a448: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x11A448u;
    {
        const bool branch_taken_0x11a448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A448u;
        // 0x11a44c: 0xe5e00000  swc1        $f0, 0x0($t7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a448) {
            ctx->pc = 0x11A3D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a3d8;
        }
    }
    ctx->pc = 0x11A450u;
label_11a450:
    // 0x11a450: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A450u;
    {
        const bool branch_taken_0x11a450 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A450u;
        // 0x11a454: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a450) {
            ctx->pc = 0x11A478u;
            goto label_11a478;
        }
    }
    ctx->pc = 0x11A458u;
    // 0x11a458: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11a458u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11a45c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11a45cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11a460: 0x25ef00a0  addiu       $t7, $t7, 0xA0
    ctx->pc = 0x11a460u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_11a464:
    // 0x11a464: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a468: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11a468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11a46c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11a46cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11a470: 0x521fffc  bgez        $t1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11A470u;
    {
        const bool branch_taken_0x11a470 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x11A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A470u;
        // 0x11a474: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a470) {
            ctx->pc = 0x11A464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a464;
        }
    }
    ctx->pc = 0x11A478u;
label_11a478:
    // 0x11a478: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A478u;
    {
        const bool branch_taken_0x11a478 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A478u;
        // 0x11a47c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a478) {
            ctx->pc = 0x11A484u;
            goto label_11a484;
        }
    }
    ctx->pc = 0x11A480u;
    // 0x11a480: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11a480u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_11a484:
    // 0x11a484: 0x8fae0140  lw          $t6, 0x140($sp)
    ctx->pc = 0x11a484u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11a488: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x11a488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x11a48c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x11a48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a490: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A490u;
    {
        const bool branch_taken_0x11a490 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A490u;
        // 0x11a494: 0x46020081  sub.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a490) {
            ctx->pc = 0x11A4B4u;
            goto label_11a4b4;
        }
    }
    ctx->pc = 0x11A498u;
    // 0x11a498: 0x240702d  daddu       $t6, $s2, $zero
    ctx->pc = 0x11a498u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a49c: 0x27ad00a4  addiu       $t5, $sp, 0xA4
    ctx->pc = 0x11a49cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_11a4a0:
    // 0x11a4a0: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a4a4: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x11a4a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x11a4a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11a4a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11a4ac: 0x15c0fffc  bnez        $t6, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11A4ACu;
    {
        const bool branch_taken_0x11a4ac = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4ACu;
        // 0x11a4b0: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4ac) {
            ctx->pc = 0x11A4A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a4a0;
        }
    }
    ctx->pc = 0x11A4B4u;
label_11a4b4:
    // 0x11a4b4: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A4B4u;
    {
        const bool branch_taken_0x11a4b4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4B4u;
        // 0x11a4b8: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4b4) {
            ctx->pc = 0x11A4C0u;
            goto label_11a4c0;
        }
    }
    ctx->pc = 0x11A4BCu;
    // 0x11a4bc: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11a4bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_11a4c0:
    // 0x11a4c0: 0x8faf0140  lw          $t7, 0x140($sp)
    ctx->pc = 0x11a4c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_11a4c4:
    // 0x11a4c4: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x11A4C4u;
    {
        const bool branch_taken_0x11a4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4C4u;
        // 0x11a4c8: 0xe5e00004  swc1        $f0, 0x4($t7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4c4) {
            ctx->pc = 0x11A3D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a3d8;
        }
    }
    ctx->pc = 0x11A4CCu;
label_11a4cc:
    // 0x11a4cc: 0x15cfffc3  bne         $t6, $t7, . + 4 + (-0x3D << 2)
    ctx->pc = 0x11A4CCu;
    {
        const bool branch_taken_0x11a4cc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x11A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4CCu;
        // 0x11a4d0: 0x32e20007  andi        $v0, $s7, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4cc) {
            ctx->pc = 0x11A3DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a3dc;
        }
    }
    ctx->pc = 0x11A4D4u;
    // 0x11a4d4: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x11A4D4u;
    {
        const bool branch_taken_0x11a4d4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4D4u;
        // 0x11a4d8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4d4) {
            ctx->pc = 0x11A50Cu;
            goto label_11a50c;
        }
    }
    ctx->pc = 0x11A4DCu;
    // 0x11a4dc: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11a4dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11a4e0: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11a4e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11a4e4:
    // 0x11a4e4: 0xc5e0009c  lwc1        $f0, 0x9C($t7)
    ctx->pc = 0x11a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a4e8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11a4e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11a4ec: 0xc5e100a0  lwc1        $f1, 0xA0($t7)
    ctx->pc = 0x11a4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a4f0: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x11a4f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a4f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11a4f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11a4f8: 0xe5e2009c  swc1        $f2, 0x9C($t7)
    ctx->pc = 0x11a4f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 156), bits); }
    // 0x11a4fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11a4fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11a500: 0xe5e100a0  swc1        $f1, 0xA0($t7)
    ctx->pc = 0x11a500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 160), bits); }
    // 0x11a504: 0x1d20fff7  bgtz        $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11A504u;
    {
        const bool branch_taken_0x11a504 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x11A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A504u;
        // 0x11a508: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a504) {
            ctx->pc = 0x11A4E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a4e4;
        }
    }
    ctx->pc = 0x11A50Cu;
label_11a50c:
    // 0x11a50c: 0x2a4f0002  slti        $t7, $s2, 0x2
    ctx->pc = 0x11a50cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11a510: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11A510u;
    {
        const bool branch_taken_0x11a510 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A510u;
        // 0x11a514: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a510) {
            ctx->pc = 0x11A54Cu;
            goto label_11a54c;
        }
    }
    ctx->pc = 0x11A518u;
    // 0x11a518: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11a518u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11a51c: 0x1fd6021  addu        $t4, $t7, $sp
    ctx->pc = 0x11a51cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11a520:
    // 0x11a520: 0xc581009c  lwc1        $f1, 0x9C($t4)
    ctx->pc = 0x11a520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a524: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11a524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11a528: 0xc58000a0  lwc1        $f0, 0xA0($t4)
    ctx->pc = 0x11a528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a52c: 0x292f0002  slti        $t7, $t1, 0x2
    ctx->pc = 0x11a52cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11a530: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x11a530u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11a534: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11a534u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x11a538: 0xe582009c  swc1        $f2, 0x9C($t4)
    ctx->pc = 0x11a538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 156), bits); }
    // 0x11a53c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11a53cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a540: 0xe58000a0  swc1        $f0, 0xA0($t4)
    ctx->pc = 0x11a540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 160), bits); }
    // 0x11a544: 0x11e0fff6  beqz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x11A544u;
    {
        const bool branch_taken_0x11a544 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A544u;
        // 0x11a548: 0x258cfffc  addiu       $t4, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a544) {
            ctx->pc = 0x11A520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a520;
        }
    }
    ctx->pc = 0x11A54Cu;
label_11a54c:
    // 0x11a54c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11a54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a550: 0x2a4f0002  slti        $t7, $s2, 0x2
    ctx->pc = 0x11a550u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11a554: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11A554u;
    {
        const bool branch_taken_0x11a554 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A554u;
        // 0x11a558: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a554) {
            ctx->pc = 0x11A580u;
            goto label_11a580;
        }
    }
    ctx->pc = 0x11A55Cu;
    // 0x11a55c: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11a55cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11a560: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11a560u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11a564: 0x25ec00a0  addiu       $t4, $t7, 0xA0
    ctx->pc = 0x11a564u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_11a568:
    // 0x11a568: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x11a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a56c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11a56cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11a570: 0x292f0002  slti        $t7, $t1, 0x2
    ctx->pc = 0x11a570u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11a574: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11a574u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11a578: 0x11e0fffb  beqz        $t7, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11A578u;
    {
        const bool branch_taken_0x11a578 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A578u;
        // 0x11a57c: 0x258cfffc  addiu       $t4, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a578) {
            ctx->pc = 0x11A568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a568;
        }
    }
    ctx->pc = 0x11A580u;
label_11a580:
    // 0x11a580: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A580u;
    {
        const bool branch_taken_0x11a580 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A580u;
        // 0x11a584: 0xc7a100a0  lwc1        $f1, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a580) {
            ctx->pc = 0x11A5A4u;
            goto label_11a5a4;
        }
    }
    ctx->pc = 0x11A588u;
    // 0x11a588: 0x8fae0140  lw          $t6, 0x140($sp)
    ctx->pc = 0x11a588u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11a58c: 0xe5c20008  swc1        $f2, 0x8($t6)
    ctx->pc = 0x11a58cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x11a590: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x11a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a594: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x11a594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x11a598: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x11a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a59c: 0x1000ff8e  b           . + 4 + (-0x72 << 2)
    ctx->pc = 0x11A59Cu;
    {
        const bool branch_taken_0x11a59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A59Cu;
        // 0x11a5a0: 0xe5c10004  swc1        $f1, 0x4($t6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a59c) {
            ctx->pc = 0x11A3D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a3d8;
        }
    }
    ctx->pc = 0x11A5A4u;
label_11a5a4:
    // 0x11a5a4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x11a5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a5a8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x11a5a8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x11a5ac: 0x8faf0140  lw          $t7, 0x140($sp)
    ctx->pc = 0x11a5acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11a5b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11a5b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11a5b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11a5b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11a5b8: 0xe5e20008  swc1        $f2, 0x8($t7)
    ctx->pc = 0x11a5b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x11a5bc: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x11A5BCu;
    {
        const bool branch_taken_0x11a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5BCu;
        // 0x11a5c0: 0xe5e10000  swc1        $f1, 0x0($t7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5bc) {
            ctx->pc = 0x11A4C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a4c4;
        }
    }
    ctx->pc = 0x11A5C4u;
    // 0x11a5c4: 0x0  nop
    ctx->pc = 0x11a5c4u;
    // NOP
label_11a5c8:
    // 0x11a5c8: 0x1000ff75  b           . + 4 + (-0x8B << 2)
    ctx->pc = 0x11A5C8u;
    {
        const bool branch_taken_0x11a5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5C8u;
        // 0x11a5cc: 0x2494023  subu        $t0, $s2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5c8) {
            ctx->pc = 0x11A3A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a3a0;
        }
    }
    ctx->pc = 0x11A5D0u;
label_11a5d0:
    // 0x11a5d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a5d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_11a5d4:
    // 0x11a5d4: 0xc046b30  jal         func_11ACC0
    ctx->pc = 0x11A5D4u;
    SET_GPR_U32(ctx, 31, 0x11A5DCu);
    ctx->pc = 0x11A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5D4u;
    // 0x11a5d8: 0x132023  negu        $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACC0u, 0x11A5D4u, 0x11A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5DCu;
label_11a5dc:
    // 0x11a5dc: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x11a5dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x11a5e0: 0x25ceb070  addiu       $t6, $t6, -0x4F90
    ctx->pc = 0x11a5e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946928));
    // 0x11a5e4: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11a5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a5e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11a5e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a5ec: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x11A5ECu;
    {
        const bool branch_taken_0x11a5ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5ECu;
        // 0x11a5f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5ec) {
            ctx->pc = 0x11A64Cu;
            goto label_11a64c;
        }
    }
    ctx->pc = 0x11A5F4u;
    // 0x11a5f4: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a5f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a5f8: 0x29d6821  addu        $t5, $s4, $sp
    ctx->pc = 0x11a5f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11a5fc: 0x25efb06c  addiu       $t7, $t7, -0x4F94
    ctx->pc = 0x11a5fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946924));
    // 0x11a600: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11a600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11a604: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a608: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x11a608u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11a60c: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x11a60cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x11a610: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x11a610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x11a614: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11a614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11a618: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a618u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11a61c: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x11a61cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11a620: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x11a620u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a624: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11a624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11a628: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x11a628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11a62c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11a62cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11a630: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11a634: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a634u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11a638: 0x440f0800  mfc1        $t7, $f1
    ctx->pc = 0x11a638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11a63c: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x11a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x11a640: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x11a640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11a644: 0x1000ff26  b           . + 4 + (-0xDA << 2)
    ctx->pc = 0x11A644u;
    {
        const bool branch_taken_0x11a644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A644u;
        // 0x11a648: 0xadcf0000  sw          $t7, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a644) {
            ctx->pc = 0x11A2E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a2e0;
        }
    }
    ctx->pc = 0x11A64Cu;
label_11a64c:
    // 0x11a64c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a64cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11a650: 0x29d7821  addu        $t7, $s4, $sp
    ctx->pc = 0x11a650u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11a654: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11a654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11a658: 0x1000ff21  b           . + 4 + (-0xDF << 2)
    ctx->pc = 0x11A658u;
    {
        const bool branch_taken_0x11a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A658u;
        // 0x11a65c: 0xadee0000  sw          $t6, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a658) {
            ctx->pc = 0x11A2E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a2e0;
        }
    }
    ctx->pc = 0x11A660u;
label_11a660:
    // 0x11a660: 0x8dcffffc  lw          $t7, -0x4($t6)
    ctx->pc = 0x11a660u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294967292)));
    // 0x11a664: 0x31ef003f  andi        $t7, $t7, 0x3F
    ctx->pc = 0x11a664u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)63);
label_11a668:
    // 0x11a668: 0x1000feaf  b           . + 4 + (-0x151 << 2)
    ctx->pc = 0x11A668u;
    {
        const bool branch_taken_0x11a668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A668u;
        // 0x11a66c: 0xadcffffc  sw          $t7, -0x4($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 4294967292), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a668) {
            ctx->pc = 0x11A128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a128;
        }
    }
    ctx->pc = 0x11A670u;
label_11a670:
    // 0x11a670: 0x8dcffffc  lw          $t7, -0x4($t6)
    ctx->pc = 0x11a670u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294967292)));
    // 0x11a674: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x11A674u;
    {
        const bool branch_taken_0x11a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A674u;
        // 0x11a678: 0x31ef007f  andi        $t7, $t7, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a674) {
            ctx->pc = 0x11A668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a668;
        }
    }
    ctx->pc = 0x11A67Cu;
label_11a67c:
    // 0x11a67c: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A67Cu;
    {
        const bool branch_taken_0x11a67c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A67Cu;
        // 0x11a680: 0x3c0e003e  lui         $t6, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a67c) {
            ctx->pc = 0x11A694u;
            goto label_11a694;
        }
    }
    ctx->pc = 0x11A684u;
    // 0x11a684: 0x29d7821  addu        $t7, $s4, $sp
    ctx->pc = 0x11a684u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11a688: 0x8deefffc  lw          $t6, -0x4($t7)
    ctx->pc = 0x11a688u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    // 0x11a68c: 0x1000fe8c  b           . + 4 + (-0x174 << 2)
    ctx->pc = 0x11A68Cu;
    {
        const bool branch_taken_0x11a68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A68Cu;
        // 0x11a690: 0xef203  sra         $fp, $t6, 8 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 14), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a68c) {
            ctx->pc = 0x11A0C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a0c0;
        }
    }
    ctx->pc = 0x11A694u;
label_11a694:
    // 0x11a694: 0x25ceb07c  addiu       $t6, $t6, -0x4F84
    ctx->pc = 0x11a694u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946940));
    // 0x11a698: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a69c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x11a69cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a6a0: 0x4503fe87  bc1tl       . + 4 + (-0x179 << 2)
    ctx->pc = 0x11A6A0u;
    {
        const bool branch_taken_0x11a6a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a6a0) {
            ctx->pc = 0x11A6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A6A0u;
            // 0x11a6a4: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A0C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a0c0;
        }
    }
    ctx->pc = 0x11A6A8u;
    // 0x11a6a8: 0x1000fe85  b           . + 4 + (-0x17B << 2)
    ctx->pc = 0x11A6A8u;
    {
        const bool branch_taken_0x11a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a6a8) {
            ctx->pc = 0x11A0C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a0c0;
        }
    }
    ctx->pc = 0x11A6B0u;
}
