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

// Function: sub_0029AB10
// Address: 0x29ab10 - 0x29ae08
void sub_0029AB10_0x29ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AB10_0x29ab10");
#endif

    switch (ctx->pc) {
        case 0x29ab10u: goto label_29ab10;
        case 0x29ab14u: goto label_29ab14;
        case 0x29ab18u: goto label_29ab18;
        case 0x29ab1cu: goto label_29ab1c;
        case 0x29ab20u: goto label_29ab20;
        case 0x29ab24u: goto label_29ab24;
        case 0x29ab28u: goto label_29ab28;
        case 0x29ab2cu: goto label_29ab2c;
        case 0x29ab30u: goto label_29ab30;
        case 0x29ab34u: goto label_29ab34;
        case 0x29ab38u: goto label_29ab38;
        case 0x29ab3cu: goto label_29ab3c;
        case 0x29ab40u: goto label_29ab40;
        case 0x29ab44u: goto label_29ab44;
        case 0x29ab48u: goto label_29ab48;
        case 0x29ab4cu: goto label_29ab4c;
        case 0x29ab50u: goto label_29ab50;
        case 0x29ab54u: goto label_29ab54;
        case 0x29ab58u: goto label_29ab58;
        case 0x29ab5cu: goto label_29ab5c;
        case 0x29ab60u: goto label_29ab60;
        case 0x29ab64u: goto label_29ab64;
        case 0x29ab68u: goto label_29ab68;
        case 0x29ab6cu: goto label_29ab6c;
        case 0x29ab70u: goto label_29ab70;
        case 0x29ab74u: goto label_29ab74;
        case 0x29ab78u: goto label_29ab78;
        case 0x29ab7cu: goto label_29ab7c;
        case 0x29ab80u: goto label_29ab80;
        case 0x29ab84u: goto label_29ab84;
        case 0x29ab88u: goto label_29ab88;
        case 0x29ab8cu: goto label_29ab8c;
        case 0x29ab90u: goto label_29ab90;
        case 0x29ab94u: goto label_29ab94;
        case 0x29ab98u: goto label_29ab98;
        case 0x29ab9cu: goto label_29ab9c;
        case 0x29aba0u: goto label_29aba0;
        case 0x29aba4u: goto label_29aba4;
        case 0x29aba8u: goto label_29aba8;
        case 0x29abacu: goto label_29abac;
        case 0x29abb0u: goto label_29abb0;
        case 0x29abb4u: goto label_29abb4;
        case 0x29abb8u: goto label_29abb8;
        case 0x29abbcu: goto label_29abbc;
        case 0x29abc0u: goto label_29abc0;
        case 0x29abc4u: goto label_29abc4;
        case 0x29abc8u: goto label_29abc8;
        case 0x29abccu: goto label_29abcc;
        case 0x29abd0u: goto label_29abd0;
        case 0x29abd4u: goto label_29abd4;
        case 0x29abd8u: goto label_29abd8;
        case 0x29abdcu: goto label_29abdc;
        case 0x29abe0u: goto label_29abe0;
        case 0x29abe4u: goto label_29abe4;
        case 0x29abe8u: goto label_29abe8;
        case 0x29abecu: goto label_29abec;
        case 0x29abf0u: goto label_29abf0;
        case 0x29abf4u: goto label_29abf4;
        case 0x29abf8u: goto label_29abf8;
        case 0x29abfcu: goto label_29abfc;
        case 0x29ac00u: goto label_29ac00;
        case 0x29ac04u: goto label_29ac04;
        case 0x29ac08u: goto label_29ac08;
        case 0x29ac0cu: goto label_29ac0c;
        case 0x29ac10u: goto label_29ac10;
        case 0x29ac14u: goto label_29ac14;
        case 0x29ac18u: goto label_29ac18;
        case 0x29ac1cu: goto label_29ac1c;
        case 0x29ac20u: goto label_29ac20;
        case 0x29ac24u: goto label_29ac24;
        case 0x29ac28u: goto label_29ac28;
        case 0x29ac2cu: goto label_29ac2c;
        case 0x29ac30u: goto label_29ac30;
        case 0x29ac34u: goto label_29ac34;
        case 0x29ac38u: goto label_29ac38;
        case 0x29ac3cu: goto label_29ac3c;
        case 0x29ac40u: goto label_29ac40;
        case 0x29ac44u: goto label_29ac44;
        case 0x29ac48u: goto label_29ac48;
        case 0x29ac4cu: goto label_29ac4c;
        case 0x29ac50u: goto label_29ac50;
        case 0x29ac54u: goto label_29ac54;
        case 0x29ac58u: goto label_29ac58;
        case 0x29ac5cu: goto label_29ac5c;
        case 0x29ac60u: goto label_29ac60;
        case 0x29ac64u: goto label_29ac64;
        case 0x29ac68u: goto label_29ac68;
        case 0x29ac6cu: goto label_29ac6c;
        case 0x29ac70u: goto label_29ac70;
        case 0x29ac74u: goto label_29ac74;
        case 0x29ac78u: goto label_29ac78;
        case 0x29ac7cu: goto label_29ac7c;
        case 0x29ac80u: goto label_29ac80;
        case 0x29ac84u: goto label_29ac84;
        case 0x29ac88u: goto label_29ac88;
        case 0x29ac8cu: goto label_29ac8c;
        case 0x29ac90u: goto label_29ac90;
        case 0x29ac94u: goto label_29ac94;
        case 0x29ac98u: goto label_29ac98;
        case 0x29ac9cu: goto label_29ac9c;
        case 0x29aca0u: goto label_29aca0;
        case 0x29aca4u: goto label_29aca4;
        case 0x29aca8u: goto label_29aca8;
        case 0x29acacu: goto label_29acac;
        case 0x29acb0u: goto label_29acb0;
        case 0x29acb4u: goto label_29acb4;
        case 0x29acb8u: goto label_29acb8;
        case 0x29acbcu: goto label_29acbc;
        case 0x29acc0u: goto label_29acc0;
        case 0x29acc4u: goto label_29acc4;
        case 0x29acc8u: goto label_29acc8;
        case 0x29acccu: goto label_29accc;
        case 0x29acd0u: goto label_29acd0;
        case 0x29acd4u: goto label_29acd4;
        case 0x29acd8u: goto label_29acd8;
        case 0x29acdcu: goto label_29acdc;
        case 0x29ace0u: goto label_29ace0;
        case 0x29ace4u: goto label_29ace4;
        case 0x29ace8u: goto label_29ace8;
        case 0x29acecu: goto label_29acec;
        case 0x29acf0u: goto label_29acf0;
        case 0x29acf4u: goto label_29acf4;
        case 0x29acf8u: goto label_29acf8;
        case 0x29acfcu: goto label_29acfc;
        case 0x29ad00u: goto label_29ad00;
        case 0x29ad04u: goto label_29ad04;
        case 0x29ad08u: goto label_29ad08;
        case 0x29ad0cu: goto label_29ad0c;
        case 0x29ad10u: goto label_29ad10;
        case 0x29ad14u: goto label_29ad14;
        case 0x29ad18u: goto label_29ad18;
        case 0x29ad1cu: goto label_29ad1c;
        case 0x29ad20u: goto label_29ad20;
        case 0x29ad24u: goto label_29ad24;
        case 0x29ad28u: goto label_29ad28;
        case 0x29ad2cu: goto label_29ad2c;
        case 0x29ad30u: goto label_29ad30;
        case 0x29ad34u: goto label_29ad34;
        case 0x29ad38u: goto label_29ad38;
        case 0x29ad3cu: goto label_29ad3c;
        case 0x29ad40u: goto label_29ad40;
        case 0x29ad44u: goto label_29ad44;
        case 0x29ad48u: goto label_29ad48;
        case 0x29ad4cu: goto label_29ad4c;
        case 0x29ad50u: goto label_29ad50;
        case 0x29ad54u: goto label_29ad54;
        case 0x29ad58u: goto label_29ad58;
        case 0x29ad5cu: goto label_29ad5c;
        case 0x29ad60u: goto label_29ad60;
        case 0x29ad64u: goto label_29ad64;
        case 0x29ad68u: goto label_29ad68;
        case 0x29ad6cu: goto label_29ad6c;
        case 0x29ad70u: goto label_29ad70;
        case 0x29ad74u: goto label_29ad74;
        case 0x29ad78u: goto label_29ad78;
        case 0x29ad7cu: goto label_29ad7c;
        case 0x29ad80u: goto label_29ad80;
        case 0x29ad84u: goto label_29ad84;
        case 0x29ad88u: goto label_29ad88;
        case 0x29ad8cu: goto label_29ad8c;
        case 0x29ad90u: goto label_29ad90;
        case 0x29ad94u: goto label_29ad94;
        case 0x29ad98u: goto label_29ad98;
        case 0x29ad9cu: goto label_29ad9c;
        case 0x29ada0u: goto label_29ada0;
        case 0x29ada4u: goto label_29ada4;
        case 0x29ada8u: goto label_29ada8;
        case 0x29adacu: goto label_29adac;
        case 0x29adb0u: goto label_29adb0;
        case 0x29adb4u: goto label_29adb4;
        case 0x29adb8u: goto label_29adb8;
        case 0x29adbcu: goto label_29adbc;
        case 0x29adc0u: goto label_29adc0;
        case 0x29adc4u: goto label_29adc4;
        case 0x29adc8u: goto label_29adc8;
        case 0x29adccu: goto label_29adcc;
        case 0x29add0u: goto label_29add0;
        case 0x29add4u: goto label_29add4;
        case 0x29add8u: goto label_29add8;
        case 0x29addcu: goto label_29addc;
        case 0x29ade0u: goto label_29ade0;
        case 0x29ade4u: goto label_29ade4;
        case 0x29ade8u: goto label_29ade8;
        case 0x29adecu: goto label_29adec;
        case 0x29adf0u: goto label_29adf0;
        case 0x29adf4u: goto label_29adf4;
        case 0x29adf8u: goto label_29adf8;
        case 0x29adfcu: goto label_29adfc;
        case 0x29ae00u: goto label_29ae00;
        case 0x29ae04u: goto label_29ae04;
        default: break;
    }

    ctx->pc = 0x29ab10u;

label_29ab10:
    // 0x29ab10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_29ab14:
    // 0x29ab14: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x29ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_29ab18:
    // 0x29ab18: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x29ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_29ab1c:
    // 0x29ab1c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x29ab1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ab20:
    // 0x29ab20: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29ab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_29ab24:
    // 0x29ab24: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x29ab24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ab28:
    // 0x29ab28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_29ab2c:
    // 0x29ab2c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x29ab2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29ab30:
    // 0x29ab30: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x29ab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_29ab34:
    // 0x29ab34: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x29ab34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29ab38:
    // 0x29ab38: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_29ab3c:
    // 0x29ab3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29ab3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29ab40:
    // 0x29ab40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29ab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29ab44:
    // 0x29ab44: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
label_29ab48:
    if (ctx->pc == 0x29AB48u) {
        ctx->pc = 0x29AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB44u;
        // 0x29ab48: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AB4Cu;
        goto label_29ab4c;
    }
    ctx->pc = 0x29AB44u;
    {
        const bool branch_taken_0x29ab44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB44u;
        // 0x29ab48: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab44) {
            ctx->pc = 0x29AB5Cu;
            goto label_29ab5c;
        }
    }
    ctx->pc = 0x29AB4Cu;
label_29ab4c:
    // 0x29ab4c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_29ab50:
    if (ctx->pc == 0x29AB50u) {
        ctx->pc = 0x29AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB4Cu;
        // 0x29ab50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AB54u;
        goto label_29ab54;
    }
    ctx->pc = 0x29AB4Cu;
    {
        const bool branch_taken_0x29ab4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB4Cu;
        // 0x29ab50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab4c) {
            ctx->pc = 0x29ABB8u;
            goto label_29abb8;
        }
    }
    ctx->pc = 0x29AB54u;
label_29ab54:
    // 0x29ab54: 0x10000018  b           . + 4 + (0x18 << 2)
label_29ab58:
    if (ctx->pc == 0x29AB58u) {
        ctx->pc = 0x29AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB54u;
        // 0x29ab58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AB5Cu;
        goto label_29ab5c;
    }
    ctx->pc = 0x29AB54u;
    {
        const bool branch_taken_0x29ab54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB54u;
        // 0x29ab58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab54) {
            ctx->pc = 0x29ABB8u;
            goto label_29abb8;
        }
    }
    ctx->pc = 0x29AB5Cu;
label_29ab5c:
    // 0x29ab5c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29ab5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29ab60:
    // 0x29ab60: 0x1a400014  blez        $s2, . + 4 + (0x14 << 2)
label_29ab64:
    if (ctx->pc == 0x29AB64u) {
        ctx->pc = 0x29AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB60u;
        // 0x29ab64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AB68u;
        goto label_29ab68;
    }
    ctx->pc = 0x29AB60u;
    {
        const bool branch_taken_0x29ab60 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x29AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB60u;
        // 0x29ab64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab60) {
            ctx->pc = 0x29ABB4u;
            goto label_29abb4;
        }
    }
    ctx->pc = 0x29AB68u;
label_29ab68:
    // 0x29ab68: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x29ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_29ab6c:
    // 0x29ab6c: 0x0  nop
    ctx->pc = 0x29ab6cu;
    // NOP
label_29ab70:
    // 0x29ab70: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29ab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29ab74:
    // 0x29ab74: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_29ab78:
    // 0x29ab78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29ab7c:
    // 0x29ab7c: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x29ab7cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_29ab80:
    // 0x29ab80: 0x2151018  mult        $v0, $s0, $s5
    ctx->pc = 0x29ab80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29ab84:
    // 0x29ab84: 0x568821  addu        $s1, $v0, $s6
    ctx->pc = 0x29ab84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_29ab88:
    // 0x29ab88: 0x280f809  jalr        $s4
label_29ab8c:
    if (ctx->pc == 0x29AB8Cu) {
        ctx->pc = 0x29AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB88u;
        // 0x29ab8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AB90u;
        goto label_29ab90;
    }
    ctx->pc = 0x29AB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x29AB90u);
        ctx->pc = 0x29AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB88u;
        // 0x29ab8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AB88u, 0x29AB90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29AB90u;
label_29ab90:
    // 0x29ab90: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_29ab94:
    if (ctx->pc == 0x29AB94u) {
        ctx->pc = 0x29AB98u;
        goto label_29ab98;
    }
    ctx->pc = 0x29AB90u;
    {
        const bool branch_taken_0x29ab90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29ab90) {
            ctx->pc = 0x29ABA0u;
            goto label_29aba0;
        }
    }
    ctx->pc = 0x29AB98u;
label_29ab98:
    // 0x29ab98: 0x10000003  b           . + 4 + (0x3 << 2)
label_29ab9c:
    if (ctx->pc == 0x29AB9Cu) {
        ctx->pc = 0x29AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB98u;
        // 0x29ab9c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ABA0u;
        goto label_29aba0;
    }
    ctx->pc = 0x29AB98u;
    {
        const bool branch_taken_0x29ab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB98u;
        // 0x29ab9c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab98) {
            ctx->pc = 0x29ABA8u;
            goto label_29aba8;
        }
    }
    ctx->pc = 0x29ABA0u;
label_29aba0:
    // 0x29aba0: 0x1840ffec  blez        $v0, . + 4 + (-0x14 << 2)
label_29aba4:
    if (ctx->pc == 0x29ABA4u) {
        ctx->pc = 0x29ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABA0u;
        // 0x29aba4: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ABA8u;
        goto label_29aba8;
    }
    ctx->pc = 0x29ABA0u;
    {
        const bool branch_taken_0x29aba0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABA0u;
        // 0x29aba4: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aba0) {
            ctx->pc = 0x29AB54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ab54;
        }
    }
    ctx->pc = 0x29ABA8u;
label_29aba8:
    // 0x29aba8: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x29aba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_29abac:
    // 0x29abac: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_29abb0:
    if (ctx->pc == 0x29ABB0u) {
        ctx->pc = 0x29ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABACu;
        // 0x29abb0: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ABB4u;
        goto label_29abb4;
    }
    ctx->pc = 0x29ABACu;
    {
        const bool branch_taken_0x29abac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABACu;
        // 0x29abb0: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abac) {
            ctx->pc = 0x29AB70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ab70;
        }
    }
    ctx->pc = 0x29ABB4u;
label_29abb4:
    // 0x29abb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29abb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29abb8:
    // 0x29abb8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x29abb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29abbc:
    // 0x29abbc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x29abbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29abc0:
    // 0x29abc0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x29abc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29abc4:
    // 0x29abc4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29abc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29abc8:
    // 0x29abc8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29abc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29abcc:
    // 0x29abcc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29abccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29abd0:
    // 0x29abd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29abd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29abd4:
    // 0x29abd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29abd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29abd8:
    // 0x29abd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29abd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29abdc:
    // 0x29abdc: 0x3e00008  jr          $ra
label_29abe0:
    if (ctx->pc == 0x29ABE0u) {
        ctx->pc = 0x29ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABDCu;
        // 0x29abe0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ABE4u;
        goto label_29abe4;
    }
    ctx->pc = 0x29ABDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABDCu;
        // 0x29abe0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ABDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ABE4u;
label_29abe4:
    // 0x29abe4: 0x0  nop
    ctx->pc = 0x29abe4u;
    // NOP
label_29abe8:
    // 0x29abe8: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x29abe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_29abec:
    // 0x29abec: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x29abecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_29abf0:
    // 0x29abf0: 0xffb30230  sd          $s3, 0x230($sp)
    ctx->pc = 0x29abf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 19));
label_29abf4:
    // 0x29abf4: 0xffb60260  sd          $s6, 0x260($sp)
    ctx->pc = 0x29abf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 22));
label_29abf8:
    // 0x29abf8: 0x2453b7c8  addiu       $s3, $v0, -0x4838
    ctx->pc = 0x29abf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948808));
label_29abfc:
    // 0x29abfc: 0xffb50250  sd          $s5, 0x250($sp)
    ctx->pc = 0x29abfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 21));
label_29ac00:
    // 0x29ac00: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29ac00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ac04:
    // 0x29ac04: 0xffb40240  sd          $s4, 0x240($sp)
    ctx->pc = 0x29ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 20));
label_29ac08:
    // 0x29ac08: 0x2415002e  addiu       $s5, $zero, 0x2E
    ctx->pc = 0x29ac08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_29ac0c:
    // 0x29ac0c: 0xffb20220  sd          $s2, 0x220($sp)
    ctx->pc = 0x29ac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
label_29ac10:
    // 0x29ac10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29ac10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ac14:
    // 0x29ac14: 0xffb10210  sd          $s1, 0x210($sp)
    ctx->pc = 0x29ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 17));
label_29ac18:
    // 0x29ac18: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x29ac18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29ac1c:
    // 0x29ac1c: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x29ac1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
label_29ac20:
    // 0x29ac20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29ac20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ac24:
    // 0x29ac24: 0xffbf0270  sd          $ra, 0x270($sp)
    ctx->pc = 0x29ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
label_29ac28:
    // 0x29ac28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29ac28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ac2c:
    // 0x29ac2c: 0x0  nop
    ctx->pc = 0x29ac2cu;
    // NOP
label_29ac30:
    // 0x29ac30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ac30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29ac34:
    // 0x29ac34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29ac34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29ac38:
    // 0x29ac38: 0xc0a150e  jal         func_285438
label_29ac3c:
    if (ctx->pc == 0x29AC3Cu) {
        ctx->pc = 0x29AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC38u;
        // 0x29ac3c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AC40u;
        goto label_29ac40;
    }
    ctx->pc = 0x29AC38u;
    SET_GPR_U32(ctx, 31, 0x29AC40u);
    ctx->pc = 0x29AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AC38u;
    // 0x29ac3c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285438u, 0x29AC38u, 0x29AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AC40u;
label_29ac40:
    // 0x29ac40: 0x18400065  blez        $v0, . + 4 + (0x65 << 2)
label_29ac44:
    if (ctx->pc == 0x29AC44u) {
        ctx->pc = 0x29AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC40u;
        // 0x29ac44: 0x5d1021  addu        $v0, $v0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AC48u;
        goto label_29ac48;
    }
    ctx->pc = 0x29AC40u;
    {
        const bool branch_taken_0x29ac40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC40u;
        // 0x29ac44: 0x5d1021  addu        $v0, $v0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac40) {
            ctx->pc = 0x29ADD8u;
            goto label_29add8;
        }
    }
    ctx->pc = 0x29AC48u;
label_29ac48:
    // 0x29ac48: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x29ac48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_29ac4c:
    // 0x29ac4c: 0x83a60000  lb          $a2, 0x0($sp)
    ctx->pc = 0x29ac4cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_29ac50:
    // 0x29ac50: 0xd31021  addu        $v0, $a2, $s3
    ctx->pc = 0x29ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_29ac54:
    // 0x29ac54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x29ac54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29ac58:
    // 0x29ac58: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x29ac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_29ac5c:
    // 0x29ac5c: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
label_29ac60:
    if (ctx->pc == 0x29AC60u) {
        ctx->pc = 0x29AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC5Cu;
        // 0x29ac60: 0x93a70000  lbu         $a3, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AC64u;
        goto label_29ac64;
    }
    ctx->pc = 0x29AC5Cu;
    {
        const bool branch_taken_0x29ac5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC5Cu;
        // 0x29ac60: 0x93a70000  lbu         $a3, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac5c) {
            ctx->pc = 0x29ADD8u;
            goto label_29add8;
        }
    }
    ctx->pc = 0x29AC64u;
label_29ac64:
    // 0x29ac64: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29ac64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_29ac68:
    // 0x29ac68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29ac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29ac6c:
    // 0x29ac6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_29ac70:
    if (ctx->pc == 0x29AC70u) {
        ctx->pc = 0x29AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC6Cu;
        // 0x29ac70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AC74u;
        goto label_29ac74;
    }
    ctx->pc = 0x29AC6Cu;
    {
        const bool branch_taken_0x29ac6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC6Cu;
        // 0x29ac70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac6c) {
            ctx->pc = 0x29AC80u;
            goto label_29ac80;
        }
    }
    ctx->pc = 0x29AC74u;
label_29ac74:
    // 0x29ac74: 0x14d5000c  bne         $a2, $s5, . + 4 + (0xC << 2)
label_29ac78:
    if (ctx->pc == 0x29AC78u) {
        ctx->pc = 0x29AC7Cu;
        goto label_29ac7c;
    }
    ctx->pc = 0x29AC74u;
    {
        const bool branch_taken_0x29ac74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 21));
        if (branch_taken_0x29ac74) {
            ctx->pc = 0x29ACA8u;
            goto label_29aca8;
        }
    }
    ctx->pc = 0x29AC7Cu;
label_29ac7c:
    // 0x29ac7c: 0x0  nop
    ctx->pc = 0x29ac7cu;
    // NOP
label_29ac80:
    // 0x29ac80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29ac80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29ac84:
    // 0x29ac84: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x29ac84u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29ac88:
    // 0x29ac88: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x29ac88u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29ac8c:
    // 0x29ac8c: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x29ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_29ac90:
    // 0x29ac90: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29ac90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29ac94:
    // 0x29ac94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29ac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_29ac98:
    // 0x29ac98: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_29ac9c:
    if (ctx->pc == 0x29AC9Cu) {
        ctx->pc = 0x29ACA0u;
        goto label_29aca0;
    }
    ctx->pc = 0x29AC98u;
    {
        const bool branch_taken_0x29ac98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ac98) {
            ctx->pc = 0x29AC80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ac80;
        }
    }
    ctx->pc = 0x29ACA0u;
label_29aca0:
    // 0x29aca0: 0x50d5fff8  beql        $a2, $s5, . + 4 + (-0x8 << 2)
label_29aca4:
    if (ctx->pc == 0x29ACA4u) {
        ctx->pc = 0x29ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACA0u;
        // 0x29aca4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ACA8u;
        goto label_29aca8;
    }
    ctx->pc = 0x29ACA0u;
    {
        const bool branch_taken_0x29aca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 21));
        if (branch_taken_0x29aca0) {
            ctx->pc = 0x29ACA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29ACA0u;
            // 0x29aca4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AC84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ac84;
        }
    }
    ctx->pc = 0x29ACA8u;
label_29aca8:
    // 0x29aca8: 0x50e00040  beql        $a3, $zero, . + 4 + (0x40 << 2)
label_29acac:
    if (ctx->pc == 0x29ACACu) {
        ctx->pc = 0x29ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACA8u;
        // 0x29acac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ACB0u;
        goto label_29acb0;
    }
    ctx->pc = 0x29ACA8u;
    {
        const bool branch_taken_0x29aca8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aca8) {
            ctx->pc = 0x29ACACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29ACA8u;
            // 0x29acac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29ADACu;
            goto label_29adac;
        }
    }
    ctx->pc = 0x29ACB0u;
label_29acb0:
    // 0x29acb0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x29acb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_29acb4:
    // 0x29acb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29acb8:
    // 0x29acb8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x29acb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29acbc:
    // 0x29acbc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x29acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_29acc0:
    // 0x29acc0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29acc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29acc4:
    // 0x29acc4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29acc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_29acc8:
    // 0x29acc8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29accc:
    if (ctx->pc == 0x29ACCCu) {
        ctx->pc = 0x29ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACC8u;
        // 0x29accc: 0x90a70000  lbu         $a3, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ACD0u;
        goto label_29acd0;
    }
    ctx->pc = 0x29ACC8u;
    {
        const bool branch_taken_0x29acc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACC8u;
        // 0x29accc: 0x90a70000  lbu         $a3, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29acc8) {
            ctx->pc = 0x29ACF8u;
            goto label_29acf8;
        }
    }
    ctx->pc = 0x29ACD0u;
label_29acd0:
    // 0x29acd0: 0x2686b7c8  addiu       $a2, $s4, -0x4838
    ctx->pc = 0x29acd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948808));
label_29acd4:
    // 0x29acd4: 0x0  nop
    ctx->pc = 0x29acd4u;
    // NOP
label_29acd8:
    // 0x29acd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29acdc:
    // 0x29acdc: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x29acdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29ace0:
    // 0x29ace0: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x29ace0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29ace4:
    // 0x29ace4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x29ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_29ace8:
    // 0x29ace8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29ace8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29acec:
    // 0x29acec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_29acf0:
    // 0x29acf0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_29acf4:
    if (ctx->pc == 0x29ACF4u) {
        ctx->pc = 0x29ACF8u;
        goto label_29acf8;
    }
    ctx->pc = 0x29ACF0u;
    {
        const bool branch_taken_0x29acf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29acf0) {
            ctx->pc = 0x29ACD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29acd8;
        }
    }
    ctx->pc = 0x29ACF8u;
label_29acf8:
    // 0x29acf8: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x29acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_29acfc:
    // 0x29acfc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x29acfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_29ad00:
    // 0x29ad00: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_29ad04:
    if (ctx->pc == 0x29AD04u) {
        ctx->pc = 0x29AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD00u;
        // 0x29ad04: 0x521821  addu        $v1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AD08u;
        goto label_29ad08;
    }
    ctx->pc = 0x29AD00u;
    {
        const bool branch_taken_0x29ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD00u;
        // 0x29ad04: 0x521821  addu        $v1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad00) {
            ctx->pc = 0x29ADA8u;
            goto label_29ada8;
        }
    }
    ctx->pc = 0x29AD08u;
label_29ad08:
    // 0x29ad08: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29ad08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29ad0c:
    // 0x29ad0c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29ad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_29ad10:
    // 0x29ad10: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_29ad14:
    if (ctx->pc == 0x29AD14u) {
        ctx->pc = 0x29AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD10u;
        // 0x29ad14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AD18u;
        goto label_29ad18;
    }
    ctx->pc = 0x29AD10u;
    {
        const bool branch_taken_0x29ad10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD10u;
        // 0x29ad14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad10) {
            ctx->pc = 0x29AD48u;
            goto label_29ad48;
        }
    }
    ctx->pc = 0x29AD18u;
label_29ad18:
    // 0x29ad18: 0x2687b7c8  addiu       $a3, $s4, -0x4838
    ctx->pc = 0x29ad18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948808));
label_29ad1c:
    // 0x29ad1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29ad1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29ad20:
    // 0x29ad20: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x29ad20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29ad24:
    // 0x29ad24: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_29ad28:
    if (ctx->pc == 0x29AD28u) {
        ctx->pc = 0x29AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD24u;
        // 0x29ad28: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AD2Cu;
        goto label_29ad2c;
    }
    ctx->pc = 0x29AD24u;
    {
        const bool branch_taken_0x29ad24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD24u;
        // 0x29ad28: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad24) {
            ctx->pc = 0x29ADA0u;
            goto label_29ada0;
        }
    }
    ctx->pc = 0x29AD2Cu;
label_29ad2c:
    // 0x29ad2c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x29ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_29ad30:
    // 0x29ad30: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29ad30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29ad34:
    // 0x29ad34: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29ad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_29ad38:
    // 0x29ad38: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
label_29ad3c:
    if (ctx->pc == 0x29AD3Cu) {
        ctx->pc = 0x29AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD38u;
        // 0x29ad3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AD40u;
        goto label_29ad40;
    }
    ctx->pc = 0x29AD38u;
    {
        const bool branch_taken_0x29ad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad38) {
            ctx->pc = 0x29AD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AD38u;
            // 0x29ad3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AD20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ad20;
        }
    }
    ctx->pc = 0x29AD40u;
label_29ad40:
    // 0x29ad40: 0x10000002  b           . + 4 + (0x2 << 2)
label_29ad44:
    if (ctx->pc == 0x29AD44u) {
        ctx->pc = 0x29AD48u;
        goto label_29ad48;
    }
    ctx->pc = 0x29AD40u;
    {
        const bool branch_taken_0x29ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad40) {
            ctx->pc = 0x29AD4Cu;
            goto label_29ad4c;
        }
    }
    ctx->pc = 0x29AD48u;
label_29ad48:
    // 0x29ad48: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x29ad48u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29ad4c:
    // 0x29ad4c: 0x50c00017  beql        $a2, $zero, . + 4 + (0x17 << 2)
label_29ad50:
    if (ctx->pc == 0x29AD50u) {
        ctx->pc = 0x29AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD4Cu;
        // 0x29ad50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AD54u;
        goto label_29ad54;
    }
    ctx->pc = 0x29AD4Cu;
    {
        const bool branch_taken_0x29ad4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad4c) {
            ctx->pc = 0x29AD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AD4Cu;
            // 0x29ad50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29ADACu;
            goto label_29adac;
        }
    }
    ctx->pc = 0x29AD54u;
label_29ad54:
    // 0x29ad54: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x29ad54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_29ad58:
    // 0x29ad58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29ad58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29ad5c:
    // 0x29ad5c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x29ad5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29ad60:
    // 0x29ad60: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x29ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_29ad64:
    // 0x29ad64: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29ad64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29ad68:
    // 0x29ad68: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29ad68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_29ad6c:
    // 0x29ad6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_29ad70:
    if (ctx->pc == 0x29AD70u) {
        ctx->pc = 0x29AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD6Cu;
        // 0x29ad70: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AD74u;
        goto label_29ad74;
    }
    ctx->pc = 0x29AD6Cu;
    {
        const bool branch_taken_0x29ad6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD6Cu;
        // 0x29ad70: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad6c) {
            ctx->pc = 0x29AD98u;
            goto label_29ad98;
        }
    }
    ctx->pc = 0x29AD74u;
label_29ad74:
    // 0x29ad74: 0x2687b7c8  addiu       $a3, $s4, -0x4838
    ctx->pc = 0x29ad74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948808));
label_29ad78:
    // 0x29ad78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29ad78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29ad7c:
    // 0x29ad7c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x29ad7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29ad80:
    // 0x29ad80: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x29ad80u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29ad84:
    // 0x29ad84: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x29ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_29ad88:
    // 0x29ad88: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29ad88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29ad8c:
    // 0x29ad8c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29ad8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_29ad90:
    // 0x29ad90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_29ad94:
    if (ctx->pc == 0x29AD94u) {
        ctx->pc = 0x29AD98u;
        goto label_29ad98;
    }
    ctx->pc = 0x29AD90u;
    {
        const bool branch_taken_0x29ad90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ad90) {
            ctx->pc = 0x29AD78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ad78;
        }
    }
    ctx->pc = 0x29AD98u;
label_29ad98:
    // 0x29ad98: 0x10000004  b           . + 4 + (0x4 << 2)
label_29ad9c:
    if (ctx->pc == 0x29AD9Cu) {
        ctx->pc = 0x29AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD98u;
        // 0x29ad9c: 0x6800a  movz        $s0, $zero, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ADA0u;
        goto label_29ada0;
    }
    ctx->pc = 0x29AD98u;
    {
        const bool branch_taken_0x29ad98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD98u;
        // 0x29ad9c: 0x6800a  movz        $s0, $zero, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad98) {
            ctx->pc = 0x29ADACu;
            goto label_29adac;
        }
    }
    ctx->pc = 0x29ADA0u;
label_29ada0:
    // 0x29ada0: 0x10000002  b           . + 4 + (0x2 << 2)
label_29ada4:
    if (ctx->pc == 0x29ADA4u) {
        ctx->pc = 0x29ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADA0u;
        // 0x29ada4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ADA8u;
        goto label_29ada8;
    }
    ctx->pc = 0x29ADA0u;
    {
        const bool branch_taken_0x29ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADA0u;
        // 0x29ada4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ada0) {
            ctx->pc = 0x29ADACu;
            goto label_29adac;
        }
    }
    ctx->pc = 0x29ADA8u;
label_29ada8:
    // 0x29ada8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ada8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29adac:
    // 0x29adac: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_29adb0:
    if (ctx->pc == 0x29ADB0u) {
        ctx->pc = 0x29ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADACu;
        // 0x29adb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ADB4u;
        goto label_29adb4;
    }
    ctx->pc = 0x29ADACu;
    {
        const bool branch_taken_0x29adac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADACu;
        // 0x29adb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adac) {
            ctx->pc = 0x29ADDCu;
            goto label_29addc;
        }
    }
    ctx->pc = 0x29ADB4u;
label_29adb4:
    // 0x29adb4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x29adb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_29adb8:
    // 0x29adb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_29adbc:
    if (ctx->pc == 0x29ADBCu) {
        ctx->pc = 0x29ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADB8u;
        // 0x29adbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ADC0u;
        goto label_29adc0;
    }
    ctx->pc = 0x29ADB8u;
    {
        const bool branch_taken_0x29adb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADB8u;
        // 0x29adbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adb8) {
            ctx->pc = 0x29ADDCu;
            goto label_29addc;
        }
    }
    ctx->pc = 0x29ADC0u;
label_29adc0:
    // 0x29adc0: 0xc0a6b82  jal         func_29AE08
label_29adc4:
    if (ctx->pc == 0x29ADC4u) {
        ctx->pc = 0x29ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADC0u;
        // 0x29adc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ADC8u;
        goto label_29adc8;
    }
    ctx->pc = 0x29ADC0u;
    SET_GPR_U32(ctx, 31, 0x29ADC8u);
    ctx->pc = 0x29ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADC0u;
    // 0x29adc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AE08u, 0x29ADC0u, 0x29ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADC8u;
label_29adc8:
    // 0x29adc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29adcc:
    if (ctx->pc == 0x29ADCCu) {
        ctx->pc = 0x29ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADC8u;
        // 0x29adcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ADD0u;
        goto label_29add0;
    }
    ctx->pc = 0x29ADC8u;
    {
        const bool branch_taken_0x29adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADC8u;
        // 0x29adcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adc8) {
            ctx->pc = 0x29ADDCu;
            goto label_29addc;
        }
    }
    ctx->pc = 0x29ADD0u;
label_29add0:
    // 0x29add0: 0x1000ff97  b           . + 4 + (-0x69 << 2)
label_29add4:
    if (ctx->pc == 0x29ADD4u) {
        ctx->pc = 0x29ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADD0u;
        // 0x29add4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ADD8u;
        goto label_29add8;
    }
    ctx->pc = 0x29ADD0u;
    {
        const bool branch_taken_0x29add0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADD0u;
        // 0x29add4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29add0) {
            ctx->pc = 0x29AC30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ac30;
        }
    }
    ctx->pc = 0x29ADD8u;
label_29add8:
    // 0x29add8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29add8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29addc:
    // 0x29addc: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x29addcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_29ade0:
    // 0x29ade0: 0xdfb60260  ld          $s6, 0x260($sp)
    ctx->pc = 0x29ade0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_29ade4:
    // 0x29ade4: 0xdfb50250  ld          $s5, 0x250($sp)
    ctx->pc = 0x29ade4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_29ade8:
    // 0x29ade8: 0xdfb40240  ld          $s4, 0x240($sp)
    ctx->pc = 0x29ade8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_29adec:
    // 0x29adec: 0xdfb30230  ld          $s3, 0x230($sp)
    ctx->pc = 0x29adecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 560)));
label_29adf0:
    // 0x29adf0: 0xdfb20220  ld          $s2, 0x220($sp)
    ctx->pc = 0x29adf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 544)));
label_29adf4:
    // 0x29adf4: 0xdfb10210  ld          $s1, 0x210($sp)
    ctx->pc = 0x29adf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 528)));
label_29adf8:
    // 0x29adf8: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x29adf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_29adfc:
    // 0x29adfc: 0x3e00008  jr          $ra
label_29ae00:
    if (ctx->pc == 0x29AE00u) {
        ctx->pc = 0x29AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADFCu;
        // 0x29ae00: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AE04u;
        goto label_29ae04;
    }
    ctx->pc = 0x29ADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADFCu;
        // 0x29ae00: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ADFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AE04u;
label_29ae04:
    // 0x29ae04: 0x0  nop
    ctx->pc = 0x29ae04u;
    // NOP
}
