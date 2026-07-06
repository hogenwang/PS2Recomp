#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233330
// Address: 0x233330 - 0x233498
void sub_00233330_0x233330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233330_0x233330");
#endif

    switch (ctx->pc) {
        case 0x233368u: goto label_233368;
        case 0x2333b0u: goto label_2333b0;
        case 0x2333f0u: goto label_2333f0;
        case 0x233400u: goto label_233400;
        case 0x23341cu: goto label_23341c;
        case 0x23342cu: goto label_23342c;
        case 0x23344cu: goto label_23344c;
        case 0x233458u: goto label_233458;
        case 0x233460u: goto label_233460;
        case 0x233468u: goto label_233468;
        default: break;
    }

    ctx->pc = 0x233330u;

    // 0x233330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x233334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233338: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x233338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23333c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x233340: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x233340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x233344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x233348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23334c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23334cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233350: 0xa240000f  sb          $zero, 0xF($s2)
    ctx->pc = 0x233350u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x233354: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x233354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x233358: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x233358u;
    {
        const bool branch_taken_0x233358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23335Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233358u;
            // 0x23335c: 0x26460001  addiu       $a2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233358) {
            ctx->pc = 0x233394u;
            goto label_233394;
        }
    }
    ctx->pc = 0x233360u;
    // 0x233360: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x233360u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x233364: 0x0  nop
    ctx->pc = 0x233364u;
    // NOP
label_233368:
    // 0x233368: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x233368u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23336c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x23336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x233370: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x233370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233374: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x233374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x233378: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x233378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
    // 0x23337c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23337cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x233380: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x233380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x233384: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x233384u;
    {
        const bool branch_taken_0x233384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x233388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233384u;
            // 0x233388: 0x83380a  movz        $a3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233384) {
            ctx->pc = 0x233368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233368;
        }
    }
    ctx->pc = 0x23338Cu;
    // 0x23338c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23338Cu;
    {
        const bool branch_taken_0x23338c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23338c) {
            ctx->pc = 0x233398u;
            goto label_233398;
        }
    }
    ctx->pc = 0x233394u;
label_233394:
    // 0x233394: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x233394u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
label_233398:
    // 0x233398: 0x14e00012  bnez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x233398u;
    {
        const bool branch_taken_0x233398 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x23339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233398u;
            // 0x23339c: 0x8d10fa2c  lw          $s0, -0x5D4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294965804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233398) {
            ctx->pc = 0x2333E4u;
            goto label_2333e4;
        }
    }
    ctx->pc = 0x2333A0u;
    // 0x2333a0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2333a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2333a4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2333a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333a8: 0x2645000f  addiu       $a1, $s2, 0xF
    ctx->pc = 0x2333a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x2333ac: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2333acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2333b0:
    // 0x2333b0: 0x2482ff9f  addiu       $v0, $a0, -0x61
    ctx->pc = 0x2333b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967199));
    // 0x2333b4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2333b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2333b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2333B8u;
    {
        const bool branch_taken_0x2333b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2333b8) {
            ctx->pc = 0x2333BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2333B8u;
            // 0x2333bc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2333D4u;
            goto label_2333d4;
        }
    }
    ctx->pc = 0x2333C0u;
    // 0x2333c0: 0x2482ffbf  addiu       $v0, $a0, -0x41
    ctx->pc = 0x2333c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967231));
    // 0x2333c4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2333c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2333c8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2333C8u;
    {
        const bool branch_taken_0x2333c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2333c8) {
            ctx->pc = 0x2333CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2333C8u;
            // 0x2333cc: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2333D0u;
            goto label_2333d0;
        }
    }
    ctx->pc = 0x2333D0u;
label_2333d0:
    // 0x2333d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2333d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2333d4:
    // 0x2333d4: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2333d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2333d8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2333D8u;
    {
        const bool branch_taken_0x2333d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2333d8) {
            ctx->pc = 0x2333DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2333D8u;
            // 0x2333dc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2333B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2333b0;
        }
    }
    ctx->pc = 0x2333E0u;
    // 0x2333e0: 0x8d10fa2c  lw          $s0, -0x5D4($t0)
    ctx->pc = 0x2333e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294965804)));
label_2333e4:
    // 0x2333e4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2333E4u;
    {
        const bool branch_taken_0x2333e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2333E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2333E4u;
            // 0x2333e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333e4) {
            ctx->pc = 0x233480u;
            goto label_233480;
        }
    }
    ctx->pc = 0x2333ECu;
    // 0x2333ec: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2333ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2333f0:
    // 0x2333f0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2333F0u;
    {
        const bool branch_taken_0x2333f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2333F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2333F0u;
            // 0x2333f4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333f0) {
            ctx->pc = 0x233470u;
            goto label_233470;
        }
    }
    ctx->pc = 0x2333F8u;
    // 0x2333f8: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x2333F8u;
    SET_GPR_U32(ctx, 31, 0x233400u);
    ctx->pc = 0x2333FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2333F8u;
            // 0x2333fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233400u; }
        if (ctx->pc != 0x233400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233400u; }
        if (ctx->pc != 0x233400u) { return; }
    }
    ctx->pc = 0x233400u;
label_233400:
    // 0x233400: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x233400u;
    {
        const bool branch_taken_0x233400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233400) {
            ctx->pc = 0x233404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233400u;
            // 0x233404: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233474u;
            goto label_233474;
        }
    }
    ctx->pc = 0x233408u;
    // 0x233408: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x233408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23340c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23340Cu;
    {
        const bool branch_taken_0x23340c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23340c) {
            ctx->pc = 0x233424u;
            goto label_233424;
        }
    }
    ctx->pc = 0x233414u;
    // 0x233414: 0xc08cdfe  jal         func_2337F8
    ctx->pc = 0x233414u;
    SET_GPR_U32(ctx, 31, 0x23341Cu);
    ctx->pc = 0x233418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233414u;
            // 0x233418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2337F8u;
    if (runtime->hasFunction(0x2337F8u)) {
        auto targetFn = runtime->lookupFunction(0x2337F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23341Cu; }
        if (ctx->pc != 0x23341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002337F8_0x2337f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23341Cu; }
        if (ctx->pc != 0x23341Cu) { return; }
    }
    ctx->pc = 0x23341Cu;
label_23341c:
    // 0x23341c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23341Cu;
    {
        const bool branch_taken_0x23341c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23341Cu;
            // 0x233420: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23341c) {
            ctx->pc = 0x233484u;
            goto label_233484;
        }
    }
    ctx->pc = 0x233424u;
label_233424:
    // 0x233424: 0xc08c682  jal         func_231A08
    ctx->pc = 0x233424u;
    SET_GPR_U32(ctx, 31, 0x23342Cu);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23342Cu; }
        if (ctx->pc != 0x23342Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23342Cu; }
        if (ctx->pc != 0x23342Cu) { return; }
    }
    ctx->pc = 0x23342Cu;
label_23342c:
    // 0x23342c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23342cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233430: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x233430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x233434: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233434u;
    {
        const bool branch_taken_0x233434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x233434) {
            ctx->pc = 0x233458u;
            goto label_233458;
        }
    }
    ctx->pc = 0x23343Cu;
    // 0x23343c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23343Cu;
    {
        const bool branch_taken_0x23343c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23343Cu;
            // 0x233440: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23343c) {
            ctx->pc = 0x233450u;
            goto label_233450;
        }
    }
    ctx->pc = 0x233444u;
    // 0x233444: 0xc08ca5a  jal         func_232968
    ctx->pc = 0x233444u;
    SET_GPR_U32(ctx, 31, 0x23344Cu);
    ctx->pc = 0x233448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233444u;
            // 0x233448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232968u;
    if (runtime->hasFunction(0x232968u)) {
        auto targetFn = runtime->lookupFunction(0x232968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23344Cu; }
        if (ctx->pc != 0x23344Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232968_0x232968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23344Cu; }
        if (ctx->pc != 0x23344Cu) { return; }
    }
    ctx->pc = 0x23344Cu;
label_23344c:
    // 0x23344c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23344cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233450:
    // 0x233450: 0xc08ca52  jal         func_232948
    ctx->pc = 0x233450u;
    SET_GPR_U32(ctx, 31, 0x233458u);
    ctx->pc = 0x233454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233450u;
            // 0x233454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232948u;
    if (runtime->hasFunction(0x232948u)) {
        auto targetFn = runtime->lookupFunction(0x232948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233458u; }
        if (ctx->pc != 0x233458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232948_0x232948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233458u; }
        if (ctx->pc != 0x233458u) { return; }
    }
    ctx->pc = 0x233458u;
label_233458:
    // 0x233458: 0xc08cb78  jal         func_232DE0
    ctx->pc = 0x233458u;
    SET_GPR_U32(ctx, 31, 0x233460u);
    ctx->pc = 0x23345Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233458u;
            // 0x23345c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232DE0u;
    if (runtime->hasFunction(0x232DE0u)) {
        auto targetFn = runtime->lookupFunction(0x232DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233460u; }
        if (ctx->pc != 0x233460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232DE0_0x232de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233460u; }
        if (ctx->pc != 0x233460u) { return; }
    }
    ctx->pc = 0x233460u;
label_233460:
    // 0x233460: 0xc08c698  jal         func_231A60
    ctx->pc = 0x233460u;
    SET_GPR_U32(ctx, 31, 0x233468u);
    ctx->pc = 0x233464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233460u;
            // 0x233464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233468u; }
        if (ctx->pc != 0x233468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233468u; }
        if (ctx->pc != 0x233468u) { return; }
    }
    ctx->pc = 0x233468u;
label_233468:
    // 0x233468: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x233468u;
    {
        const bool branch_taken_0x233468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23346Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233468u;
            // 0x23346c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233468) {
            ctx->pc = 0x233480u;
            goto label_233480;
        }
    }
    ctx->pc = 0x233470u;
label_233470:
    // 0x233470: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x233470u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_233474:
    // 0x233474: 0x5600ffde  bnel        $s0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x233474u;
    {
        const bool branch_taken_0x233474 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x233474) {
            ctx->pc = 0x233478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233474u;
            // 0x233478: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2333F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2333f0;
        }
    }
    ctx->pc = 0x23347Cu;
    // 0x23347c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_233480:
    // 0x233480: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x233480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_233484:
    // 0x233484: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x233484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233488: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x233488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23348c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23348cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233490: 0x3e00008  jr          $ra
    ctx->pc = 0x233490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233490u;
            // 0x233494: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x233498u;
    ctx->pc = 0x233498u;
}
