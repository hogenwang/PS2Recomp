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

// Function: sub_00275180
// Address: 0x275180 - 0x275288
void sub_00275180_0x275180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275180_0x275180");
#endif

    switch (ctx->pc) {
        case 0x2751c4u: goto label_2751c4;
        case 0x27526cu: goto label_27526c;
        default: break;
    }

    ctx->pc = 0x275180u;

    // 0x275180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x275184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275188: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27518c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x275190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275198: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x275198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x27519c: 0x246351e4  addiu       $v1, $v1, 0x51E4
    ctx->pc = 0x27519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20964));
    // 0x2751a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2751a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2751a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2751A4u;
    {
        const bool branch_taken_0x2751a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2751a4) {
            ctx->pc = 0x2751C4u;
            goto label_2751c4;
        }
    }
    ctx->pc = 0x2751ACu;
    // 0x2751ac: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2751acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2751b0: 0x248451f8  addiu       $a0, $a0, 0x51F8
    ctx->pc = 0x2751b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20984));
    // 0x2751b4: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2751b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2751b8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2751b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2751bc: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2751BCu;
    SET_GPR_U32(ctx, 31, 0x2751C4u);
    ctx->pc = 0x2751C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2751BCu;
    // 0x2751c0: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x2751BCu, 0x2751C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2751C4u;
label_2751c4:
    // 0x2751c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2751C4u;
    {
        const bool branch_taken_0x2751c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2751c4) {
            ctx->pc = 0x2751F8u;
            goto label_2751f8;
        }
    }
    ctx->pc = 0x2751CCu;
    // 0x2751cc: 0x22eb020  add         $s6, $s1, $t6
    ctx->pc = 0x2751ccu;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x2751d0: 0x8e49e9ad  lw          $t1, -0x1653($s2)
    ctx->pc = 0x2751d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961581)));
    // 0x2751d4: 0xde475257  ld          $a3, 0x5257($s2)
    ctx->pc = 0x2751d4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 21079)));
    // 0x2751d8: 0x257fff60  addiu       $ra, $t3, -0xA0
    ctx->pc = 0x2751d8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967136));
    // 0x2751dc: 0xddf9c74f  ld          $t9, -0x38B1($t7)
    ctx->pc = 0x2751dcu;
    SET_GPR_U64(ctx, 25, READ64(ADD32(GPR_U32(ctx, 15), 4294952783)));
    // 0x2751e0: 0xdf2d2637  ld          $t5, 0x2637($t9)
    ctx->pc = 0x2751e0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 25), 9783)));
    // 0x2751e4: 0x0  nop
    ctx->pc = 0x2751e4u;
    // NOP
    // 0x2751e8: 0x2d48aeab  sltiu       $t0, $t2, -0x5155
    ctx->pc = 0x2751e8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4294946475) ? 1 : 0);
    // 0x2751ec: 0x0  nop
    ctx->pc = 0x2751ecu;
    // NOP
    // 0x2751f0: 0x2d48ae8f  sltiu       $t0, $t2, -0x5171
    ctx->pc = 0x2751f0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4294946447) ? 1 : 0);
    // 0x2751f4: 0x0  nop
    ctx->pc = 0x2751f4u;
    // NOP
label_2751f8:
    // 0x2751f8: 0x5a00006  bltz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2751F8u;
    {
        const bool branch_taken_0x2751f8 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x2751FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751F8u;
        // 0x2751fc: 0x84c0a0  .word       0x0084C0A0                   # add         $t8, $a0, $a0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751f8) {
            ctx->pc = 0x275214u;
            goto label_275214;
        }
    }
    ctx->pc = 0x275200u;
    // 0x275200: 0x42044c2  bltz        $at, . + 4 + (0x44C2 << 2)
    ctx->pc = 0x275200u;
    {
        const bool branch_taken_0x275200 = (GPR_S32(ctx, 1) < 0);
        ctx->pc = 0x275204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275200u;
        // 0x275204: 0x42014c4  bltz        $at, . + 4 + (0x14C4 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x27A518 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x275200) {
            ctx->pc = 0x28650Cu;
            return;
        }
    }
    ctx->pc = 0x275208u;
    // 0x275208: 0x120860  .word       0x00120860                   # add         $at, $zero, $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275208u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x27520c: 0x2498c0  .word       0x002498C0                   # sll         $s3, $a0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27520cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x275210: 0xc51840  .word       0x00C51840                   # sll         $v1, $a1, 1 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_275214:
    // 0x275214: 0xff42881f  sd          $v0, -0x77E1($k0)
    ctx->pc = 0x275214u;
    WRITE64(ADD32(GPR_U32(ctx, 26), 4294936607), GPR_U64(ctx, 2));
    // 0x275218: 0x141060  .word       0x00141060                   # add         $v0, $zero, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275218u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x27521c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27521Cu;
    {
        const bool branch_taken_0x27521c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27521c) {
            ctx->pc = 0x27524Cu;
            goto label_27524c;
        }
    }
    ctx->pc = 0x275224u;
    // 0x275224: 0x8ee34e25  lw          $v1, 0x4E25($s7)
    ctx->pc = 0x275224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20005)));
    // 0x275228: 0xa0715cc9  sb          $s1, 0x5CC9($v1)
    ctx->pc = 0x275228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23753), (uint8_t)GPR_U32(ctx, 17));
    // 0x27522c: 0x1116020  add         $t4, $t0, $s1
    ctx->pc = 0x27522cu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x275230: 0xa08cece9  sb          $t4, -0x1317($a0)
    ctx->pc = 0x275230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294962409), (uint8_t)GPR_U32(ctx, 12));
    // 0x275234: 0x8c4f41ed  lw          $t7, 0x41ED($v0)
    ctx->pc = 0x275234u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16877)));
    // 0x275238: 0xfc824d72  sd          $v0, 0x4D72($a0)
    ctx->pc = 0x275238u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 19826), GPR_U64(ctx, 2));
    // 0x27523c: 0x2d48aeba  sltiu       $t0, $t2, -0x5146
    ctx->pc = 0x27523cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4294946490) ? 1 : 0);
    // 0x275240: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275240u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x275240 raw=0x00000001");
    // 0x275244: 0x2d48ae9e  sltiu       $t0, $t2, -0x5162
    ctx->pc = 0x275244u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4294946462) ? 1 : 0);
    // 0x275248: 0x0  nop
    ctx->pc = 0x275248u;
    // NOP
label_27524c:
    // 0x27524c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x27524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x275250: 0x2442523c  addiu       $v0, $v0, 0x523C
    ctx->pc = 0x275250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21052));
    // 0x275254: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x275254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275258: 0x2484521c  addiu       $a0, $a0, 0x521C
    ctx->pc = 0x275258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21020));
    // 0x27525c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x27525cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x275260: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x275260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x275264: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x275264u;
    SET_GPR_U32(ctx, 31, 0x27526Cu);
    ctx->pc = 0x275268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275264u;
    // 0x275268: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x275264u, 0x27526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27526Cu;
label_27526c:
    // 0x27526c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x27526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x275270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x275274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27527c: 0x3e00008  jr          $ra
    ctx->pc = 0x27527Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27527Cu;
        // 0x275280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27527Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275284u;
    // 0x275284: 0x0  nop
    ctx->pc = 0x275284u;
    // NOP
}
