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

// Function: sub_002757D8
// Address: 0x2757d8 - 0x2758b8
void sub_002757D8_0x2757d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002757D8_0x2757d8");
#endif

    switch (ctx->pc) {
        case 0x275814u: goto label_275814;
        case 0x27582cu: goto label_27582c;
        case 0x275884u: goto label_275884;
        case 0x2758a4u: goto label_2758a4;
        default: break;
    }

    ctx->pc = 0x2757d8u;

    // 0x2757d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2757d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2757dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2757dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2757e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2757e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2757e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2757e8: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x2757e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x2757ec: 0x24635834  addiu       $v1, $v1, 0x5834
    ctx->pc = 0x2757ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22580));
    // 0x2757f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2757f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2757f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2757F4u;
    {
        const bool branch_taken_0x2757f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2757f4) {
            ctx->pc = 0x275814u;
            goto label_275814;
        }
    }
    ctx->pc = 0x2757FCu;
    // 0x2757fc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2757fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275800: 0x24845848  addiu       $a0, $a0, 0x5848
    ctx->pc = 0x275800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22600));
    // 0x275804: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x275804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x275808: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x275808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27580c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27580Cu;
    SET_GPR_U32(ctx, 31, 0x275814u);
    ctx->pc = 0x275810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27580Cu;
    // 0x275810: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27580Cu, 0x275814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275814u;
label_275814:
    // 0x275814: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275814u;
    {
        const bool branch_taken_0x275814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275814) {
            ctx->pc = 0x275848u;
            goto label_275848;
        }
    }
    ctx->pc = 0x27581Cu;
    // 0x27581c: 0xfdf2767a  sd          $s2, 0x767A($t7)
    ctx->pc = 0x27581cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 30330), GPR_U64(ctx, 18));
    // 0x275820: 0xc5a820  add         $s5, $a2, $a1
    ctx->pc = 0x275820u;
    {     int32_t rs_val = GPR_S32(ctx, 6);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
    // 0x275824: 0xc94f37e  jal         func_253CDF8
    ctx->pc = 0x275824u;
    SET_GPR_U32(ctx, 31, 0x27582Cu);
    ctx->pc = 0x275828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275824u;
    // 0x275828: 0xa0e55019  sb          $a1, 0x5019($a3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 7), 20505), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253CDF8u, 0x275824u, 0x27582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27582Cu;
label_27582c:
    // 0x27582c: 0x84b14333  lh          $s1, 0x4333($a1)
    ctx->pc = 0x27582cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 17203)));
    // 0x275830: 0x2559c7e8  addiu       $t9, $t2, -0x3818
    ctx->pc = 0x275830u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952936));
    // 0x275834: 0x0  nop
    ctx->pc = 0x275834u;
    // NOP
    // 0x275838: 0xae2695bd  sw          $a2, -0x6A43($s1)
    ctx->pc = 0x275838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294940093), GPR_U32(ctx, 6));
    // 0x27583c: 0x971e2a6e  lhu         $fp, 0x2A6E($t8)
    ctx->pc = 0x27583cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10862)));
    // 0x275840: 0xae2695b1  sw          $a2, -0x6A4F($s1)
    ctx->pc = 0x275840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294940081), GPR_U32(ctx, 6));
    // 0x275844: 0x0  nop
    ctx->pc = 0x275844u;
    // NOP
label_275848:
    // 0x275848: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x275848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27584c: 0x9eaad77  j           func_7AAB5DC
    ctx->pc = 0x27584Cu;
    ctx->pc = 0x275850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27584Cu;
    // 0x275850: 0xa0433410  sb          $v1, 0x3410($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 13328), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AAB5DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AAB5DCu, 0x27584Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x275854u;
    // 0x275854: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x275854u;
    {
        const bool branch_taken_0x275854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275854) {
            ctx->pc = 0x275884u;
            goto label_275884;
        }
    }
    ctx->pc = 0x27585Cu;
    // 0x27585c: 0xff6cd36a  sd          $t4, -0x2C96($k1)
    ctx->pc = 0x27585cu;
    WRITE64(ADD32(GPR_U32(ctx, 27), 4294955882), GPR_U64(ctx, 12));
    // 0x275860: 0x8e092235  lw          $t1, 0x2235($s0)
    ctx->pc = 0x275860u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8757)));
    // 0x275864: 0xde7bb097  ld          $k1, -0x4F69($s3)
    ctx->pc = 0x275864u;
    SET_GPR_U64(ctx, 27, READ64(ADD32(GPR_U32(ctx, 19), 4294946967)));
    // 0x275868: 0x8657c583  lh          $s7, -0x3A7D($s2)
    ctx->pc = 0x275868u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294952323)));
    // 0x27586c: 0x8fd7f7a5  lw          $s7, -0x85B($fp)
    ctx->pc = 0x27586cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294965157)));
    // 0x275870: 0x26b1bfb8  addiu       $s1, $s5, -0x4048
    ctx->pc = 0x275870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950840));
    // 0x275874: 0xae2695db  sw          $a2, -0x6A25($s1)
    ctx->pc = 0x275874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294940123), GPR_U32(ctx, 6));
    // 0x275878: 0x971e2a6f  lhu         $fp, 0x2A6F($t8)
    ctx->pc = 0x275878u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10863)));
    // 0x27587c: 0xae2695d7  sw          $a2, -0x6A29($s1)
    ctx->pc = 0x27587cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294940119), GPR_U32(ctx, 6));
    // 0x275880: 0x0  nop
    ctx->pc = 0x275880u;
    // NOP
label_275884:
    // 0x275884: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x275884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x275888: 0x24425874  addiu       $v0, $v0, 0x5874
    ctx->pc = 0x275888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22644));
    // 0x27588c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x27588cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275890: 0x24845854  addiu       $a0, $a0, 0x5854
    ctx->pc = 0x275890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22612));
    // 0x275894: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x275894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x275898: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x275898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27589c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27589Cu;
    SET_GPR_U32(ctx, 31, 0x2758A4u);
    ctx->pc = 0x2758A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27589Cu;
    // 0x2758a0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27589Cu, 0x2758A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758A4u;
label_2758a4:
    // 0x2758a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2758a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2758a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2758a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2758ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2758acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2758b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2758B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2758B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758B0u;
        // 0x2758b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2758B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2758B8u;
}
