#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002111F0
// Address: 0x2111f0 - 0x211268
void sub_002111F0_0x2111f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002111F0_0x2111f0");
#endif

    switch (ctx->pc) {
        case 0x211228u: goto label_211228;
        default: break;
    }

    ctx->pc = 0x2111f0u;

    // 0x2111f0: 0x30cf0003  andi        $t7, $a2, 0x3
    ctx->pc = 0x2111f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x2111f4: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2111F4u;
    {
        const bool branch_taken_0x2111f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2111F4u;
            // 0x2111f8: 0x3c0e003a  lui         $t6, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111f4) {
            ctx->pc = 0x211208u;
            goto label_211208;
        }
    }
    ctx->pc = 0x2111FCu;
    // 0x2111fc: 0x8dcfab58  lw          $t7, -0x54A8($t6)
    ctx->pc = 0x2111fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294945624)));
    // 0x211200: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x211200u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x211204: 0xadcfab58  sw          $t7, -0x54A8($t6)
    ctx->pc = 0x211204u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294945624), GPR_U32(ctx, 15));
label_211208:
    // 0x211208: 0x8cef0000  lw          $t7, 0x0($a3)
    ctx->pc = 0x211208u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21120c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x21120cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211210: 0x1e6782b  sltu        $t7, $t7, $a2
    ctx->pc = 0x211210u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x211214: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x211214u;
    {
        const bool branch_taken_0x211214 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x211218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211214u;
            // 0x211218: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211214) {
            ctx->pc = 0x211260u;
            goto label_211260;
        }
    }
    ctx->pc = 0x21121Cu;
    // 0x21121c: 0x1180000c  beqz        $t4, . + 4 + (0xC << 2)
    ctx->pc = 0x21121Cu;
    {
        const bool branch_taken_0x21121c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x211220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21121Cu;
            // 0x211220: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21121c) {
            ctx->pc = 0x211250u;
            goto label_211250;
        }
    }
    ctx->pc = 0x211224u;
    // 0x211224: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x211224u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_211228:
    // 0x211228: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x211228u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21122c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21122cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x211230: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x211230u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211234: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x211234u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x211238: 0xa1ae0000  sb          $t6, 0x0($t5)
    ctx->pc = 0x211238u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x21123c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21123cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x211240: 0xac8f0000  sw          $t7, 0x0($a0)
    ctx->pc = 0x211240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
    // 0x211244: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x211244u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x211248: 0x14cbfff7  bne         $a2, $t3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x211248u;
    {
        const bool branch_taken_0x211248 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        ctx->pc = 0x21124Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211248u;
            // 0x21124c: 0xacad0000  sw          $t5, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211248) {
            ctx->pc = 0x211228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211228;
        }
    }
    ctx->pc = 0x211250u;
label_211250:
    // 0x211250: 0x8cef0000  lw          $t7, 0x0($a3)
    ctx->pc = 0x211250u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x211254: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x211254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211258: 0x1ec7823  subu        $t7, $t7, $t4
    ctx->pc = 0x211258u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x21125c: 0xacef0000  sw          $t7, 0x0($a3)
    ctx->pc = 0x21125cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 15));
label_211260:
    // 0x211260: 0x3e00008  jr          $ra
    ctx->pc = 0x211260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211268u;
    ctx->pc = 0x211268u;
}
