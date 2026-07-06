#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211268
// Address: 0x211268 - 0x211370
void sub_00211268_0x211268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211268_0x211268");
#endif

    switch (ctx->pc) {
        case 0x211280u: goto label_211280;
        case 0x2112f8u: goto label_2112f8;
        case 0x21133cu: goto label_21133c;
        default: break;
    }

    ctx->pc = 0x211268u;

    // 0x211268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21126c: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x21126cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211270: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x211270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x211274: 0x3a0602d  daddu       $t4, $sp, $zero
    ctx->pc = 0x211274u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211278: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x211278u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21127c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x21127cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_211280:
    // 0x211280: 0x16d7821  addu        $t7, $t3, $t5
    ctx->pc = 0x211280u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x211284: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x211284u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x211288: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x211288u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x21128c: 0xa18e0000  sb          $t6, 0x0($t4)
    ctx->pc = 0x21128cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x211290: 0x0  nop
    ctx->pc = 0x211290u;
    // NOP
    // 0x211294: 0x15aafffa  bne         $t5, $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x211294u;
    {
        const bool branch_taken_0x211294 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 10));
        ctx->pc = 0x211298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211294u;
            // 0x211298: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211294) {
            ctx->pc = 0x211280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211280;
        }
    }
    ctx->pc = 0x21129Cu;
    // 0x21129c: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x21129cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2112a0: 0x256f0002  addiu       $t7, $t3, 0x2
    ctx->pc = 0x2112a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x2112a4: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x2112a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2112a8: 0xac8f0000  sw          $t7, 0x0($a0)
    ctx->pc = 0x2112a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
    // 0x2112ac: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x2112acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2112b0: 0xcc782a  slt         $t7, $a2, $t4
    ctx->pc = 0x2112b0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2112b4: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2112B4u;
    {
        const bool branch_taken_0x2112b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2112B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2112B4u;
            // 0x2112b8: 0x3c0d003a  lui         $t5, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2112b4) {
            ctx->pc = 0x2112C4u;
            goto label_2112c4;
        }
    }
    ctx->pc = 0x2112BCu;
    // 0x2112bc: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2112bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2112c0: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2112c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2112c4:
    // 0x2112c4: 0xcc5823  subu        $t3, $a2, $t4
    ctx->pc = 0x2112c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2112c8: 0x8daeab58  lw          $t6, -0x54A8($t5)
    ctx->pc = 0x2112c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294945624)));
    // 0x2112cc: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x2112ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x2112d0: 0xadaeab58  sw          $t6, -0x54A8($t5)
    ctx->pc = 0x2112d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294945624), GPR_U32(ctx, 14));
    // 0x2112d4: 0x8cef0000  lw          $t7, 0x0($a3)
    ctx->pc = 0x2112d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2112d8: 0x1e6782b  sltu        $t7, $t7, $a2
    ctx->pc = 0x2112d8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2112dc: 0x15e00022  bnez        $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x2112DCu;
    {
        const bool branch_taken_0x2112dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2112E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2112DCu;
            // 0x2112e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2112dc) {
            ctx->pc = 0x211368u;
            goto label_211368;
        }
    }
    ctx->pc = 0x2112E4u;
    // 0x2112e4: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2112e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2112e8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2112e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2112ec: 0x118f000e  beq         $t4, $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x2112ECu;
    {
        const bool branch_taken_0x2112ec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x2112F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2112ECu;
            // 0x2112f0: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2112ec) {
            ctx->pc = 0x211328u;
            goto label_211328;
        }
    }
    ctx->pc = 0x2112F4u;
    // 0x2112f4: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x2112f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2112f8:
    // 0x2112f8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2112f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2112fc: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x2112fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211300: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x211300u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x211304: 0xa1af0000  sb          $t7, 0x0($t5)
    ctx->pc = 0x211304u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x211308: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x211308u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x21130c: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x21130cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211310: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x211310u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x211314: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x211314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
    // 0x211318: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x211318u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x21131c: 0xacad0000  sw          $t5, 0x0($a1)
    ctx->pc = 0x21131cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
    // 0x211320: 0x15ecfff5  bne         $t7, $t4, . + 4 + (-0xB << 2)
    ctx->pc = 0x211320u;
    {
        const bool branch_taken_0x211320 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 12));
        ctx->pc = 0x211324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211320u;
            // 0x211324: 0xafaf0000  sw          $t7, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211320) {
            ctx->pc = 0x2112F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2112f8;
        }
    }
    ctx->pc = 0x211328u;
label_211328:
    // 0x211328: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x211328u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x21132c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x21132cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211330: 0x516f000a  beql        $t3, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x211330u;
    {
        const bool branch_taken_0x211330 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 15));
        if (branch_taken_0x211330) {
            ctx->pc = 0x211334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211330u;
            // 0x211334: 0x8cef0000  lw          $t7, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21135Cu;
            goto label_21135c;
        }
    }
    ctx->pc = 0x211338u;
    // 0x211338: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x211338u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21133c:
    // 0x21133c: 0x8caf0000  lw          $t7, 0x0($a1)
    ctx->pc = 0x21133cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211340: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x211340u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x211344: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x211344u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x211348: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x211348u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x21134c: 0x0  nop
    ctx->pc = 0x21134cu;
    // NOP
    // 0x211350: 0x156efffa  bne         $t3, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x211350u;
    {
        const bool branch_taken_0x211350 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 14));
        ctx->pc = 0x211354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211350u;
            // 0x211354: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211350) {
            ctx->pc = 0x21133Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21133c;
        }
    }
    ctx->pc = 0x211358u;
    // 0x211358: 0x8cef0000  lw          $t7, 0x0($a3)
    ctx->pc = 0x211358u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21135c:
    // 0x21135c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x21135cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211360: 0x1e67823  subu        $t7, $t7, $a2
    ctx->pc = 0x211360u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x211364: 0xacef0000  sw          $t7, 0x0($a3)
    ctx->pc = 0x211364u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 15));
label_211368:
    // 0x211368: 0x3e00008  jr          $ra
    ctx->pc = 0x211368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211368u;
            // 0x21136c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211370u;
    ctx->pc = 0x211370u;
}
