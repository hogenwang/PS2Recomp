#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001507E0
// Address: 0x1507e0 - 0x150940
void sub_001507E0_0x1507e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001507E0_0x1507e0");
#endif

    switch (ctx->pc) {
        case 0x150808u: goto label_150808;
        case 0x15084cu: goto label_15084c;
        case 0x150870u: goto label_150870;
        case 0x1508b0u: goto label_1508b0;
        default: break;
    }

    ctx->pc = 0x1507e0u;

    // 0x1507e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1507e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1507e4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1507e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1507e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1507e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1507ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1507ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1507f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1507f4: 0x2442f320  addiu       $v0, $v0, -0xCE0
    ctx->pc = 0x1507f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964000));
    // 0x1507f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1507f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1507fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1507fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x150800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150804: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_150808:
    // 0x150808: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x150808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15080c: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x15080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x150810: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x150810u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x150814: 0x28610012  slti        $at, $v1, 0x12
    ctx->pc = 0x150814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x150818: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x150818u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15081c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x15081cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x150820: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x150820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x150824: 0xa0400005  sb          $zero, 0x5($v0)
    ctx->pc = 0x150824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x150828: 0x1420fff7  bnez        $at, . + 4 + (-0x9 << 2)
    ctx->pc = 0x150828u;
    {
        const bool branch_taken_0x150828 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15082Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150828u;
            // 0x15082c: 0x24420006  addiu       $v0, $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150828) {
            ctx->pc = 0x150808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150808;
        }
    }
    ctx->pc = 0x150830u;
    // 0x150830: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x150830u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x150834: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x150834u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x150838: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x150838u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x15083c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15083cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150840: 0x2652e660  addiu       $s2, $s2, -0x19A0
    ctx->pc = 0x150840u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960736));
    // 0x150844: 0x2631e710  addiu       $s1, $s1, -0x18F0
    ctx->pc = 0x150844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960912));
    // 0x150848: 0x2610f310  addiu       $s0, $s0, -0xCF0
    ctx->pc = 0x150848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963984));
label_15084c:
    // 0x15084c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x15084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x150850: 0x9043f35b  lbu         $v1, -0xCA5($v0)
    ctx->pc = 0x150850u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x150854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150858: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150858u;
    {
        const bool branch_taken_0x150858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150858u;
            // 0x15085c: 0x82530000  lb          $s3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150858) {
            ctx->pc = 0x150868u;
            goto label_150868;
        }
    }
    ctx->pc = 0x150860u;
    // 0x150860: 0x82330000  lb          $s3, 0x0($s1)
    ctx->pc = 0x150860u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x150864: 0x0  nop
    ctx->pc = 0x150864u;
    // NOP
label_150868:
    // 0x150868: 0xc067c48  jal         func_19F120
    ctx->pc = 0x150868u;
    SET_GPR_U32(ctx, 31, 0x150870u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150870u; }
        if (ctx->pc != 0x150870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150870u; }
        if (ctx->pc != 0x150870u) { return; }
    }
    ctx->pc = 0x150870u;
label_150870:
    // 0x150870: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x150870u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150874: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x150874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150878: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x150878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15087c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15087cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x150880: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150884: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x150884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x150888: 0x0  nop
    ctx->pc = 0x150888u;
    // NOP
    // 0x15088c: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x15088cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x150890: 0x660001d  bltz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x150890u;
    {
        const bool branch_taken_0x150890 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x150894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150890u;
            // 0x150894: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150890) {
            ctx->pc = 0x150908u;
            goto label_150908;
        }
    }
    ctx->pc = 0x150898u;
    // 0x150898: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x15089c: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x15089cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x1508a0: 0x9067f35b  lbu         $a3, -0xCA5($v1)
    ctx->pc = 0x1508a0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964059)));
    // 0x1508a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1508a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1508a8: 0x24a5f320  addiu       $a1, $a1, -0xCE0
    ctx->pc = 0x1508a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964000));
    // 0x1508ac: 0x0  nop
    ctx->pc = 0x1508acu;
    // NOP
label_1508b0:
    // 0x1508b0: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x1508b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1508b4: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1508B4u;
    {
        const bool branch_taken_0x1508b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1508B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1508B4u;
            // 0x1508b8: 0x73001a  div         $zero, $v1, $s3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508b4) {
            ctx->pc = 0x1508C0u;
            goto label_1508c0;
        }
    }
    ctx->pc = 0x1508BCu;
    // 0x1508bc: 0x1cd  break       0, 7
    ctx->pc = 0x1508bcu;
    runtime->handleBreak(rdram, ctx);
label_1508c0:
    // 0x1508c0: 0x2010  mfhi        $a0
    ctx->pc = 0x1508c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1508c4: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1508c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1508c8: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1508C8u;
    {
        const bool branch_taken_0x1508c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x1508CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1508C8u;
            // 0x1508cc: 0x806a0001  lb          $t2, 0x1($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508c8) {
            ctx->pc = 0x1508D8u;
            goto label_1508d8;
        }
    }
    ctx->pc = 0x1508D0u;
    // 0x1508d0: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x1508d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1508d4: 0x806a0001  lb          $t2, 0x1($v1)
    ctx->pc = 0x1508d4u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1508d8:
    // 0x1508d8: 0xaa2021  addu        $a0, $a1, $t2
    ctx->pc = 0x1508d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1508dc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1508dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1508e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1508E0u;
    {
        const bool branch_taken_0x1508e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1508e0) {
            ctx->pc = 0x1508F8u;
            goto label_1508f8;
        }
    }
    ctx->pc = 0x1508E8u;
    // 0x1508e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1508ec: 0xa20a0000  sb          $t2, 0x0($s0)
    ctx->pc = 0x1508ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x1508f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1508F0u;
    {
        const bool branch_taken_0x1508f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1508F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1508F0u;
            // 0x1508f4: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508f0) {
            ctx->pc = 0x150908u;
            goto label_150908;
        }
    }
    ctx->pc = 0x1508F8u;
label_1508f8:
    // 0x1508f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1508f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1508fc: 0x269082a  slt         $at, $s3, $t1
    ctx->pc = 0x1508fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x150900: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x150900u;
    {
        const bool branch_taken_0x150900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x150900) {
            ctx->pc = 0x1508B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1508b0;
        }
    }
    ctx->pc = 0x150908u;
label_150908:
    // 0x150908: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x150908u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15090c: 0x2a830008  slti        $v1, $s4, 0x8
    ctx->pc = 0x15090cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x150910: 0x26520012  addiu       $s2, $s2, 0x12
    ctx->pc = 0x150910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 18));
    // 0x150914: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x150914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
    // 0x150918: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x150918u;
    {
        const bool branch_taken_0x150918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15091Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150918u;
            // 0x15091c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150918) {
            ctx->pc = 0x15084Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15084c;
        }
    }
    ctx->pc = 0x150920u;
    // 0x150920: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x150920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150924: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x150924u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150928: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x150928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15092c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15092cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150938: 0x3e00008  jr          $ra
    ctx->pc = 0x150938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15093Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150938u;
            // 0x15093c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150940u;
    ctx->pc = 0x150940u;
}
