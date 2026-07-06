#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002743B8
// Address: 0x2743b8 - 0x2744f8
void sub_002743B8_0x2743b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002743B8_0x2743b8");
#endif

    switch (ctx->pc) {
        case 0x2743d0u: goto label_2743d0;
        case 0x2743dcu: goto label_2743dc;
        case 0x2743f8u: goto label_2743f8;
        case 0x274434u: goto label_274434;
        case 0x2744a8u: goto label_2744a8;
        case 0x2744e4u: goto label_2744e4;
        default: break;
    }

    ctx->pc = 0x2743b8u;

    // 0x2743b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2743b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2743bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2743bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2743c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2743c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2743c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2743c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2743c8: 0xc09e56c  jal         func_2795B0
    ctx->pc = 0x2743C8u;
    SET_GPR_U32(ctx, 31, 0x2743D0u);
    ctx->pc = 0x2743CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2743C8u;
            // 0x2743cc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2795B0u;
    if (runtime->hasFunction(0x2795B0u)) {
        auto targetFn = runtime->lookupFunction(0x2795B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743D0u; }
        if (ctx->pc != 0x2743D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002795B0_0x2795b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743D0u; }
        if (ctx->pc != 0x2743D0u) { return; }
    }
    ctx->pc = 0x2743D0u;
label_2743d0:
    // 0x2743d0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2743d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2743d4: 0xc09e56c  jal         func_2795B0
    ctx->pc = 0x2743D4u;
    SET_GPR_U32(ctx, 31, 0x2743DCu);
    ctx->pc = 0x2743D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2743D4u;
            // 0x2743d8: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2795B0u;
    if (runtime->hasFunction(0x2795B0u)) {
        auto targetFn = runtime->lookupFunction(0x2795B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743DCu; }
        if (ctx->pc != 0x2743DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002795B0_0x2795b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743DCu; }
        if (ctx->pc != 0x2743DCu) { return; }
    }
    ctx->pc = 0x2743DCu;
label_2743dc:
    // 0x2743dc: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2743dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2743e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2743e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2743e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2743e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2743e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2743e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2743ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2743ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2743F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2743ECu;
            // 0x2743f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2743F4u;
    // 0x2743f4: 0x0  nop
    ctx->pc = 0x2743f4u;
    // NOP
label_2743f8:
    // 0x2743f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2743f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2743fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2743fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274404: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x274404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x274408: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x27440c: 0x24634454  addiu       $v1, $v1, 0x4454
    ctx->pc = 0x27440cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17492));
    // 0x274410: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274414: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274414u;
    {
        const bool branch_taken_0x274414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274414) {
            ctx->pc = 0x274434u;
            goto label_274434;
        }
    }
    ctx->pc = 0x27441Cu;
    // 0x27441c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x27441cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274420: 0x24844468  addiu       $a0, $a0, 0x4468
    ctx->pc = 0x274420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17512));
    // 0x274424: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x274424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274428: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27442c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27442Cu;
    SET_GPR_U32(ctx, 31, 0x274434u);
    ctx->pc = 0x274430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27442Cu;
            // 0x274430: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274434u; }
        if (ctx->pc != 0x274434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274434u; }
        if (ctx->pc != 0x274434u) { return; }
    }
    ctx->pc = 0x274434u;
label_274434:
    // 0x274434: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274434u;
    {
        const bool branch_taken_0x274434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274434) {
            ctx->pc = 0x274468u;
            goto label_274468;
        }
    }
    ctx->pc = 0x27443Cu;
    // 0x27443c: 0xdf3aaf97  ld          $k0, -0x5069($t9)
    ctx->pc = 0x27443cu;
    SET_GPR_U64(ctx, 26, READ64(ADD32(GPR_U32(ctx, 25), 4294946711)));
    // 0x274440: 0xfc8fa49a  sd          $t7, -0x5B66($a0)
    ctx->pc = 0x274440u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294943898), GPR_U64(ctx, 15));
    // 0x274444: 0x87e21af3  lh          $v0, 0x1AF3($ra)
    ctx->pc = 0x274444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 31), 6899)));
    // 0x274448: 0x258e5960  addiu       $t6, $t4, 0x5960
    ctx->pc = 0x274448u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 22880));
    // 0x27444c: 0xd85020  add         $t2, $a2, $t8
    ctx->pc = 0x27444cu;
    {     int32_t rs_val = GPR_S32(ctx, 6);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x274450: 0x84a200b3  lh          $v0, 0xB3($a1)
    ctx->pc = 0x274450u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 179)));
    // 0x274454: 0x0  nop
    ctx->pc = 0x274454u;
    // NOP
    // 0x274458: 0x7049b64f  .word       0x7049B64F                   # INVALID     $v0, $t1, -0x49B1 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x274458u;
    // Unhandled MMI instruction: function 0xF
    // 0x27445c: 0x971e2498  lhu         $fp, 0x2498($t8)
    ctx->pc = 0x27445cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9368)));
    // 0x274460: 0x7049b663  .word       0x7049B663                   # INVALID     $v0, $t1, -0x499D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x274460u;
    // Unhandled MMI instruction: function 0x23
    // 0x274464: 0x0  nop
    ctx->pc = 0x274464u;
    // NOP
label_274468:
    // 0x274468: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x274468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27446c: 0x244632ac  addiu       $a2, $v0, 0x32AC
    ctx->pc = 0x27446cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12972));
    // 0x274470: 0x317dc02  .word       0x0317DC02                   # srl         $k1, $s7, 16 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274470u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 23), 16));
    // 0x274474: 0xa617dc07  sh          $s7, -0x23F9($s0)
    ctx->pc = 0x274474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294958087), (uint16_t)GPR_U32(ctx, 23));
    // 0x274478: 0x84177c43  lh          $s7, 0x7C43($zero)
    ctx->pc = 0x274478u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 0), 31811)));
    // 0x27447c: 0x820f7c03  lb          $t7, 0x7C03($s0)
    ctx->pc = 0x27447cu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 31747)));
    // 0x274480: 0xa61fae07  sh          $ra, -0x51F9($s0)
    ctx->pc = 0x274480u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294946311), (uint16_t)GPR_U32(ctx, 31));
    // 0x274484: 0x86037887  lh          $v1, 0x7887($s0)
    ctx->pc = 0x274484u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30855)));
    // 0x274488: 0xa6039985  sh          $v1, -0x667B($s0)
    ctx->pc = 0x274488u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294941061), (uint16_t)GPR_U32(ctx, 3));
    // 0x27448c: 0xf9ffde98  sqc2        $vf31, -0x2168($t7)
    ctx->pc = 0x27448cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 4294958744), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x274490: 0xa607a807  sh          $a3, -0x57F9($s0)
    ctx->pc = 0x274490u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294944775), (uint16_t)GPR_U32(ctx, 7));
    // 0x274494: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274494u;
    {
        const bool branch_taken_0x274494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274494) {
            ctx->pc = 0x2744C4u;
            goto label_2744c4;
        }
    }
    ctx->pc = 0x27449Cu;
    // 0x27449c: 0x8fc5506d  lw          $a1, 0x506D($fp)
    ctx->pc = 0x27449cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20589)));
    // 0x2744a0: 0xcb4bb45  jal         func_2D2ED14
    ctx->pc = 0x2744A0u;
    SET_GPR_U32(ctx, 31, 0x2744A8u);
    ctx->pc = 0x2744A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2744A0u;
            // 0x2744a4: 0xdd5cfc1f  ld          $gp, -0x3E1($t2) (Delay Slot)
        SET_GPR_U64(ctx, 28, READ64(ADD32(GPR_U32(ctx, 10), 4294966303)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2ED14u;
    {
        auto targetFn = runtime->lookupFunction(0x2D2ED14u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2744A8u; }
        if (ctx->pc != 0x2744A8u) { return; }
    }
    ctx->pc = 0x2744A8u;
label_2744a8:
    // 0x2744a8: 0x8f4cba25  lw          $t4, -0x45DB($k0)
    ctx->pc = 0x2744a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 4294949413)));
    // 0x2744ac: 0x86621943  lh          $v0, 0x1943($s3)
    ctx->pc = 0x2744acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6467)));
    // 0x2744b0: 0xffcea322  sd          $t6, -0x5CDE($fp)
    ctx->pc = 0x2744b0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294943522), GPR_U64(ctx, 14));
    // 0x2744b4: 0x7f46b940  sq          $a2, -0x46C0($k0)
    ctx->pc = 0x2744b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 4294949184), GPR_VEC(ctx, 6));
    // 0x2744b8: 0x971e2499  lhu         $fp, 0x2499($t8)
    ctx->pc = 0x2744b8u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9369)));
    // 0x2744bc: 0x7f46b96c  sq          $a2, -0x4694($k0)
    ctx->pc = 0x2744bcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 4294949228), GPR_VEC(ctx, 6));
    // 0x2744c0: 0x0  nop
    ctx->pc = 0x2744c0u;
    // NOP
label_2744c4:
    // 0x2744c4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2744c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2744c8: 0x244244b4  addiu       $v0, $v0, 0x44B4
    ctx->pc = 0x2744c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17588));
    // 0x2744cc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2744ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2744d0: 0x24844494  addiu       $a0, $a0, 0x4494
    ctx->pc = 0x2744d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17556));
    // 0x2744d4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2744d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2744d8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2744d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2744dc: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2744DCu;
    SET_GPR_U32(ctx, 31, 0x2744E4u);
    ctx->pc = 0x2744E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2744DCu;
            // 0x2744e0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2744E4u; }
        if (ctx->pc != 0x2744E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2744E4u; }
        if (ctx->pc != 0x2744E4u) { return; }
    }
    ctx->pc = 0x2744E4u;
label_2744e4:
    // 0x2744e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2744e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2744e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2744e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2744ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2744ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2744f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2744F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2744F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2744F0u;
            // 0x2744f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2744F8u;
    ctx->pc = 0x2744f8u;
}
