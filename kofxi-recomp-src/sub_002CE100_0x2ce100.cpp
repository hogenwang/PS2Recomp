#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE100
// Address: 0x2ce100 - 0x2ce178
void sub_002CE100_0x2ce100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE100_0x2ce100");
#endif

    switch (ctx->pc) {
        case 0x2ce118u: goto label_2ce118;
        default: break;
    }

    ctx->pc = 0x2ce100u;

    // 0x2ce100: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ce100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce104: 0x240afdff  addiu       $t2, $zero, -0x201
    ctx->pc = 0x2ce104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2ce108: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x2ce108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2ce10c: 0x240b0103  addiu       $t3, $zero, 0x103
    ctx->pc = 0x2ce10cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x2ce110: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2ce110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ce114: 0x0  nop
    ctx->pc = 0x2ce114u;
    // NOP
label_2ce118:
    // 0x2ce118: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2ce118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2ce11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce120: 0x30c38800  andi        $v1, $a2, 0x8800
    ctx->pc = 0x2ce120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)34816);
    // 0x2ce124: 0x30c70020  andi        $a3, $a2, 0x20
    ctx->pc = 0x2ce124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x2ce128: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CE128u;
    {
        const bool branch_taken_0x2ce128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE128u;
            // 0x2ce12c: 0xca2824  and         $a1, $a2, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce128) {
            ctx->pc = 0x2CE170u;
            goto label_2ce170;
        }
    }
    ctx->pc = 0x2CE130u;
    // 0x2ce130: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE130u;
    {
        const bool branch_taken_0x2ce130 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE130u;
            // 0x2ce134: 0x24a2ffd0  addiu       $v0, $a1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce130) {
            ctx->pc = 0x2CE158u;
            goto label_2ce158;
        }
    }
    ctx->pc = 0x2CE138u;
    // 0x2ce138: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ce138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ce13c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE13Cu;
    {
        const bool branch_taken_0x2ce13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce13c) {
            ctx->pc = 0x2CE140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE13Cu;
            // 0x2ce140: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE164u;
            goto label_2ce164;
        }
    }
    ctx->pc = 0x2CE144u;
    // 0x2ce144: 0x30c21400  andi        $v0, $a2, 0x1400
    ctx->pc = 0x2ce144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)5120);
    // 0x2ce148: 0x5449fff3  bnel        $v0, $t1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CE148u;
    {
        const bool branch_taken_0x2ce148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x2ce148) {
            ctx->pc = 0x2CE14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE148u;
            // 0x2ce14c: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce118;
        }
    }
    ctx->pc = 0x2CE150u;
    // 0x2ce150: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE150u;
    {
        const bool branch_taken_0x2ce150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE150u;
            // 0x2ce154: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce150) {
            ctx->pc = 0x2CE164u;
            goto label_2ce164;
        }
    }
    ctx->pc = 0x2CE158u;
label_2ce158:
    // 0x2ce158: 0xab1826  xor         $v1, $a1, $t3
    ctx->pc = 0x2ce158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 11));
    // 0x2ce15c: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2ce15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2ce160: 0x43400a  movz        $t0, $v0, $v1
    ctx->pc = 0x2ce160u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_2ce164:
    // 0x2ce164: 0x5d00ffec  bgtzl       $t0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2CE164u;
    {
        const bool branch_taken_0x2ce164 = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x2ce164) {
            ctx->pc = 0x2CE168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE164u;
            // 0x2ce168: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce118;
        }
    }
    ctx->pc = 0x2CE16Cu;
    // 0x2ce16c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ce16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce170:
    // 0x2ce170: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE178u;
    ctx->pc = 0x2ce178u;
}
