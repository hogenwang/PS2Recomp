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

// Function: sub_0028EC18
// Address: 0x28ec18 - 0x28ed60
void sub_0028EC18_0x28ec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EC18_0x28ec18");
#endif

    switch (ctx->pc) {
        case 0x28ec18u: goto label_28ec18;
        case 0x28ec1cu: goto label_28ec1c;
        case 0x28ec20u: goto label_28ec20;
        case 0x28ec24u: goto label_28ec24;
        case 0x28ec28u: goto label_28ec28;
        case 0x28ec2cu: goto label_28ec2c;
        case 0x28ec30u: goto label_28ec30;
        case 0x28ec34u: goto label_28ec34;
        case 0x28ec38u: goto label_28ec38;
        case 0x28ec3cu: goto label_28ec3c;
        case 0x28ec40u: goto label_28ec40;
        case 0x28ec44u: goto label_28ec44;
        case 0x28ec48u: goto label_28ec48;
        case 0x28ec4cu: goto label_28ec4c;
        case 0x28ec50u: goto label_28ec50;
        case 0x28ec54u: goto label_28ec54;
        case 0x28ec58u: goto label_28ec58;
        case 0x28ec5cu: goto label_28ec5c;
        case 0x28ec60u: goto label_28ec60;
        case 0x28ec64u: goto label_28ec64;
        case 0x28ec68u: goto label_28ec68;
        case 0x28ec6cu: goto label_28ec6c;
        case 0x28ec70u: goto label_28ec70;
        case 0x28ec74u: goto label_28ec74;
        case 0x28ec78u: goto label_28ec78;
        case 0x28ec7cu: goto label_28ec7c;
        case 0x28ec80u: goto label_28ec80;
        case 0x28ec84u: goto label_28ec84;
        case 0x28ec88u: goto label_28ec88;
        case 0x28ec8cu: goto label_28ec8c;
        case 0x28ec90u: goto label_28ec90;
        case 0x28ec94u: goto label_28ec94;
        case 0x28ec98u: goto label_28ec98;
        case 0x28ec9cu: goto label_28ec9c;
        case 0x28eca0u: goto label_28eca0;
        case 0x28eca4u: goto label_28eca4;
        case 0x28eca8u: goto label_28eca8;
        case 0x28ecacu: goto label_28ecac;
        case 0x28ecb0u: goto label_28ecb0;
        case 0x28ecb4u: goto label_28ecb4;
        case 0x28ecb8u: goto label_28ecb8;
        case 0x28ecbcu: goto label_28ecbc;
        case 0x28ecc0u: goto label_28ecc0;
        case 0x28ecc4u: goto label_28ecc4;
        case 0x28ecc8u: goto label_28ecc8;
        case 0x28ecccu: goto label_28eccc;
        case 0x28ecd0u: goto label_28ecd0;
        case 0x28ecd4u: goto label_28ecd4;
        case 0x28ecd8u: goto label_28ecd8;
        case 0x28ecdcu: goto label_28ecdc;
        case 0x28ece0u: goto label_28ece0;
        case 0x28ece4u: goto label_28ece4;
        case 0x28ece8u: goto label_28ece8;
        case 0x28ececu: goto label_28ecec;
        case 0x28ecf0u: goto label_28ecf0;
        case 0x28ecf4u: goto label_28ecf4;
        case 0x28ecf8u: goto label_28ecf8;
        case 0x28ecfcu: goto label_28ecfc;
        case 0x28ed00u: goto label_28ed00;
        case 0x28ed04u: goto label_28ed04;
        case 0x28ed08u: goto label_28ed08;
        case 0x28ed0cu: goto label_28ed0c;
        case 0x28ed10u: goto label_28ed10;
        case 0x28ed14u: goto label_28ed14;
        case 0x28ed18u: goto label_28ed18;
        case 0x28ed1cu: goto label_28ed1c;
        case 0x28ed20u: goto label_28ed20;
        case 0x28ed24u: goto label_28ed24;
        case 0x28ed28u: goto label_28ed28;
        case 0x28ed2cu: goto label_28ed2c;
        case 0x28ed30u: goto label_28ed30;
        case 0x28ed34u: goto label_28ed34;
        case 0x28ed38u: goto label_28ed38;
        case 0x28ed3cu: goto label_28ed3c;
        case 0x28ed40u: goto label_28ed40;
        case 0x28ed44u: goto label_28ed44;
        case 0x28ed48u: goto label_28ed48;
        case 0x28ed4cu: goto label_28ed4c;
        case 0x28ed50u: goto label_28ed50;
        case 0x28ed54u: goto label_28ed54;
        case 0x28ed58u: goto label_28ed58;
        case 0x28ed5cu: goto label_28ed5c;
        default: break;
    }

    ctx->pc = 0x28ec18u;

label_28ec18:
    // 0x28ec18: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28ec18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_28ec1c:
    // 0x28ec1c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28ec20:
    // 0x28ec20: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x28ec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_28ec24:
    // 0x28ec24: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x28ec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_28ec28:
    // 0x28ec28: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x28ec28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_28ec2c:
    // 0x28ec2c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x28ec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_28ec30:
    // 0x28ec30: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x28ec30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_28ec34:
    // 0x28ec34: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x28ec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_28ec38:
    // 0x28ec38: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x28ec38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28ec3c:
    // 0x28ec3c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x28ec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_28ec40:
    // 0x28ec40: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28ec40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28ec44:
    // 0x28ec44: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x28ec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_28ec48:
    // 0x28ec48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28ec48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28ec4c:
    // 0x28ec4c: 0x8c424624  lw          $v0, 0x4624($v0)
    ctx->pc = 0x28ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17956)));
label_28ec50:
    // 0x28ec50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28ec50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28ec54:
    // 0x28ec54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28ec58:
    if (ctx->pc == 0x28EC58u) {
        ctx->pc = 0x28EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC54u;
        // 0x28ec58: 0xffbf00a0  sd          $ra, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC5Cu;
        goto label_28ec5c;
    }
    ctx->pc = 0x28EC54u;
    {
        const bool branch_taken_0x28ec54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC54u;
        // 0x28ec58: 0xffbf00a0  sd          $ra, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec54) {
            ctx->pc = 0x28EC7Cu;
            goto label_28ec7c;
        }
    }
    ctx->pc = 0x28EC5Cu;
label_28ec5c:
    // 0x28ec5c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28ec60:
    // 0x28ec60: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x28ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_28ec64:
    // 0x28ec64: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28ec64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28ec68:
    // 0x28ec68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ec68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ec6c:
    // 0x28ec6c: 0xc0a5648  jal         func_295920
label_28ec70:
    if (ctx->pc == 0x28EC70u) {
        ctx->pc = 0x28EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC6Cu;
        // 0x28ec70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC74u;
        goto label_28ec74;
    }
    ctx->pc = 0x28EC6Cu;
    SET_GPR_U32(ctx, 31, 0x28EC74u);
    ctx->pc = 0x28EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC6Cu;
    // 0x28ec70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28EC6Cu, 0x28EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC74u;
label_28ec74:
    // 0x28ec74: 0x1000001b  b           . + 4 + (0x1B << 2)
label_28ec78:
    if (ctx->pc == 0x28EC78u) {
        ctx->pc = 0x28EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC74u;
        // 0x28ec78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC7Cu;
        goto label_28ec7c;
    }
    ctx->pc = 0x28EC74u;
    {
        const bool branch_taken_0x28ec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC74u;
        // 0x28ec78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec74) {
            ctx->pc = 0x28ECE4u;
            goto label_28ece4;
        }
    }
    ctx->pc = 0x28EC7Cu;
label_28ec7c:
    // 0x28ec7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28ec7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28ec80:
    // 0x28ec80: 0x40f809  jalr        $v0
label_28ec84:
    if (ctx->pc == 0x28EC84u) {
        ctx->pc = 0x28EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC80u;
        // 0x28ec84: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC88u;
        goto label_28ec88;
    }
    ctx->pc = 0x28EC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EC88u);
        ctx->pc = 0x28EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC80u;
        // 0x28ec84: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EC80u, 0x28EC88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28EC88u;
label_28ec88:
    // 0x28ec88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28ec88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ec8c:
    // 0x28ec8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ec90:
    // 0x28ec90: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_28ec94:
    if (ctx->pc == 0x28EC94u) {
        ctx->pc = 0x28EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC90u;
        // 0x28ec94: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC98u;
        goto label_28ec98;
    }
    ctx->pc = 0x28EC90u;
    {
        const bool branch_taken_0x28ec90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC90u;
        // 0x28ec94: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec90) {
            ctx->pc = 0x28ECE4u;
            goto label_28ece4;
        }
    }
    ctx->pc = 0x28EC98u;
label_28ec98:
    // 0x28ec98: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_28ec9c:
    if (ctx->pc == 0x28EC9Cu) {
        ctx->pc = 0x28EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC98u;
        // 0x28ec9c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ECA0u;
        goto label_28eca0;
    }
    ctx->pc = 0x28EC98u;
    {
        const bool branch_taken_0x28ec98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC98u;
        // 0x28ec9c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec98) {
            ctx->pc = 0x28ECA4u;
            goto label_28eca4;
        }
    }
    ctx->pc = 0x28ECA0u;
label_28eca0:
    // 0x28eca0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28eca4:
    // 0x28eca4: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_28eca8:
    if (ctx->pc == 0x28ECA8u) {
        ctx->pc = 0x28ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECA4u;
        // 0x28eca8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ECACu;
        goto label_28ecac;
    }
    ctx->pc = 0x28ECA4u;
    {
        const bool branch_taken_0x28eca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECA4u;
        // 0x28eca8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eca4) {
            ctx->pc = 0x28ECB0u;
            goto label_28ecb0;
        }
    }
    ctx->pc = 0x28ECACu;
label_28ecac:
    // 0x28ecac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_28ecb0:
    // 0x28ecb0: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_28ecb4:
    if (ctx->pc == 0x28ECB4u) {
        ctx->pc = 0x28ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECB0u;
        // 0x28ecb4: 0xdfa20008  ld          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ECB8u;
        goto label_28ecb8;
    }
    ctx->pc = 0x28ECB0u;
    {
        const bool branch_taken_0x28ecb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECB0u;
        // 0x28ecb4: 0xdfa20008  ld          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecb0) {
            ctx->pc = 0x28ECBCu;
            goto label_28ecbc;
        }
    }
    ctx->pc = 0x28ECB8u;
label_28ecb8:
    // 0x28ecb8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x28ecb8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_28ecbc:
    // 0x28ecbc: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_28ecc0:
    if (ctx->pc == 0x28ECC0u) {
        ctx->pc = 0x28ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECBCu;
        // 0x28ecc0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ECC4u;
        goto label_28ecc4;
    }
    ctx->pc = 0x28ECBCu;
    {
        const bool branch_taken_0x28ecbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECBCu;
        // 0x28ecc0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecbc) {
            ctx->pc = 0x28ECC8u;
            goto label_28ecc8;
        }
    }
    ctx->pc = 0x28ECC4u;
label_28ecc4:
    // 0x28ecc4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x28ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_28ecc8:
    // 0x28ecc8: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_28eccc:
    if (ctx->pc == 0x28ECCCu) {
        ctx->pc = 0x28ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECC8u;
        // 0x28eccc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ECD0u;
        goto label_28ecd0;
    }
    ctx->pc = 0x28ECC8u;
    {
        const bool branch_taken_0x28ecc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECC8u;
        // 0x28eccc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecc8) {
            ctx->pc = 0x28ECD4u;
            goto label_28ecd4;
        }
    }
    ctx->pc = 0x28ECD0u;
label_28ecd0:
    // 0x28ecd0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x28ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_28ecd4:
    // 0x28ecd4: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_28ecd8:
    if (ctx->pc == 0x28ECD8u) {
        ctx->pc = 0x28ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECD4u;
        // 0x28ecd8: 0xdfa20028  ld          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ECDCu;
        goto label_28ecdc;
    }
    ctx->pc = 0x28ECD4u;
    {
        const bool branch_taken_0x28ecd4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECD4u;
        // 0x28ecd8: 0xdfa20028  ld          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecd4) {
            ctx->pc = 0x28ECE0u;
            goto label_28ece0;
        }
    }
    ctx->pc = 0x28ECDCu;
label_28ecdc:
    // 0x28ecdc: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x28ecdcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_28ece0:
    // 0x28ece0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28ece0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28ece4:
    // 0x28ece4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x28ece4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_28ece8:
    // 0x28ece8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x28ece8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28ecec:
    // 0x28ecec: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x28ececu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28ecf0:
    // 0x28ecf0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x28ecf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28ecf4:
    // 0x28ecf4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x28ecf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28ecf8:
    // 0x28ecf8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x28ecf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28ecfc:
    // 0x28ecfc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x28ecfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28ed00:
    // 0x28ed00: 0x3e00008  jr          $ra
label_28ed04:
    if (ctx->pc == 0x28ED04u) {
        ctx->pc = 0x28ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED00u;
        // 0x28ed04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED08u;
        goto label_28ed08;
    }
    ctx->pc = 0x28ED00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED00u;
        // 0x28ed04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ED00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ED08u;
label_28ed08:
    // 0x28ed08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ed08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28ed0c:
    // 0x28ed0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28ed0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ed10:
    // 0x28ed10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28ed14:
    // 0x28ed14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28ed14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ed18:
    // 0x28ed18: 0xc0a3b06  jal         func_28EC18
label_28ed1c:
    if (ctx->pc == 0x28ED1Cu) {
        ctx->pc = 0x28ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED18u;
        // 0x28ed1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED20u;
        goto label_28ed20;
    }
    ctx->pc = 0x28ED18u;
    SET_GPR_U32(ctx, 31, 0x28ED20u);
    ctx->pc = 0x28ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED18u;
    // 0x28ed1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EC18u;
    goto label_28ec18;
    ctx->pc = 0x28ED20u;
label_28ed20:
    // 0x28ed20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ed20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ed24:
    // 0x28ed24: 0x3e00008  jr          $ra
label_28ed28:
    if (ctx->pc == 0x28ED28u) {
        ctx->pc = 0x28ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED24u;
        // 0x28ed28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED2Cu;
        goto label_28ed2c;
    }
    ctx->pc = 0x28ED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED24u;
        // 0x28ed28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ED2Cu;
label_28ed2c:
    // 0x28ed2c: 0x0  nop
    ctx->pc = 0x28ed2cu;
    // NOP
label_28ed30:
    // 0x28ed30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28ed34:
    // 0x28ed34: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x28ed34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28ed38:
    // 0x28ed38: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x28ed38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28ed3c:
    // 0x28ed3c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x28ed3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28ed40:
    // 0x28ed40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ed40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28ed44:
    // 0x28ed44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ed44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ed48:
    // 0x28ed48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ed48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ed4c:
    // 0x28ed4c: 0xc0a3b06  jal         func_28EC18
label_28ed50:
    if (ctx->pc == 0x28ED50u) {
        ctx->pc = 0x28ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED4Cu;
        // 0x28ed50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED54u;
        goto label_28ed54;
    }
    ctx->pc = 0x28ED4Cu;
    SET_GPR_U32(ctx, 31, 0x28ED54u);
    ctx->pc = 0x28ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED4Cu;
    // 0x28ed50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EC18u;
    goto label_28ec18;
    ctx->pc = 0x28ED54u;
label_28ed54:
    // 0x28ed54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ed54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ed58:
    // 0x28ed58: 0x3e00008  jr          $ra
label_28ed5c:
    if (ctx->pc == 0x28ED5Cu) {
        ctx->pc = 0x28ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED58u;
        // 0x28ed5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED60u;
        goto label_fallthrough_0x28ed58;
    }
    ctx->pc = 0x28ED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED58u;
        // 0x28ed5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ED58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28ed58:
    ctx->pc = 0x28ED60u;
}
