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

// Function: sub_001E6128
// Address: 0x1e6128 - 0x1e6190
void sub_001E6128_0x1e6128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6128_0x1e6128");
#endif

    switch (ctx->pc) {
        case 0x1e6128u: goto label_1e6128;
        case 0x1e612cu: goto label_1e612c;
        case 0x1e6130u: goto label_1e6130;
        case 0x1e6134u: goto label_1e6134;
        case 0x1e6138u: goto label_1e6138;
        case 0x1e613cu: goto label_1e613c;
        case 0x1e6140u: goto label_1e6140;
        case 0x1e6144u: goto label_1e6144;
        case 0x1e6148u: goto label_1e6148;
        case 0x1e614cu: goto label_1e614c;
        case 0x1e6150u: goto label_1e6150;
        case 0x1e6154u: goto label_1e6154;
        case 0x1e6158u: goto label_1e6158;
        case 0x1e615cu: goto label_1e615c;
        case 0x1e6160u: goto label_1e6160;
        case 0x1e6164u: goto label_1e6164;
        case 0x1e6168u: goto label_1e6168;
        case 0x1e616cu: goto label_1e616c;
        case 0x1e6170u: goto label_1e6170;
        case 0x1e6174u: goto label_1e6174;
        case 0x1e6178u: goto label_1e6178;
        case 0x1e617cu: goto label_1e617c;
        case 0x1e6180u: goto label_1e6180;
        case 0x1e6184u: goto label_1e6184;
        case 0x1e6188u: goto label_1e6188;
        case 0x1e618cu: goto label_1e618c;
        default: break;
    }

    ctx->pc = 0x1e6128u;

label_1e6128:
    // 0x1e6128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e612c:
    // 0x1e612c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6130:
    // 0x1e6130: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e6130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6134:
    // 0x1e6134: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e6134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e6138:
    // 0x1e6138: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e6138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e613c:
    // 0x1e613c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e6140:
    // 0x1e6140: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e6140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1e6144:
    // 0x1e6144: 0xc0799fc  jal         func_1E67F0
label_1e6148:
    if (ctx->pc == 0x1E6148u) {
        ctx->pc = 0x1E6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6144u;
        // 0x1e6148: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E614Cu;
        goto label_1e614c;
    }
    ctx->pc = 0x1E6144u;
    SET_GPR_U32(ctx, 31, 0x1E614Cu);
    ctx->pc = 0x1E6148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6144u;
    // 0x1e6148: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E67F0u, 0x1E6144u, 0x1E614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E614Cu;
label_1e614c:
    // 0x1e614c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e6150:
    if (ctx->pc == 0x1E6150u) {
        ctx->pc = 0x1E6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E614Cu;
        // 0x1e6150: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6154u;
        goto label_1e6154;
    }
    ctx->pc = 0x1E614Cu;
    {
        const bool branch_taken_0x1e614c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E614Cu;
        // 0x1e6150: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e614c) {
            ctx->pc = 0x1E6170u;
            goto label_1e6170;
        }
    }
    ctx->pc = 0x1E6154u;
label_1e6154:
    // 0x1e6154: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e6154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e6158:
    // 0x1e6158: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e615c:
    if (ctx->pc == 0x1E615Cu) {
        ctx->pc = 0x1E615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6158u;
        // 0x1e615c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6160u;
        goto label_1e6160;
    }
    ctx->pc = 0x1E6158u;
    {
        const bool branch_taken_0x1e6158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6158u;
        // 0x1e615c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6158) {
            ctx->pc = 0x1E6170u;
            goto label_1e6170;
        }
    }
    ctx->pc = 0x1E6160u;
label_1e6160:
    // 0x1e6160: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e6160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6164:
    // 0x1e6164: 0x40f809  jalr        $v0
label_1e6168:
    if (ctx->pc == 0x1E6168u) {
        ctx->pc = 0x1E6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6164u;
        // 0x1e6168: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E616Cu;
        goto label_1e616c;
    }
    ctx->pc = 0x1E6164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E616Cu);
        ctx->pc = 0x1E6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6164u;
        // 0x1e6168: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6164u, 0x1E616Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E616Cu;
label_1e616c:
    // 0x1e616c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e616cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6170:
    // 0x1e6170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6174:
    // 0x1e6174: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e6174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e6178:
    // 0x1e6178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e617c:
    // 0x1e617c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e617cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6180:
    // 0x1e6180: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e6180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e6184:
    // 0x1e6184: 0x3e00008  jr          $ra
label_1e6188:
    if (ctx->pc == 0x1E6188u) {
        ctx->pc = 0x1E6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6184u;
        // 0x1e6188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E618Cu;
        goto label_1e618c;
    }
    ctx->pc = 0x1E6184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6184u;
        // 0x1e6188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E618Cu;
label_1e618c:
    // 0x1e618c: 0x0  nop
    ctx->pc = 0x1e618cu;
    // NOP
}
