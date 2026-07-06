#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275078
// Address: 0x275078 - 0x275180
void sub_00275078_0x275078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275078_0x275078");
#endif

    switch (ctx->pc) {
        case 0x2750bcu: goto label_2750bc;
        case 0x275108u: goto label_275108;
        case 0x27511cu: goto label_27511c;
        case 0x275124u: goto label_275124;
        case 0x275164u: goto label_275164;
        default: break;
    }

    ctx->pc = 0x275078u;

    // 0x275078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27507c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27507cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275080: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x275084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x275088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27508c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275090: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x275090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x275094: 0x246350dc  addiu       $v1, $v1, 0x50DC
    ctx->pc = 0x275094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20700));
    // 0x275098: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27509c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27509Cu;
    {
        const bool branch_taken_0x27509c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27509c) {
            ctx->pc = 0x2750BCu;
            goto label_2750bc;
        }
    }
    ctx->pc = 0x2750A4u;
    // 0x2750a4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2750a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2750a8: 0x248450f0  addiu       $a0, $a0, 0x50F0
    ctx->pc = 0x2750a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20720));
    // 0x2750ac: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2750acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2750b0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2750b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2750b4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2750B4u;
    SET_GPR_U32(ctx, 31, 0x2750BCu);
    ctx->pc = 0x2750B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2750B4u;
            // 0x2750b8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2750BCu; }
        if (ctx->pc != 0x2750BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2750BCu; }
        if (ctx->pc != 0x2750BCu) { return; }
    }
    ctx->pc = 0x2750BCu;
label_2750bc:
    // 0x2750bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2750BCu;
    {
        const bool branch_taken_0x2750bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2750bc) {
            ctx->pc = 0x2750F0u;
            goto label_2750f0;
        }
    }
    ctx->pc = 0x2750C4u;
    // 0x2750c4: 0x85cf5a2b  lh          $t7, 0x5A2B($t6)
    ctx->pc = 0x2750c4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 23083)));
    // 0x2750c8: 0x86908c53  lh          $s0, -0x73AD($s4)
    ctx->pc = 0x2750c8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294937683)));
    // 0x2750cc: 0x8ff5dc55  lw          $s5, -0x23AB($ra)
    ctx->pc = 0x2750ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 31), 4294958165)));
    // 0x2750d0: 0xffd21242  sd          $s2, 0x1242($fp)
    ctx->pc = 0x2750d0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4674), GPR_U64(ctx, 18));
    // 0x2750d4: 0xfedc9822  sd          $gp, -0x67DE($s6)
    ctx->pc = 0x2750d4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294940706), GPR_U64(ctx, 28));
    // 0x2750d8: 0x860fd6f3  lh          $t7, -0x290D($s0)
    ctx->pc = 0x2750d8u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294956787)));
    // 0x2750dc: 0x0  nop
    ctx->pc = 0x2750dcu;
    // NOP
    // 0x2750e0: 0x809c811a  lb          $gp, -0x7EE6($a0)
    ctx->pc = 0x2750e0u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294934810)));
    // 0x2750e4: 0x0  nop
    ctx->pc = 0x2750e4u;
    // NOP
    // 0x2750e8: 0x809c813e  lb          $gp, -0x7EC2($a0)
    ctx->pc = 0x2750e8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294934846)));
    // 0x2750ec: 0x0  nop
    ctx->pc = 0x2750ecu;
    // NOP
label_2750f0:
    // 0x2750f0: 0xbda4e13a  cache       0x04, -0x1EC6($t5)
    ctx->pc = 0x2750f0u;
    // CACHE instruction (ignored)
    // 0x2750f4: 0x9962e19f  lwr         $v0, -0x1E61($t3)
    ctx->pc = 0x2750f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294959519); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2750f8: 0x3da0f5fb  .word       0x3DA0F5FB                   # lui         $zero, 0xF5FB # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2750f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)62971 << 16));
    // 0x2750fc: 0x3de6e5fb  .word       0x3DE6E5FB                   # lui         $a2, 0xE5FB # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2750fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58875 << 16));
    // 0x275100: 0xfa2e95f  jal         func_E8BA57C
    ctx->pc = 0x275100u;
    SET_GPR_U32(ctx, 31, 0x275108u);
    ctx->pc = 0x275104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275100u;
            // 0x275104: 0x3922f9ff  xori        $v0, $t1, 0xF9FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)63999);
        ctx->in_delay_slot = false;
    ctx->pc = 0xE8BA57Cu;
    {
        auto targetFn = runtime->lookupFunction(0xE8BA57Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275108u; }
        if (ctx->pc != 0x275108u) { return; }
    }
    ctx->pc = 0x275108u;
label_275108:
    // 0x275108: 0xd8a2f97f  lqc2        $vf2, -0x681($a1)
    ctx->pc = 0x275108u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 4294965631)));
    // 0x27510c: 0x5f3d0920  .word       0x5F3D0920                   # bgtzl       $t9, . + 4 + (0x920 << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27510Cu;
    {
        const bool branch_taken_0x27510c = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x27510c) {
            ctx->pc = 0x275110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27510Cu;
            // 0x275110: 0x9a2f15f  j           func_68BC57C (Delay Slot)
        // J 0x68BC57C - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x277590u;
            return;
        }
    }
    ctx->pc = 0x275114u;
    // 0x275114: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x275114u;
    {
        const bool branch_taken_0x275114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275114) {
            ctx->pc = 0x275144u;
            goto label_275144;
        }
    }
    ctx->pc = 0x27511Cu;
label_27511c:
    // 0x27511c: 0xc29d208  jal         func_A74820
    ctx->pc = 0x27511Cu;
    SET_GPR_U32(ctx, 31, 0x275124u);
    ctx->pc = 0x275120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27511Cu;
            // 0x275120: 0xdfc266a7  ld          $v0, 0x66A7($fp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 26279)));
        ctx->in_delay_slot = false;
    ctx->pc = 0xA74820u;
    {
        auto targetFn = runtime->lookupFunction(0xA74820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275124u; }
        if (ctx->pc != 0x275124u) { return; }
    }
    ctx->pc = 0x275124u;
label_275124:
    // 0x275124: 0xdf8bd267  ld          $t3, -0x2D99($gp)
    ctx->pc = 0x275124u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 28), 4294955623)));
    // 0x275128: 0xdcacbad7  ld          $t4, -0x4529($a1)
    ctx->pc = 0x275128u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 5), 4294949591)));
    // 0x27512c: 0x374b020  add         $s6, $k1, $s4
    ctx->pc = 0x27512cu;
    {     int32_t rs_val = GPR_S32(ctx, 27);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x275130: 0xdc6e5937  ld          $t6, 0x5937($v1)
    ctx->pc = 0x275130u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 22839)));
    // 0x275134: 0x809a118c  lb          $k0, 0x118C($a0)
    ctx->pc = 0x275134u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4492)));
    // 0x275138: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275138u;
    // Unhandled SPECIAL instruction: 0x1
    // 0x27513c: 0x809a11a8  lb          $k0, 0x11A8($a0)
    ctx->pc = 0x27513cu;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4520)));
    // 0x275140: 0x0  nop
    ctx->pc = 0x275140u;
    // NOP
label_275144:
    // 0x275144: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x275144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x275148: 0x24425134  addiu       $v0, $v0, 0x5134
    ctx->pc = 0x275148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20788));
    // 0x27514c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x27514cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275150: 0x24845114  addiu       $a0, $a0, 0x5114
    ctx->pc = 0x275150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20756));
    // 0x275154: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x275154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x275158: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x275158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27515c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27515Cu;
    SET_GPR_U32(ctx, 31, 0x275164u);
    ctx->pc = 0x275160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27515Cu;
            // 0x275160: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275164u; }
        if (ctx->pc != 0x275164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275164u; }
        if (ctx->pc != 0x275164u) { return; }
    }
    ctx->pc = 0x275164u;
label_275164:
    // 0x275164: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x275164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x275168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27516c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27516cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275174: 0x3e00008  jr          $ra
    ctx->pc = 0x275174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275174u;
            // 0x275178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27517Cu;
    // 0x27517c: 0x0  nop
    ctx->pc = 0x27517cu;
    // NOP
    ctx->pc = 0x275180u;
}
