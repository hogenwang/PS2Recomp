#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020DB80
// Address: 0x20db80 - 0x20dc30
void sub_0020DB80_0x20db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DB80_0x20db80");
#endif

    switch (ctx->pc) {
        case 0x20dbc4u: goto label_20dbc4;
        case 0x20dbe8u: goto label_20dbe8;
        default: break;
    }

    ctx->pc = 0x20db80u;

    // 0x20db80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20db84: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20db84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20db88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20db88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20db8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20db90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20db90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20db94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20db94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20db98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20db98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20db9c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20db9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dba0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20dba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20dba4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20dba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20dba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20dbac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x20dbacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20dbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20dbb4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x20dbb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbb8: 0x95290000  lhu         $t1, 0x0($t1)
    ctx->pc = 0x20dbb8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20dbbc: 0x11230010  beq         $t1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20DBBCu;
    {
        const bool branch_taken_0x20dbbc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x20DBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBBCu;
            // 0x20dbc0: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbbc) {
            ctx->pc = 0x20DC00u;
            goto label_20dc00;
        }
    }
    ctx->pc = 0x20DBC4u;
label_20dbc4:
    // 0x20dbc4: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x20dbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x20dbc8: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DBC8u;
    {
        const bool branch_taken_0x20dbc8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x20dbc8) {
            ctx->pc = 0x20DBE8u;
            goto label_20dbe8;
        }
    }
    ctx->pc = 0x20DBD0u;
    // 0x20dbd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20dbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20dbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20dbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbdc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x20dbdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbe0: 0xc08369c  jal         func_20DA70
    ctx->pc = 0x20DBE0u;
    SET_GPR_U32(ctx, 31, 0x20DBE8u);
    ctx->pc = 0x20DBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBE0u;
            // 0x20dbe4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DA70u;
    if (runtime->hasFunction(0x20DA70u)) {
        auto targetFn = runtime->lookupFunction(0x20DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBE8u; }
        if (ctx->pc != 0x20DBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DA70_0x20da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBE8u; }
        if (ctx->pc != 0x20DBE8u) { return; }
    }
    ctx->pc = 0x20DBE8u;
label_20dbe8:
    // 0x20dbe8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x20dbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x20dbec: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x20dbecu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20dbf0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20dbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20dbf4: 0x1523fff3  bne         $t1, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x20DBF4u;
    {
        const bool branch_taken_0x20dbf4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x20DBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBF4u;
            // 0x20dbf8: 0x26b50020  addiu       $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbf4) {
            ctx->pc = 0x20DBC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20dbc4;
        }
    }
    ctx->pc = 0x20DBFCu;
    // 0x20dbfc: 0x0  nop
    ctx->pc = 0x20dbfcu;
    // NOP
label_20dc00:
    // 0x20dc00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20dc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20dc04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20dc04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20dc08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20dc08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20dc0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20dc0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20dc10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20dc10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dc14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20dc14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dc18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20dc18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC1Cu;
            // 0x20dc20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20DC24u;
    // 0x20dc24: 0x0  nop
    ctx->pc = 0x20dc24u;
    // NOP
    // 0x20dc28: 0x0  nop
    ctx->pc = 0x20dc28u;
    // NOP
    // 0x20dc2c: 0x0  nop
    ctx->pc = 0x20dc2cu;
    // NOP
    ctx->pc = 0x20dc30u;
}
