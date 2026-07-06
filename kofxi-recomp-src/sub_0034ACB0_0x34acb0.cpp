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

// Function: sub_0034ACB0
// Address: 0x34acb0 - 0x34af70
void sub_0034ACB0_0x34acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034ACB0_0x34acb0");
#endif

    switch (ctx->pc) {
        case 0x34ad30u: goto label_34ad30;
        case 0x34ad64u: goto label_34ad64;
        case 0x34ad94u: goto label_34ad94;
        case 0x34ada4u: goto label_34ada4;
        case 0x34adb4u: goto label_34adb4;
        case 0x34adc0u: goto label_34adc0;
        case 0x34ae4cu: goto label_34ae4c;
        case 0x34ae64u: goto label_34ae64;
        case 0x34ae74u: goto label_34ae74;
        case 0x34ae9cu: goto label_34ae9c;
        case 0x34aea8u: goto label_34aea8;
        case 0x34aedcu: goto label_34aedc;
        case 0x34aef8u: goto label_34aef8;
        case 0x34af28u: goto label_34af28;
        case 0x34af40u: goto label_34af40;
        case 0x34af5cu: goto label_34af5c;
        default: break;
    }

    ctx->pc = 0x34acb0u;

    // 0x34acb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34acb4: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x34acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x34acb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34acbc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34acc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34acc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34acc4: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x34acc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x34acc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34accc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x34acccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34acd0: 0x8c464378  lw          $a2, 0x4378($v0)
    ctx->pc = 0x34acd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34acd4: 0x24c40014  addiu       $a0, $a2, 0x14
    ctx->pc = 0x34acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x34acd8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34acdc: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x34acdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34ace0: 0xa440be96  sh          $zero, -0x416A($v0)
    ctx->pc = 0x34ace0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950550), (uint16_t)GPR_U32(ctx, 0));
    // 0x34ace4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ace8: 0x1810  mfhi        $v1
    ctx->pc = 0x34ace8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x34acec: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x34acecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x34acf0: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x34acf0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34acf4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x34acf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x34acf8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x34acf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34acfc: 0x2010  mfhi        $a0
    ctx->pc = 0x34acfcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34ad00: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34AD00u;
    {
        const bool branch_taken_0x34ad00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x34ad00) {
            ctx->pc = 0x34AD3Cu;
            goto label_34ad3c;
        }
    }
    ctx->pc = 0x34AD08u;
    // 0x34ad08: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ad0c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x34ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34ad10: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34ad14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34ad18: 0x38840  sll         $s1, $v1, 1
    ctx->pc = 0x34ad18u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34ad1c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x34ad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x34ad20: 0x2484ece0  addiu       $a0, $a0, -0x1320
    ctx->pc = 0x34ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962400));
    // 0x34ad24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34ad28: 0xc0d2a28  jal         func_34A8A0
    ctx->pc = 0x34AD28u;
    SET_GPR_U32(ctx, 31, 0x34AD30u);
    ctx->pc = 0x34AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD28u;
    // 0x34ad2c: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A8A0u, 0x34AD28u, 0x34AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD30u;
label_34ad30:
    // 0x34ad30: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34ad34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34AD34u;
    {
        const bool branch_taken_0x34ad34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD34u;
        // 0x34ad38: 0xa462be94  sh          $v0, -0x416C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294950548), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad34) {
            ctx->pc = 0x34AD6Cu;
            goto label_34ad6c;
        }
    }
    ctx->pc = 0x34AD3Cu;
label_34ad3c:
    // 0x34ad3c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ad40: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x34ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34ad44: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34ad48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34ad4c: 0x38840  sll         $s1, $v1, 1
    ctx->pc = 0x34ad4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34ad50: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x34ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x34ad54: 0x2484ef90  addiu       $a0, $a0, -0x1070
    ctx->pc = 0x34ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963088));
    // 0x34ad58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34ad5c: 0xc0d2a28  jal         func_34A8A0
    ctx->pc = 0x34AD5Cu;
    SET_GPR_U32(ctx, 31, 0x34AD64u);
    ctx->pc = 0x34AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD5Cu;
    // 0x34ad60: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A8A0u, 0x34AD5Cu, 0x34AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD64u;
label_34ad64:
    // 0x34ad64: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34ad68: 0xa462be94  sh          $v0, -0x416C($v1)
    ctx->pc = 0x34ad68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950548), (uint16_t)GPR_U32(ctx, 2));
label_34ad6c:
    // 0x34ad6c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34ad70: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34ad74: 0x9442be94  lhu         $v0, -0x416C($v0)
    ctx->pc = 0x34ad74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950548)));
    // 0x34ad78: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x34AD78u;
    {
        const bool branch_taken_0x34ad78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34ad78) {
            ctx->pc = 0x34ADC8u;
            goto label_34adc8;
        }
    }
    ctx->pc = 0x34AD80u;
    // 0x34ad80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ad84: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34AD84u;
    {
        const bool branch_taken_0x34ad84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x34ad84) {
            ctx->pc = 0x34AD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AD84u;
            // 0x34ad88: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AD9Cu;
            goto label_34ad9c;
        }
    }
    ctx->pc = 0x34AD8Cu;
    // 0x34ad8c: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x34AD8Cu;
    SET_GPR_U32(ctx, 31, 0x34AD94u);
    ctx->pc = 0x34AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD8Cu;
    // 0x34ad90: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x34AD8Cu, 0x34AD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD94u;
label_34ad94:
    // 0x34ad94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34AD94u;
    {
        const bool branch_taken_0x34ad94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ad94) {
            ctx->pc = 0x34ADA4u;
            goto label_34ada4;
        }
    }
    ctx->pc = 0x34AD9Cu;
label_34ad9c:
    // 0x34ad9c: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x34AD9Cu;
    SET_GPR_U32(ctx, 31, 0x34ADA4u);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x34AD9Cu, 0x34ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ADA4u;
label_34ada4:
    // 0x34ada4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34ada8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34ada8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34adac: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34ADACu;
    SET_GPR_U32(ctx, 31, 0x34ADB4u);
    ctx->pc = 0x34ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ADACu;
    // 0x34adb0: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34ADACu, 0x34ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ADB4u;
label_34adb4:
    // 0x34adb4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34adb8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34ADB8u;
    SET_GPR_U32(ctx, 31, 0x34ADC0u);
    ctx->pc = 0x34ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ADB8u;
    // 0x34adbc: 0x2484b030  addiu       $a0, $a0, -0x4FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34ADB8u, 0x34ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ADC0u;
label_34adc0:
    // 0x34adc0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x34ADC0u;
    {
        const bool branch_taken_0x34adc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ADC0u;
        // 0x34adc4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34adc0) {
            ctx->pc = 0x34AEACu;
            goto label_34aeac;
        }
    }
    ctx->pc = 0x34ADC8u;
label_34adc8:
    // 0x34adc8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34adcc: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34adccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34add0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34add4: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x34add4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x34add8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x34add8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34addc: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x34addcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x34ade0: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x34ADE0u;
    {
        const bool branch_taken_0x34ade0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ade0) {
            ctx->pc = 0x34ADE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34ADE0u;
            // 0x34ade4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AE54u;
            goto label_34ae54;
        }
    }
    ctx->pc = 0x34ADE8u;
    // 0x34ade8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x34ade8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34adec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34adf0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x34adf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x34adf4: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34ADF4u;
    {
        const bool branch_taken_0x34adf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x34ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ADF4u;
        // 0x34adf8: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34adf4) {
            ctx->pc = 0x34AE20u;
            goto label_34ae20;
        }
    }
    ctx->pc = 0x34ADFCu;
    // 0x34adfc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34ae00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x34ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x34ae04: 0x9444be94  lhu         $a0, -0x416C($v0)
    ctx->pc = 0x34ae04u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950548)));
    // 0x34ae08: 0x2463ece0  addiu       $v1, $v1, -0x1320
    ctx->pc = 0x34ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962400));
    // 0x34ae0c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x34ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34ae10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34ae14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34ae18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34AE18u;
    {
        const bool branch_taken_0x34ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE18u;
        // 0x34ae1c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae18) {
            ctx->pc = 0x34AE40u;
            goto label_34ae40;
        }
    }
    ctx->pc = 0x34AE20u;
label_34ae20:
    // 0x34ae20: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34ae24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x34ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x34ae28: 0x9444be94  lhu         $a0, -0x416C($v0)
    ctx->pc = 0x34ae28u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950548)));
    // 0x34ae2c: 0x2463ef90  addiu       $v1, $v1, -0x1070
    ctx->pc = 0x34ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963088));
    // 0x34ae30: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x34ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34ae34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34ae38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34ae3c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x34ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_34ae40:
    // 0x34ae40: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x34ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34ae44: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34AE44u;
    SET_GPR_U32(ctx, 31, 0x34AE4Cu);
    ctx->pc = 0x34AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AE44u;
    // 0x34ae48: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x34AE44u, 0x34AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE4Cu;
label_34ae4c:
    // 0x34ae4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x34AE4Cu;
    {
        const bool branch_taken_0x34ae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ae4c) {
            ctx->pc = 0x34AEA8u;
            goto label_34aea8;
        }
    }
    ctx->pc = 0x34AE54u;
label_34ae54:
    // 0x34ae54: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34AE54u;
    {
        const bool branch_taken_0x34ae54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x34ae54) {
            ctx->pc = 0x34AE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AE54u;
            // 0x34ae58: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AE6Cu;
            goto label_34ae6c;
        }
    }
    ctx->pc = 0x34AE5Cu;
    // 0x34ae5c: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x34AE5Cu;
    SET_GPR_U32(ctx, 31, 0x34AE64u);
    ctx->pc = 0x34AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AE5Cu;
    // 0x34ae60: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x34AE5Cu, 0x34AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE64u;
label_34ae64:
    // 0x34ae64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34AE64u;
    {
        const bool branch_taken_0x34ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ae64) {
            ctx->pc = 0x34AE74u;
            goto label_34ae74;
        }
    }
    ctx->pc = 0x34AE6Cu;
label_34ae6c:
    // 0x34ae6c: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x34AE6Cu;
    SET_GPR_U32(ctx, 31, 0x34AE74u);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x34AE6Cu, 0x34AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE74u;
label_34ae74:
    // 0x34ae74: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ae78: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34ae7c: 0x8c464378  lw          $a2, 0x4378($v0)
    ctx->pc = 0x34ae7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34ae80: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34ae84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ae88: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x34ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x34ae8c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ae90: 0xa466be96  sh          $a2, -0x416A($v1)
    ctx->pc = 0x34ae90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950550), (uint16_t)GPR_U32(ctx, 6));
    // 0x34ae94: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34AE94u;
    SET_GPR_U32(ctx, 31, 0x34AE9Cu);
    ctx->pc = 0x34AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AE94u;
    // 0x34ae98: 0xac454378  sw          $a1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34AE94u, 0x34AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE9Cu;
label_34ae9c:
    // 0x34ae9c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34aea0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34AEA0u;
    SET_GPR_U32(ctx, 31, 0x34AEA8u);
    ctx->pc = 0x34AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AEA0u;
    // 0x34aea4: 0x2484aec0  addiu       $a0, $a0, -0x5140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34AEA0u, 0x34AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEA8u;
label_34aea8:
    // 0x34aea8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34aea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34aeac:
    // 0x34aeac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34aeacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34aeb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34aeb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34aeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x34AEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AEB4u;
        // 0x34aeb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AEBCu;
    // 0x34aebc: 0x0  nop
    ctx->pc = 0x34aebcu;
    // NOP
    // 0x34aec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34aec4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34aec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34aecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34aeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34aed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aed4: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34AED4u;
    SET_GPR_U32(ctx, 31, 0x34AEDCu);
    ctx->pc = 0x34AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AED4u;
    // 0x34aed8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x34AED4u, 0x34AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEDCu;
label_34aedc:
    // 0x34aedc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x34aedcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34aee0: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x34aee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x34aee4: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x34AEE4u;
    {
        const bool branch_taken_0x34aee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aee4) {
            ctx->pc = 0x34AEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AEE4u;
            // 0x34aee8: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AF14u;
            goto label_34af14;
        }
    }
    ctx->pc = 0x34AEECu;
    // 0x34aeec: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34aef0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34AEF0u;
    SET_GPR_U32(ctx, 31, 0x34AEF8u);
    ctx->pc = 0x34AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AEF0u;
    // 0x34aef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34AEF0u, 0x34AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEF8u;
label_34aef8:
    // 0x34aef8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34aefc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34af00: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x34af00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x34af04: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x34af04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x34af08: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x34af08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x34af0c: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x34af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x34af10: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x34af10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_34af14:
    // 0x34af14: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x34AF14u;
    {
        const bool branch_taken_0x34af14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34af14) {
            ctx->pc = 0x34AF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AF14u;
            // 0x34af18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AF60u;
            goto label_34af60;
        }
    }
    ctx->pc = 0x34AF1Cu;
    // 0x34af1c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34af20: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34AF20u;
    SET_GPR_U32(ctx, 31, 0x34AF28u);
    ctx->pc = 0x34AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF20u;
    // 0x34af24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34AF20u, 0x34AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF28u;
label_34af28:
    // 0x34af28: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34af28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34af2c: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x34af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34af30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34AF30u;
    {
        const bool branch_taken_0x34af30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34af30) {
            ctx->pc = 0x34AF40u;
            goto label_34af40;
        }
    }
    ctx->pc = 0x34AF38u;
    // 0x34af38: 0xc0d2bdc  jal         func_34AF70
    ctx->pc = 0x34AF38u;
    SET_GPR_U32(ctx, 31, 0x34AF40u);
    ctx->pc = 0x34AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AF70u, 0x34AF38u, 0x34AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF40u;
label_34af40:
    // 0x34af40: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34af40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34af44: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34af44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34af48: 0x9463be96  lhu         $v1, -0x416A($v1)
    ctx->pc = 0x34af48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x34af4c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34af50: 0x2484abb0  addiu       $a0, $a0, -0x5450
    ctx->pc = 0x34af50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945712));
    // 0x34af54: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34AF54u;
    SET_GPR_U32(ctx, 31, 0x34AF5Cu);
    ctx->pc = 0x34AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF54u;
    // 0x34af58: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34AF54u, 0x34AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF5Cu;
label_34af5c:
    // 0x34af5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34af5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34af60:
    // 0x34af60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34af60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34af64: 0x3e00008  jr          $ra
    ctx->pc = 0x34AF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF64u;
        // 0x34af68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AF6Cu;
    // 0x34af6c: 0x0  nop
    ctx->pc = 0x34af6cu;
    // NOP
    if (ctx->pc == 0x34af6cu) { ctx->pc = 0x34af70u; }
}
