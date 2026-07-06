#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDE08
// Address: 0x1cde08 - 0x1cdfc8
void sub_001CDE08_0x1cde08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDE08_0x1cde08");
#endif

    switch (ctx->pc) {
        case 0x1cde38u: goto label_1cde38;
        case 0x1cde58u: goto label_1cde58;
        case 0x1cde70u: goto label_1cde70;
        case 0x1cde94u: goto label_1cde94;
        case 0x1cdeb8u: goto label_1cdeb8;
        case 0x1cdf18u: goto label_1cdf18;
        case 0x1cdf4cu: goto label_1cdf4c;
        case 0x1cdf54u: goto label_1cdf54;
        case 0x1cdf6cu: goto label_1cdf6c;
        case 0x1cdf74u: goto label_1cdf74;
        case 0x1cdf80u: goto label_1cdf80;
        default: break;
    }

    ctx->pc = 0x1cde08u;

label_1cde08:
    // 0x1cde08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cde08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cde0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cde0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cde10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cde10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cde14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cde14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cde18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cde18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cde1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cde20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cde20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cde24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cde28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1cde28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde2c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cde2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cde30: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1cde30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde34: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x1cde34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_1cde38:
    // 0x1cde38: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CDE38u;
    {
        const bool branch_taken_0x1cde38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE38u;
            // 0x1cde3c: 0x3c0201bf  lui         $v0, 0x1BF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde38) {
            ctx->pc = 0x1CDE84u;
            goto label_1cde84;
        }
    }
    ctx->pc = 0x1CDE40u;
    // 0x1cde40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cde40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde44: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1cde44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1cde48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1cde48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1cde4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cde4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cde50: 0xc048382  jal         func_120E08
    ctx->pc = 0x1CDE50u;
    SET_GPR_U32(ctx, 31, 0x1CDE58u);
    ctx->pc = 0x1CDE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE50u;
            // 0x1cde54: 0x2628821  addu        $s1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120E08u;
    if (runtime->hasFunction(0x120E08u)) {
        auto targetFn = runtime->lookupFunction(0x120E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE58u; }
        if (ctx->pc != 0x1CDE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120E08_0x120e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE58u; }
        if (ctx->pc != 0x1CDE58u) { return; }
    }
    ctx->pc = 0x1CDE58u;
label_1cde58:
    // 0x1cde58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cde58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cde5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cde60: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cde60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cde64: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1cde64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cde68: 0xc04818c  jal         func_120630
    ctx->pc = 0x1CDE68u;
    SET_GPR_U32(ctx, 31, 0x1CDE70u);
    ctx->pc = 0x1CDE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE68u;
            // 0x1cde6c: 0x66520001  daddiu      $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE70u; }
        if (ctx->pc != 0x1CDE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE70u; }
        if (ctx->pc != 0x1CDE70u) { return; }
    }
    ctx->pc = 0x1CDE70u;
label_1cde70:
    // 0x1cde70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cde70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde74: 0x1600fff0  bnez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CDE74u;
    {
        const bool branch_taken_0x1cde74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE74u;
            // 0x1cde78: 0x2a420020  slti        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde74) {
            ctx->pc = 0x1CDE38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cde38;
        }
    }
    ctx->pc = 0x1CDE7Cu;
    // 0x1cde7c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1cde7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cde80: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cde80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1cde84:
    // 0x1cde84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cde84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde88: 0x24507d40  addiu       $s0, $v0, 0x7D40
    ctx->pc = 0x1cde88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32064));
    // 0x1cde8c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1CDE8Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE94u);
    ctx->pc = 0x1CDE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE8Cu;
            // 0x1cde90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE94u; }
        if (ctx->pc != 0x1CDE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE94u; }
        if (ctx->pc != 0x1CDE94u) { return; }
    }
    ctx->pc = 0x1CDE94u;
label_1cde94:
    // 0x1cde94: 0x6683ffff  daddiu      $v1, $s4, -0x1
    ctx->pc = 0x1cde94u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4294967295);
    // 0x1cde98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cde98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cde9c: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x1cde9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1cdea0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1cdea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cdea4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1cdea4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1cdea8: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CDEA8u;
    {
        const bool branch_taken_0x1cdea8 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1cdea8) {
            ctx->pc = 0x1CDEE8u;
            goto label_1cdee8;
        }
    }
    ctx->pc = 0x1CDEB0u;
    // 0x1cdeb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cdeb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdeb4: 0x64a6ffff  daddiu      $a2, $a1, -0x1
    ctx->pc = 0x1cdeb4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_1cdeb8:
    // 0x1cdeb8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1cdeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cdebc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1cdebcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1cdec0: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x1cdec0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x1cdec4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1cdec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1cdec8: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1cdec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1cdecc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1cdeccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1cded0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1cded0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cded4: 0x66520001  daddiu      $s2, $s2, 0x1
    ctx->pc = 0x1cded4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
    // 0x1cded8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1cded8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1cdedc: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x1cdedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1cdee0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CDEE0u;
    {
        const bool branch_taken_0x1cdee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEE0u;
            // 0x1cdee4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdee0) {
            ctx->pc = 0x1CDEB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cdeb8;
        }
    }
    ctx->pc = 0x1CDEE8u;
label_1cdee8:
    // 0x1cdee8: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1cdee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1cdeec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1cdeecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1cdef0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdef4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1cdef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cdef8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cdef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdf00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdf00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdf04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cdf04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdf08: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cdf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cdf0c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1cdf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdf10: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF10u;
            // 0x1cdf14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDF18u;
label_1cdf18:
    // 0x1cdf18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdf1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdf20: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1cdf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdf28: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cdf28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdf30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cdf30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cdf34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf38: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1cdf38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1cdf3c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1cdf3cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1cdf40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cdf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cdf44: 0xc073782  jal         func_1CDE08
    ctx->pc = 0x1CDF44u;
    SET_GPR_U32(ctx, 31, 0x1CDF4Cu);
    ctx->pc = 0x1CDF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF44u;
            // 0x1cdf48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDE08u;
    goto label_1cde08;
    ctx->pc = 0x1CDF4Cu;
label_1cdf4c:
    // 0x1cdf4c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1CDF4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF54u);
    ctx->pc = 0x1CDF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF4Cu;
            // 0x1cdf50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF54u; }
        if (ctx->pc != 0x1CDF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF54u; }
        if (ctx->pc != 0x1CDF54u) { return; }
    }
    ctx->pc = 0x1CDF54u;
label_1cdf54:
    // 0x1cdf54: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cdf54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cdf58: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1cdf58u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1cdf5c: 0x24a5be58  addiu       $a1, $a1, -0x41A8
    ctx->pc = 0x1cdf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950488));
    // 0x1cdf60: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x1cdf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1cdf64: 0xc04a88c  jal         func_12A230
    ctx->pc = 0x1CDF64u;
    SET_GPR_U32(ctx, 31, 0x1CDF6Cu);
    ctx->pc = 0x1CDF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF64u;
            // 0x1cdf68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A230u;
    if (runtime->hasFunction(0x12A230u)) {
        auto targetFn = runtime->lookupFunction(0x12A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF6Cu; }
        if (ctx->pc != 0x1CDF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A230_0x12a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF6Cu; }
        if (ctx->pc != 0x1CDF6Cu) { return; }
    }
    ctx->pc = 0x1CDF6Cu;
label_1cdf6c:
    // 0x1cdf6c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF74u);
    ctx->pc = 0x1CDF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF6Cu;
            // 0x1cdf70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF74u; }
        if (ctx->pc != 0x1CDF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF74u; }
        if (ctx->pc != 0x1CDF74u) { return; }
    }
    ctx->pc = 0x1CDF74u;
label_1cdf74:
    // 0x1cdf74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf78: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1CDF78u;
    SET_GPR_U32(ctx, 31, 0x1CDF80u);
    ctx->pc = 0x1CDF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF78u;
            // 0x1cdf7c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF80u; }
        if (ctx->pc != 0x1CDF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF80u; }
        if (ctx->pc != 0x1CDF80u) { return; }
    }
    ctx->pc = 0x1CDF80u;
label_1cdf80:
    // 0x1cdf80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1cdf80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cdf84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdf84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdf88: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1cdf88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cdf8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cdf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cdf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdf94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdf98: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1cdf98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cdf9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdf9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdfa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cdfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdfa4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1cdfa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1cdfa8: 0x8073782  j           func_1CDE08
    ctx->pc = 0x1CDFA8u;
    ctx->pc = 0x1CDFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFA8u;
            // 0x1cdfac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDE08u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1cde08;
    ctx->pc = 0x1CDFB0u;
    // 0x1cdfb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdfb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdfb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdfbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdfc0: 0x80737f2  j           func_1CDFC8
    ctx->pc = 0x1CDFC0u;
    ctx->pc = 0x1CDFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFC0u;
            // 0x1cdfc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDFC8u;
    if (runtime->hasFunction(0x1CDFC8u)) {
        auto targetFn = runtime->lookupFunction(0x1CDFC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDFC8_0x1cdfc8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CDFC8u;
    ctx->pc = 0x1cdfc8u;
}
