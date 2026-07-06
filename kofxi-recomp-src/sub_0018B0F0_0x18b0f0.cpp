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

// Function: sub_0018B0F0
// Address: 0x18b0f0 - 0x18b170
void sub_0018B0F0_0x18b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B0F0_0x18b0f0");
#endif

    switch (ctx->pc) {
        case 0x18b0f0u: goto label_18b0f0;
        case 0x18b0f4u: goto label_18b0f4;
        case 0x18b0f8u: goto label_18b0f8;
        case 0x18b0fcu: goto label_18b0fc;
        case 0x18b100u: goto label_18b100;
        case 0x18b104u: goto label_18b104;
        case 0x18b108u: goto label_18b108;
        case 0x18b10cu: goto label_18b10c;
        case 0x18b110u: goto label_18b110;
        case 0x18b114u: goto label_18b114;
        case 0x18b118u: goto label_18b118;
        case 0x18b11cu: goto label_18b11c;
        case 0x18b120u: goto label_18b120;
        case 0x18b124u: goto label_18b124;
        case 0x18b128u: goto label_18b128;
        case 0x18b12cu: goto label_18b12c;
        case 0x18b130u: goto label_18b130;
        case 0x18b134u: goto label_18b134;
        case 0x18b138u: goto label_18b138;
        case 0x18b13cu: goto label_18b13c;
        case 0x18b140u: goto label_18b140;
        case 0x18b144u: goto label_18b144;
        case 0x18b148u: goto label_18b148;
        case 0x18b14cu: goto label_18b14c;
        case 0x18b150u: goto label_18b150;
        case 0x18b154u: goto label_18b154;
        case 0x18b158u: goto label_18b158;
        case 0x18b15cu: goto label_18b15c;
        case 0x18b160u: goto label_18b160;
        case 0x18b164u: goto label_18b164;
        case 0x18b168u: goto label_18b168;
        case 0x18b16cu: goto label_18b16c;
        default: break;
    }

    ctx->pc = 0x18b0f0u;

label_18b0f0:
    // 0x18b0f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18b0f4:
    // 0x18b0f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18b0f8:
    // 0x18b0f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18b0fc:
    // 0x18b0fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18b100:
    // 0x18b100: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b104:
    // 0x18b104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18b108:
    // 0x18b108: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b10c:
    // 0x18b10c: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18b10cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18b110:
    // 0x18b110: 0x26104090  addiu       $s0, $s0, 0x4090
    ctx->pc = 0x18b110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16528));
label_18b114:
    // 0x18b114: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_18b118:
    // 0x18b118: 0xa051bb60  sb          $s1, -0x44A0($v0)
    ctx->pc = 0x18b118u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294949728), (uint8_t)GPR_U32(ctx, 17));
label_18b11c:
    // 0x18b11c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18b120:
    // 0x18b120: 0x40f809  jalr        $v0
label_18b124:
    if (ctx->pc == 0x18B124u) {
        ctx->pc = 0x18B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B120u;
        // 0x18b124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B128u;
        goto label_18b128;
    }
    ctx->pc = 0x18B120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18B128u);
        ctx->pc = 0x18B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B120u;
        // 0x18b124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B120u, 0x18B128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B128u;
label_18b128:
    // 0x18b128: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18b128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18b12c:
    // 0x18b12c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b130:
    // 0x18b130: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18b130u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18b134:
    // 0x18b134: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_18b138:
    if (ctx->pc == 0x18B138u) {
        ctx->pc = 0x18B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B134u;
        // 0x18b138: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B13Cu;
        goto label_18b13c;
    }
    ctx->pc = 0x18B134u;
    {
        const bool branch_taken_0x18b134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b134) {
            ctx->pc = 0x18B138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B134u;
            // 0x18b138: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B144u;
            goto label_18b144;
        }
    }
    ctx->pc = 0x18B13Cu;
label_18b13c:
    // 0x18b13c: 0x10000006  b           . + 4 + (0x6 << 2)
label_18b140:
    if (ctx->pc == 0x18B140u) {
        ctx->pc = 0x18B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B13Cu;
        // 0x18b140: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B144u;
        goto label_18b144;
    }
    ctx->pc = 0x18B13Cu;
    {
        const bool branch_taken_0x18b13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B13Cu;
        // 0x18b140: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b13c) {
            ctx->pc = 0x18B158u;
            goto label_18b158;
        }
    }
    ctx->pc = 0x18B144u;
label_18b144:
    // 0x18b144: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x18b144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_18b148:
    // 0x18b148: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_18b14c:
    if (ctx->pc == 0x18B14Cu) {
        ctx->pc = 0x18B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B148u;
        // 0x18b14c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B150u;
        goto label_18b150;
    }
    ctx->pc = 0x18B148u;
    {
        const bool branch_taken_0x18b148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B148u;
        // 0x18b14c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b148) {
            ctx->pc = 0x18B114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b114;
        }
    }
    ctx->pc = 0x18B150u;
label_18b150:
    // 0x18b150: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18b150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18b154:
    // 0x18b154: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18b154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18b158:
    // 0x18b158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b15c:
    // 0x18b15c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b160:
    // 0x18b160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b164:
    // 0x18b164: 0x3e00008  jr          $ra
label_18b168:
    if (ctx->pc == 0x18B168u) {
        ctx->pc = 0x18B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B164u;
        // 0x18b168: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B16Cu;
        goto label_18b16c;
    }
    ctx->pc = 0x18B164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B164u;
        // 0x18b168: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B16Cu;
label_18b16c:
    // 0x18b16c: 0x0  nop
    ctx->pc = 0x18b16cu;
    // NOP
}
