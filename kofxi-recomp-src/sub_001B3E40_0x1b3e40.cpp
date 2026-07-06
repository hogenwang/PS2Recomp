#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3E40
// Address: 0x1b3e40 - 0x1b3f90
void sub_001B3E40_0x1b3e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3E40_0x1b3e40");
#endif

    switch (ctx->pc) {
        case 0x1b3e40u: goto label_1b3e40;
        case 0x1b3e44u: goto label_1b3e44;
        case 0x1b3e48u: goto label_1b3e48;
        case 0x1b3e4cu: goto label_1b3e4c;
        case 0x1b3e50u: goto label_1b3e50;
        case 0x1b3e54u: goto label_1b3e54;
        case 0x1b3e58u: goto label_1b3e58;
        case 0x1b3e5cu: goto label_1b3e5c;
        case 0x1b3e60u: goto label_1b3e60;
        case 0x1b3e64u: goto label_1b3e64;
        case 0x1b3e68u: goto label_1b3e68;
        case 0x1b3e6cu: goto label_1b3e6c;
        case 0x1b3e70u: goto label_1b3e70;
        case 0x1b3e74u: goto label_1b3e74;
        case 0x1b3e78u: goto label_1b3e78;
        case 0x1b3e7cu: goto label_1b3e7c;
        case 0x1b3e80u: goto label_1b3e80;
        case 0x1b3e84u: goto label_1b3e84;
        case 0x1b3e88u: goto label_1b3e88;
        case 0x1b3e8cu: goto label_1b3e8c;
        case 0x1b3e90u: goto label_1b3e90;
        case 0x1b3e94u: goto label_1b3e94;
        case 0x1b3e98u: goto label_1b3e98;
        case 0x1b3e9cu: goto label_1b3e9c;
        case 0x1b3ea0u: goto label_1b3ea0;
        case 0x1b3ea4u: goto label_1b3ea4;
        case 0x1b3ea8u: goto label_1b3ea8;
        case 0x1b3eacu: goto label_1b3eac;
        case 0x1b3eb0u: goto label_1b3eb0;
        case 0x1b3eb4u: goto label_1b3eb4;
        case 0x1b3eb8u: goto label_1b3eb8;
        case 0x1b3ebcu: goto label_1b3ebc;
        case 0x1b3ec0u: goto label_1b3ec0;
        case 0x1b3ec4u: goto label_1b3ec4;
        case 0x1b3ec8u: goto label_1b3ec8;
        case 0x1b3eccu: goto label_1b3ecc;
        case 0x1b3ed0u: goto label_1b3ed0;
        case 0x1b3ed4u: goto label_1b3ed4;
        case 0x1b3ed8u: goto label_1b3ed8;
        case 0x1b3edcu: goto label_1b3edc;
        case 0x1b3ee0u: goto label_1b3ee0;
        case 0x1b3ee4u: goto label_1b3ee4;
        case 0x1b3ee8u: goto label_1b3ee8;
        case 0x1b3eecu: goto label_1b3eec;
        case 0x1b3ef0u: goto label_1b3ef0;
        case 0x1b3ef4u: goto label_1b3ef4;
        case 0x1b3ef8u: goto label_1b3ef8;
        case 0x1b3efcu: goto label_1b3efc;
        case 0x1b3f00u: goto label_1b3f00;
        case 0x1b3f04u: goto label_1b3f04;
        case 0x1b3f08u: goto label_1b3f08;
        case 0x1b3f0cu: goto label_1b3f0c;
        case 0x1b3f10u: goto label_1b3f10;
        case 0x1b3f14u: goto label_1b3f14;
        case 0x1b3f18u: goto label_1b3f18;
        case 0x1b3f1cu: goto label_1b3f1c;
        case 0x1b3f20u: goto label_1b3f20;
        case 0x1b3f24u: goto label_1b3f24;
        case 0x1b3f28u: goto label_1b3f28;
        case 0x1b3f2cu: goto label_1b3f2c;
        case 0x1b3f30u: goto label_1b3f30;
        case 0x1b3f34u: goto label_1b3f34;
        case 0x1b3f38u: goto label_1b3f38;
        case 0x1b3f3cu: goto label_1b3f3c;
        case 0x1b3f40u: goto label_1b3f40;
        case 0x1b3f44u: goto label_1b3f44;
        case 0x1b3f48u: goto label_1b3f48;
        case 0x1b3f4cu: goto label_1b3f4c;
        case 0x1b3f50u: goto label_1b3f50;
        case 0x1b3f54u: goto label_1b3f54;
        case 0x1b3f58u: goto label_1b3f58;
        case 0x1b3f5cu: goto label_1b3f5c;
        case 0x1b3f60u: goto label_1b3f60;
        case 0x1b3f64u: goto label_1b3f64;
        case 0x1b3f68u: goto label_1b3f68;
        case 0x1b3f6cu: goto label_1b3f6c;
        case 0x1b3f70u: goto label_1b3f70;
        case 0x1b3f74u: goto label_1b3f74;
        case 0x1b3f78u: goto label_1b3f78;
        case 0x1b3f7cu: goto label_1b3f7c;
        case 0x1b3f80u: goto label_1b3f80;
        case 0x1b3f84u: goto label_1b3f84;
        case 0x1b3f88u: goto label_1b3f88;
        case 0x1b3f8cu: goto label_1b3f8c;
        default: break;
    }

    ctx->pc = 0x1b3e40u;

label_1b3e40:
    // 0x1b3e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b3e44:
    // 0x1b3e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b3e48:
    // 0x1b3e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3e4c:
    // 0x1b3e4c: 0x80736d8  j           func_1CDB60
label_1b3e50:
    if (ctx->pc == 0x1B3E50u) {
        ctx->pc = 0x1B3E50u;
            // 0x1b3e50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B3E54u;
        goto label_1b3e54;
    }
    ctx->pc = 0x1B3E4Cu;
    ctx->pc = 0x1B3E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E4Cu;
            // 0x1b3e50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    if (runtime->hasFunction(0x1CDB60u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDB60_0x1cdb60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B3E54u;
label_1b3e54:
    // 0x1b3e54: 0x0  nop
    ctx->pc = 0x1b3e54u;
    // NOP
label_1b3e58:
    // 0x1b3e58: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b3e5c:
    // 0x1b3e5c: 0x3e00008  jr          $ra
label_1b3e60:
    if (ctx->pc == 0x1B3E60u) {
        ctx->pc = 0x1B3E60u;
            // 0x1b3e60: 0x8c623030  lw          $v0, 0x3030($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12336)));
        ctx->pc = 0x1B3E64u;
        goto label_1b3e64;
    }
    ctx->pc = 0x1B3E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E5Cu;
            // 0x1b3e60: 0x8c623030  lw          $v0, 0x3030($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3E64u;
label_1b3e64:
    // 0x1b3e64: 0x0  nop
    ctx->pc = 0x1b3e64u;
    // NOP
label_1b3e68:
    // 0x1b3e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b3e6c:
    // 0x1b3e6c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b3e70:
    // 0x1b3e70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b3e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b3e74:
    // 0x1b3e74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e78:
    // 0x1b3e78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b3e7c:
    // 0x1b3e7c: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1b3e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_1b3e80:
    // 0x1b3e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b3e84:
    // 0x1b3e84: 0x24422360  addiu       $v0, $v0, 0x2360
    ctx->pc = 0x1b3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9056));
label_1b3e88:
    // 0x1b3e88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b3e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b3e8c:
    // 0x1b3e8c: 0x2645310c  addiu       $a1, $s2, 0x310C
    ctx->pc = 0x1b3e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12556));
label_1b3e90:
    // 0x1b3e90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b3e94:
    // 0x1b3e94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b3e98:
    // 0x1b3e98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1b3e9c:
    // 0x1b3e9c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1b3e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b3ea0:
    // 0x1b3ea0: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
label_1b3ea4:
    if (ctx->pc == 0x1B3EA4u) {
        ctx->pc = 0x1B3EA4u;
            // 0x1b3ea4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1B3EA8u;
        goto label_1b3ea8;
    }
    ctx->pc = 0x1B3EA0u;
    {
        const bool branch_taken_0x1b3ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EA0u;
            // 0x1b3ea4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ea0) {
            ctx->pc = 0x1B3F58u;
            goto label_1b3f58;
        }
    }
    ctx->pc = 0x1B3EA8u;
label_1b3ea8:
    // 0x1b3ea8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b3eac:
    // 0x1b3eac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b3eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b3eb0:
    // 0x1b3eb0: 0x8c432ff4  lw          $v1, 0x2FF4($v0)
    ctx->pc = 0x1b3eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12276)));
label_1b3eb4:
    // 0x1b3eb4: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x1b3eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_1b3eb8:
    // 0x1b3eb8: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
label_1b3ebc:
    if (ctx->pc == 0x1B3EBCu) {
        ctx->pc = 0x1B3EBCu;
            // 0x1b3ebc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1B3EC0u;
        goto label_1b3ec0;
    }
    ctx->pc = 0x1B3EB8u;
    {
        const bool branch_taken_0x1b3eb8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B3EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EB8u;
            // 0x1b3ebc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3eb8) {
            ctx->pc = 0x1B3F44u;
            goto label_1b3f44;
        }
    }
    ctx->pc = 0x1B3EC0u;
label_1b3ec0:
    // 0x1b3ec0: 0x24423038  addiu       $v0, $v0, 0x3038
    ctx->pc = 0x1b3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12344));
label_1b3ec4:
    // 0x1b3ec4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b3ec8:
    // 0x1b3ec8: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_1b3ecc:
    if (ctx->pc == 0x1B3ECCu) {
        ctx->pc = 0x1B3ECCu;
            // 0x1b3ecc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1B3ED0u;
        goto label_1b3ed0;
    }
    ctx->pc = 0x1B3EC8u;
    {
        const bool branch_taken_0x1b3ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B3ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EC8u;
            // 0x1b3ecc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ec8) {
            ctx->pc = 0x1B3EDCu;
            goto label_1b3edc;
        }
    }
    ctx->pc = 0x1B3ED0u;
label_1b3ed0:
    // 0x1b3ed0: 0x24423090  addiu       $v0, $v0, 0x3090
    ctx->pc = 0x1b3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12432));
label_1b3ed4:
    // 0x1b3ed4: 0xc06cc38  jal         func_1B30E0
label_1b3ed8:
    if (ctx->pc == 0x1B3ED8u) {
        ctx->pc = 0x1B3ED8u;
            // 0x1b3ed8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1B3EDCu;
        goto label_1b3edc;
    }
    ctx->pc = 0x1B3ED4u;
    SET_GPR_U32(ctx, 31, 0x1B3EDCu);
    ctx->pc = 0x1B3ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3ED4u;
            // 0x1b3ed8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B30E0u;
    if (runtime->hasFunction(0x1B30E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B30E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EDCu; }
        if (ctx->pc != 0x1B3EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B30E0_0x1b30e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EDCu; }
        if (ctx->pc != 0x1B3EDCu) { return; }
    }
    ctx->pc = 0x1B3EDCu;
label_1b3edc:
    // 0x1b3edc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b3ee0:
    // 0x1b3ee0: 0x24423040  addiu       $v0, $v0, 0x3040
    ctx->pc = 0x1b3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12352));
label_1b3ee4:
    // 0x1b3ee4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b3ee8:
    // 0x1b3ee8: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_1b3eec:
    if (ctx->pc == 0x1B3EECu) {
        ctx->pc = 0x1B3EECu;
            // 0x1b3eec: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1B3EF0u;
        goto label_1b3ef0;
    }
    ctx->pc = 0x1B3EE8u;
    {
        const bool branch_taken_0x1b3ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B3EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EE8u;
            // 0x1b3eec: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ee8) {
            ctx->pc = 0x1B3EFCu;
            goto label_1b3efc;
        }
    }
    ctx->pc = 0x1B3EF0u;
label_1b3ef0:
    // 0x1b3ef0: 0x24423094  addiu       $v0, $v0, 0x3094
    ctx->pc = 0x1b3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12436));
label_1b3ef4:
    // 0x1b3ef4: 0xc06cc38  jal         func_1B30E0
label_1b3ef8:
    if (ctx->pc == 0x1B3EF8u) {
        ctx->pc = 0x1B3EF8u;
            // 0x1b3ef8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1B3EFCu;
        goto label_1b3efc;
    }
    ctx->pc = 0x1B3EF4u;
    SET_GPR_U32(ctx, 31, 0x1B3EFCu);
    ctx->pc = 0x1B3EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EF4u;
            // 0x1b3ef8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B30E0u;
    if (runtime->hasFunction(0x1B30E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B30E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EFCu; }
        if (ctx->pc != 0x1B3EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B30E0_0x1b30e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EFCu; }
        if (ctx->pc != 0x1B3EFCu) { return; }
    }
    ctx->pc = 0x1B3EFCu;
label_1b3efc:
    // 0x1b3efc: 0xc06cd8e  jal         func_1B3638
label_1b3f00:
    if (ctx->pc == 0x1B3F00u) {
        ctx->pc = 0x1B3F04u;
        goto label_1b3f04;
    }
    ctx->pc = 0x1B3EFCu;
    SET_GPR_U32(ctx, 31, 0x1B3F04u);
    ctx->pc = 0x1B3638u;
    if (runtime->hasFunction(0x1B3638u)) {
        auto targetFn = runtime->lookupFunction(0x1B3638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F04u; }
        if (ctx->pc != 0x1B3F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiGetSchedulerModeFlag_0x1b3638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F04u; }
        if (ctx->pc != 0x1B3F04u) { return; }
    }
    ctx->pc = 0x1B3F04u;
label_1b3f04:
    // 0x1b3f04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b3f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3f08:
    // 0x1b3f08: 0x1490000a  bne         $a0, $s0, . + 4 + (0xA << 2)
label_1b3f0c:
    if (ctx->pc == 0x1B3F0Cu) {
        ctx->pc = 0x1B3F0Cu;
            // 0x1b3f0c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1B3F10u;
        goto label_1b3f10;
    }
    ctx->pc = 0x1B3F08u;
    {
        const bool branch_taken_0x1b3f08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x1B3F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F08u;
            // 0x1b3f0c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f08) {
            ctx->pc = 0x1B3F34u;
            goto label_1b3f34;
        }
    }
    ctx->pc = 0x1B3F10u;
label_1b3f10:
    // 0x1b3f10: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b3f14:
    // 0x1b3f14: 0x2442303c  addiu       $v0, $v0, 0x303C
    ctx->pc = 0x1b3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12348));
label_1b3f18:
    // 0x1b3f18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b3f1c:
    // 0x1b3f1c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_1b3f20:
    if (ctx->pc == 0x1B3F20u) {
        ctx->pc = 0x1B3F20u;
            // 0x1b3f20: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1B3F24u;
        goto label_1b3f24;
    }
    ctx->pc = 0x1B3F1Cu;
    {
        const bool branch_taken_0x1b3f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B3F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F1Cu;
            // 0x1b3f20: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f1c) {
            ctx->pc = 0x1B3F30u;
            goto label_1b3f30;
        }
    }
    ctx->pc = 0x1B3F24u;
label_1b3f24:
    // 0x1b3f24: 0x2442308c  addiu       $v0, $v0, 0x308C
    ctx->pc = 0x1b3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12428));
label_1b3f28:
    // 0x1b3f28: 0xc06cc38  jal         func_1B30E0
label_1b3f2c:
    if (ctx->pc == 0x1B3F2Cu) {
        ctx->pc = 0x1B3F2Cu;
            // 0x1b3f2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1B3F30u;
        goto label_1b3f30;
    }
    ctx->pc = 0x1B3F28u;
    SET_GPR_U32(ctx, 31, 0x1B3F30u);
    ctx->pc = 0x1B3F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F28u;
            // 0x1b3f2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B30E0u;
    if (runtime->hasFunction(0x1B30E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B30E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F30u; }
        if (ctx->pc != 0x1B3F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B30E0_0x1b30e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F30u; }
        if (ctx->pc != 0x1B3F30u) { return; }
    }
    ctx->pc = 0x1B3F30u;
label_1b3f30:
    // 0x1b3f30: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b3f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b3f34:
    // 0x1b3f34: 0x24633080  addiu       $v1, $v1, 0x3080
    ctx->pc = 0x1b3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12416));
label_1b3f38:
    // 0x1b3f38: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1b3f38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1b3f3c:
    // 0x1b3f3c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1b3f3cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_1b3f40:
    // 0x1b3f40: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1b3f40u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1b3f44:
    // 0x1b3f44: 0xc06c9ee  jal         func_1B27B8
label_1b3f48:
    if (ctx->pc == 0x1B3F48u) {
        ctx->pc = 0x1B3F4Cu;
        goto label_1b3f4c;
    }
    ctx->pc = 0x1B3F44u;
    SET_GPR_U32(ctx, 31, 0x1B3F4Cu);
    ctx->pc = 0x1B27B8u;
    if (runtime->hasFunction(0x1B27B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B27B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F4Cu; }
        if (ctx->pc != 0x1B3F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B27B8_0x1b27b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F4Cu; }
        if (ctx->pc != 0x1B3F4Cu) { return; }
    }
    ctx->pc = 0x1B3F4Cu;
label_1b3f4c:
    // 0x1b3f4c: 0x2643310c  addiu       $v1, $s2, 0x310C
    ctx->pc = 0x1b3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12556));
label_1b3f50:
    // 0x1b3f50: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b3f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1b3f54:
    // 0x1b3f54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b3f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b3f58:
    // 0x1b3f58: 0x8c423110  lw          $v0, 0x3110($v0)
    ctx->pc = 0x1b3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12560)));
label_1b3f5c:
    // 0x1b3f5c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1b3f60:
    if (ctx->pc == 0x1B3F60u) {
        ctx->pc = 0x1B3F60u;
            // 0x1b3f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F64u;
        goto label_1b3f64;
    }
    ctx->pc = 0x1B3F5Cu;
    {
        const bool branch_taken_0x1b3f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f5c) {
            ctx->pc = 0x1B3F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F5Cu;
            // 0x1b3f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3F78u;
            goto label_1b3f78;
        }
    }
    ctx->pc = 0x1B3F64u;
label_1b3f64:
    // 0x1b3f64: 0x40f809  jalr        $v0
label_1b3f68:
    if (ctx->pc == 0x1B3F68u) {
        ctx->pc = 0x1B3F68u;
            // 0x1b3f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F6Cu;
        goto label_1b3f6c;
    }
    ctx->pc = 0x1B3F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3F6Cu);
        ctx->pc = 0x1B3F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F64u;
            // 0x1b3f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3F6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F6Cu; }
            if (ctx->pc != 0x1B3F6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B3F6Cu;
label_1b3f6c:
    // 0x1b3f6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b3f70:
    if (ctx->pc == 0x1B3F70u) {
        ctx->pc = 0x1B3F70u;
            // 0x1b3f70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1B3F74u;
        goto label_1b3f74;
    }
    ctx->pc = 0x1B3F6Cu;
    {
        const bool branch_taken_0x1b3f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F6Cu;
            // 0x1b3f70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f6c) {
            ctx->pc = 0x1B3F7Cu;
            goto label_1b3f7c;
        }
    }
    ctx->pc = 0x1B3F74u;
label_1b3f74:
    // 0x1b3f74: 0x0  nop
    ctx->pc = 0x1b3f74u;
    // NOP
label_1b3f78:
    // 0x1b3f78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3f7c:
    // 0x1b3f7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b3f80:
    // 0x1b3f80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3f80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b3f84:
    // 0x1b3f84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b3f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b3f88:
    // 0x1b3f88: 0x3e00008  jr          $ra
label_1b3f8c:
    if (ctx->pc == 0x1B3F8Cu) {
        ctx->pc = 0x1B3F8Cu;
            // 0x1b3f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B3F90u;
        goto label_fallthrough_0x1b3f88;
    }
    ctx->pc = 0x1B3F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F88u;
            // 0x1b3f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b3f88:
    ctx->pc = 0x1B3F90u;
    ctx->pc = 0x1b3f90u;
}
