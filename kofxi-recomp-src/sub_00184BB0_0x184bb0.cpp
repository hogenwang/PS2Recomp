#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184BB0
// Address: 0x184bb0 - 0x184c40
void sub_00184BB0_0x184bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184BB0_0x184bb0");
#endif

    switch (ctx->pc) {
        case 0x184bb0u: goto label_184bb0;
        case 0x184bb4u: goto label_184bb4;
        case 0x184bb8u: goto label_184bb8;
        case 0x184bbcu: goto label_184bbc;
        case 0x184bc0u: goto label_184bc0;
        case 0x184bc4u: goto label_184bc4;
        case 0x184bc8u: goto label_184bc8;
        case 0x184bccu: goto label_184bcc;
        case 0x184bd0u: goto label_184bd0;
        case 0x184bd4u: goto label_184bd4;
        case 0x184bd8u: goto label_184bd8;
        case 0x184bdcu: goto label_184bdc;
        case 0x184be0u: goto label_184be0;
        case 0x184be4u: goto label_184be4;
        case 0x184be8u: goto label_184be8;
        case 0x184becu: goto label_184bec;
        case 0x184bf0u: goto label_184bf0;
        case 0x184bf4u: goto label_184bf4;
        case 0x184bf8u: goto label_184bf8;
        case 0x184bfcu: goto label_184bfc;
        case 0x184c00u: goto label_184c00;
        case 0x184c04u: goto label_184c04;
        case 0x184c08u: goto label_184c08;
        case 0x184c0cu: goto label_184c0c;
        case 0x184c10u: goto label_184c10;
        case 0x184c14u: goto label_184c14;
        case 0x184c18u: goto label_184c18;
        case 0x184c1cu: goto label_184c1c;
        case 0x184c20u: goto label_184c20;
        case 0x184c24u: goto label_184c24;
        case 0x184c28u: goto label_184c28;
        case 0x184c2cu: goto label_184c2c;
        case 0x184c30u: goto label_184c30;
        case 0x184c34u: goto label_184c34;
        case 0x184c38u: goto label_184c38;
        case 0x184c3cu: goto label_184c3c;
        default: break;
    }

    ctx->pc = 0x184bb0u;

label_184bb0:
    // 0x184bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x184bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_184bb4:
    // 0x184bb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x184bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_184bb8:
    // 0x184bb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x184bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_184bbc:
    // 0x184bbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_184bc0:
    // 0x184bc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x184bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184bc4:
    // 0x184bc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_184bc8:
    // 0x184bc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x184bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184bcc:
    // 0x184bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_184bd0:
    // 0x184bd0: 0x2402827  not         $a1, $s2
    ctx->pc = 0x184bd0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 18) | GPR_U64(ctx, 0)));
label_184bd4:
    // 0x184bd4: 0x8c8300f8  lw          $v1, 0xF8($a0)
    ctx->pc = 0x184bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
label_184bd8:
    // 0x184bd8: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x184bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_184bdc:
    // 0x184bdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x184bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184be0:
    // 0x184be0: 0x26106340  addiu       $s0, $s0, 0x6340
    ctx->pc = 0x184be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25408));
label_184be4:
    // 0x184be4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x184be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_184be8:
    // 0x184be8: 0xac8300f8  sw          $v1, 0xF8($a0)
    ctx->pc = 0x184be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
label_184bec:
    // 0x184bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184bf0:
    // 0x184bf0: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x184bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_184bf4:
    // 0x184bf4: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x184bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_184bf8:
    // 0x184bf8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_184bfc:
    if (ctx->pc == 0x184BFCu) {
        ctx->pc = 0x184C00u;
        goto label_184c00;
    }
    ctx->pc = 0x184BF8u;
    {
        const bool branch_taken_0x184bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184bf8) {
            ctx->pc = 0x184C10u;
            goto label_184c10;
        }
    }
    ctx->pc = 0x184C00u;
label_184c00:
    // 0x184c00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x184c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_184c04:
    // 0x184c04: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x184c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_184c08:
    // 0x184c08: 0x40f809  jalr        $v0
label_184c0c:
    if (ctx->pc == 0x184C0Cu) {
        ctx->pc = 0x184C0Cu;
            // 0x184c0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184C10u;
        goto label_184c10;
    }
    ctx->pc = 0x184C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184C10u);
        ctx->pc = 0x184C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C08u;
            // 0x184c0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x184C10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184C10u; }
            if (ctx->pc != 0x184C10u) { return; }
        }
        }
    }
    ctx->pc = 0x184C10u;
label_184c10:
    // 0x184c10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x184c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_184c14:
    // 0x184c14: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x184c14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_184c18:
    // 0x184c18: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_184c1c:
    if (ctx->pc == 0x184C1Cu) {
        ctx->pc = 0x184C1Cu;
            // 0x184c1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x184C20u;
        goto label_184c20;
    }
    ctx->pc = 0x184C18u;
    {
        const bool branch_taken_0x184c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x184C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C18u;
            // 0x184c1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c18) {
            ctx->pc = 0x184BECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184bec;
        }
    }
    ctx->pc = 0x184C20u;
label_184c20:
    // 0x184c20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x184c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_184c24:
    // 0x184c24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x184c24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_184c28:
    // 0x184c28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_184c2c:
    // 0x184c2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184c30:
    // 0x184c30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_184c34:
    // 0x184c34: 0x3e00008  jr          $ra
label_184c38:
    if (ctx->pc == 0x184C38u) {
        ctx->pc = 0x184C38u;
            // 0x184c38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x184C3Cu;
        goto label_184c3c;
    }
    ctx->pc = 0x184C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C34u;
            // 0x184c38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184C3Cu;
label_184c3c:
    // 0x184c3c: 0x0  nop
    ctx->pc = 0x184c3cu;
    // NOP
    ctx->pc = 0x184c40u;
}
