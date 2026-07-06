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

// Function: sub_0011FE08
// Address: 0x11fe08 - 0x120208
void sub_0011FE08_0x11fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FE08_0x11fe08");
#endif

    switch (ctx->pc) {
        case 0x11fe48u: goto label_11fe48;
        case 0x11fe64u: goto label_11fe64;
        case 0x11fe88u: goto label_11fe88;
        case 0x11fe98u: goto label_11fe98;
        case 0x11fec4u: goto label_11fec4;
        case 0x11fedcu: goto label_11fedc;
        case 0x11ff70u: goto label_11ff70;
        case 0x11ff94u: goto label_11ff94;
        case 0x11ffacu: goto label_11ffac;
        case 0x11ffc4u: goto label_11ffc4;
        case 0x120048u: goto label_120048;
        case 0x120090u: goto label_120090;
        case 0x1200c0u: goto label_1200c0;
        case 0x1200e0u: goto label_1200e0;
        case 0x120158u: goto label_120158;
        case 0x120190u: goto label_120190;
        case 0x1201c0u: goto label_1201c0;
        case 0x1201e0u: goto label_1201e0;
        default: break;
    }

    ctx->pc = 0x11fe08u;

label_11fe08:
    // 0x11fe08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11fe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11fe0c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11fe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11fe10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11fe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11fe14: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x11fe14u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x11fe18: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11fe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11fe1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fe20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11fe20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11fe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11fe28: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11fe28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fe2c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11fe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11fe30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11fe34: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x11fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x11fe38: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11fe38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11fe3c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11FE3Cu;
    {
        const bool branch_taken_0x11fe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE3Cu;
        // 0x11fe40: 0x26b40500  addiu       $s4, $s5, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe3c) {
            ctx->pc = 0x11FE78u;
            goto label_11fe78;
        }
    }
    ctx->pc = 0x11FE44u;
    // 0x11fe44: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x11fe44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
label_11fe48:
    // 0x11fe48: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x11fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x11fe4c: 0x2625f504  addiu       $a1, $s1, -0xAFC
    ctx->pc = 0x11fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964484));
    // 0x11fe50: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x11fe50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x11fe54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe58: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x11fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11fe5c: 0xc049c48  jal         func_127120
    ctx->pc = 0x11FE5Cu;
    SET_GPR_U32(ctx, 31, 0x11FE64u);
    ctx->pc = 0x11FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE5Cu;
    // 0x11fe60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x11FE5Cu, 0x11FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE64u;
label_11fe64:
    // 0x11fe64: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x11fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x11fe68: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x11fe6c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11fe6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11fe70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x11FE70u;
    {
        const bool branch_taken_0x11fe70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE70u;
        // 0x11fe74: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe70) {
            ctx->pc = 0x11FE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11fe48;
        }
    }
    ctx->pc = 0x11FE78u;
label_11fe78:
    // 0x11fe78: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x11fe78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x11fe7c: 0x1a400023  blez        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x11FE7Cu;
    {
        const bool branch_taken_0x11fe7c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE7Cu;
        // 0x11fe80: 0x26b40500  addiu       $s4, $s5, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe7c) {
            ctx->pc = 0x11FF0Cu;
            goto label_11ff0c;
        }
    }
    ctx->pc = 0x11FE84u;
    // 0x11fe84: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x11fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_11fe88:
    // 0x11fe88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11fe8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe90: 0xc047f60  jal         func_11FD80
    ctx->pc = 0x11FE90u;
    SET_GPR_U32(ctx, 31, 0x11FE98u);
    ctx->pc = 0x11FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE90u;
    // 0x11fe94: 0x2843021  addu        $a2, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x11FE90u, 0x11FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE98u;
label_11fe98:
    // 0x11fe98: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11FE98u;
    {
        const bool branch_taken_0x11fe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE98u;
        // 0x11fe9c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe98) {
            ctx->pc = 0x11FF14u;
            goto label_11ff14;
        }
    }
    ctx->pc = 0x11FEA0u;
    // 0x11fea0: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x11fea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x11fea4: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x11fea4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x11fea8: 0x8e241500  lw          $a0, 0x1500($s1)
    ctx->pc = 0x11fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5376)));
    // 0x11feac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11feacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11feb0: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x11feb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11feb4: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x11feb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x11feb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11feb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11febc: 0xc049c48  jal         func_127120
    ctx->pc = 0x11FEBCu;
    SET_GPR_U32(ctx, 31, 0x11FEC4u);
    ctx->pc = 0x11FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FEBCu;
    // 0x11fec0: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x11FEBCu, 0x11FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FEC4u;
label_11fec4:
    // 0x11fec4: 0x8e231500  lw          $v1, 0x1500($s1)
    ctx->pc = 0x11fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5376)));
    // 0x11fec8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x11fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x11fecc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11feccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fed0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11fed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fed4: 0xc049c48  jal         func_127120
    ctx->pc = 0x11FED4u;
    SET_GPR_U32(ctx, 31, 0x11FEDCu);
    ctx->pc = 0x11FED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FED4u;
    // 0x11fed8: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x11FED4u, 0x11FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FEDCu;
label_11fedc:
    // 0x11fedc: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x11fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x11fee0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fee4: 0x8e241500  lw          $a0, 0x1500($s1)
    ctx->pc = 0x11fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5376)));
    // 0x11fee8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x11fee8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11feec: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x11feecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x11fef0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x11fef0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x11fef4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x11fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x11fef8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x11fef8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x11fefc: 0xae241500  sw          $a0, 0x1500($s1)
    ctx->pc = 0x11fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5376), GPR_U32(ctx, 4));
    // 0x11ff00: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x11ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11ff04: 0x1e40ffe0  bgtz        $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x11FF04u;
    {
        const bool branch_taken_0x11ff04 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x11FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF04u;
        // 0x11ff08: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff04) {
            ctx->pc = 0x11FE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11fe88;
        }
    }
    ctx->pc = 0x11FF0Cu;
label_11ff0c:
    // 0x11ff0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11ff0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11ff10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_11ff14:
    // 0x11ff14: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11ff14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ff18: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11ff18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ff1c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11ff1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ff20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11ff20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ff24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11ff24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ff28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ff28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ff2c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF2Cu;
        // 0x11ff30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FF34u;
    // 0x11ff34: 0x0  nop
    ctx->pc = 0x11ff34u;
    // NOP
    // 0x11ff38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ff38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11ff3c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11ff40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11ff40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11ff44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11ff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ff48: 0x2452f500  addiu       $s2, $v0, -0xB00
    ctx->pc = 0x11ff48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964480));
    // 0x11ff4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ff4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ff50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11ff50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ff54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff58: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11ff5c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11ff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11ff60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff64: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x11ff64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x11ff68: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11FF68u;
    SET_GPR_U32(ctx, 31, 0x11FF70u);
    ctx->pc = 0x11FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF68u;
    // 0x11ff6c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11FF68u, 0x11FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF70u;
label_11ff70:
    // 0x11ff70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ff74: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FF74u;
    {
        const bool branch_taken_0x11ff74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF74u;
        // 0x11ff78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff74) {
            ctx->pc = 0x11FF8Cu;
            goto label_11ff8c;
        }
    }
    ctx->pc = 0x11FF7Cu;
    // 0x11ff7c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11FF7Cu;
    {
        const bool branch_taken_0x11ff7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF7Cu;
        // 0x11ff80: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff7c) {
            ctx->pc = 0x11FF9Cu;
            goto label_11ff9c;
        }
    }
    ctx->pc = 0x11FF84u;
    // 0x11ff84: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11FF84u;
    {
        const bool branch_taken_0x11ff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF84u;
        // 0x11ff88: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff84) {
            ctx->pc = 0x11FFD8u;
            goto label_11ffd8;
        }
    }
    ctx->pc = 0x11FF8Cu;
label_11ff8c:
    // 0x11ff8c: 0xc047f82  jal         func_11FE08
    ctx->pc = 0x11FF8Cu;
    SET_GPR_U32(ctx, 31, 0x11FF94u);
    ctx->pc = 0x11FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF8Cu;
    // 0x11ff90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE08u;
    goto label_11fe08;
    ctx->pc = 0x11FF94u;
label_11ff94:
    // 0x11ff94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11FF94u;
    {
        const bool branch_taken_0x11ff94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF94u;
        // 0x11ff98: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff94) {
            ctx->pc = 0x11FFD4u;
            goto label_11ffd4;
        }
    }
    ctx->pc = 0x11FF9Cu;
label_11ff9c:
    // 0x11ff9c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x11ff9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11ffa0: 0x8e041500  lw          $a0, 0x1500($s0)
    ctx->pc = 0x11ffa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5376)));
    // 0x11ffa4: 0xc049c48  jal         func_127120
    ctx->pc = 0x11FFA4u;
    SET_GPR_U32(ctx, 31, 0x11FFACu);
    ctx->pc = 0x11FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFA4u;
    // 0x11ffa8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x11FFA4u, 0x11FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFACu;
label_11ffac:
    // 0x11ffac: 0x8e031500  lw          $v1, 0x1500($s0)
    ctx->pc = 0x11ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5376)));
    // 0x11ffb0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x11ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x11ffb4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x11ffb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11ffb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11ffb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffbc: 0xc049c48  jal         func_127120
    ctx->pc = 0x11FFBCu;
    SET_GPR_U32(ctx, 31, 0x11FFC4u);
    ctx->pc = 0x11FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFBCu;
    // 0x11ffc0: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x11FFBCu, 0x11FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFC4u;
label_11ffc4:
    // 0x11ffc4: 0x8e031500  lw          $v1, 0x1500($s0)
    ctx->pc = 0x11ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5376)));
    // 0x11ffc8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x11ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11ffcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ffd0: 0xae031500  sw          $v1, 0x1500($s0)
    ctx->pc = 0x11ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5376), GPR_U32(ctx, 3));
label_11ffd4:
    // 0x11ffd4: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x11ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_11ffd8:
    // 0x11ffd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11ffd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffdc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11ffdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ffe0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11ffe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ffe4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11ffe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ffe8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11ffe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ffec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ffecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fff0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFF0u;
        // 0x11fff4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FFF8u;
    // 0x11fff8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11fff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11fffc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x120000: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x120000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x120004: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x120004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x120008: 0x2454de00  addiu       $s4, $v0, -0x2200
    ctx->pc = 0x120008u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x12000c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x12000cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x120010: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x120010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120014: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x120014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x120018: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x120018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12001c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x120020: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x120020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x120024: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x120024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x120028: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x120028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x12002c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12002Cu;
    {
        const bool branch_taken_0x12002c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12002Cu;
        // 0x120030: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12002c) {
            ctx->pc = 0x12003Cu;
            goto label_12003c;
        }
    }
    ctx->pc = 0x120034u;
    // 0x120034: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x120034u;
    {
        const bool branch_taken_0x120034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120034u;
        // 0x120038: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120034) {
            ctx->pc = 0x1200E4u;
            goto label_1200e4;
        }
    }
    ctx->pc = 0x12003Cu;
label_12003c:
    // 0x12003c: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x12003cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x120040: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x120040u;
    SET_GPR_U32(ctx, 31, 0x120048u);
    ctx->pc = 0x120044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120040u;
    // 0x120044: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x120040u, 0x120048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120048u;
label_120048:
    // 0x120048: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120048u;
    {
        const bool branch_taken_0x120048 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x120048) {
            ctx->pc = 0x12004Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120048u;
            // 0x12004c: 0x3c040041  lui         $a0, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120058u;
            goto label_120058;
        }
    }
    ctx->pc = 0x120050u;
    // 0x120050: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x120050u;
    {
        const bool branch_taken_0x120050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120050u;
        // 0x120054: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120050) {
            ctx->pc = 0x1200E4u;
            goto label_1200e4;
        }
    }
    ctx->pc = 0x120058u;
label_120058:
    // 0x120058: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x120058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12005c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x12005cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x120060: 0x2490de80  addiu       $s0, $a0, -0x2180
    ctx->pc = 0x120060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958720));
    // 0x120064: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x120064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x120068: 0xac93de80  sw          $s3, -0x2180($a0)
    ctx->pc = 0x120068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294958720), GPR_U32(ctx, 19));
    // 0x12006c: 0x24c6e300  addiu       $a2, $a2, -0x1D00
    ctx->pc = 0x12006cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959872));
    // 0x120070: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x120070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x120074: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x120074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x120078: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x120078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12007c: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x12007cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x120080: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x120080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x120084: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x120084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x120088: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x120088u;
    SET_GPR_U32(ctx, 31, 0x120090u);
    ctx->pc = 0x12008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120088u;
    // 0x12008c: 0xac511500  sw          $s1, 0x1500($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 5376), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x120088u, 0x120090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120090u;
label_120090:
    // 0x120090: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x120090u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x120094: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x120094u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x120098: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x120098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12009c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12009cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200a0: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x1200a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x1200a4: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x1200a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x1200a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1200a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1200ac: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1200acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1200b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1200b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1200b4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1200b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1200b8: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1200B8u;
    SET_GPR_U32(ctx, 31, 0x1200C0u);
    ctx->pc = 0x1200BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200B8u;
    // 0x1200bc: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x1200B8u, 0x1200C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200C0u;
label_1200c0:
    // 0x1200c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1200c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200c4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1200C4u;
    {
        const bool branch_taken_0x1200c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1200C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200C4u;
        // 0x1200c8: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200c4) {
            ctx->pc = 0x1200D8u;
            goto label_1200d8;
        }
    }
    ctx->pc = 0x1200CCu;
    // 0x1200cc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1200ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1200d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1200D0u;
    {
        const bool branch_taken_0x1200d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1200d0) {
            ctx->pc = 0x1200E0u;
            goto label_1200e0;
        }
    }
    ctx->pc = 0x1200D8u;
label_1200d8:
    // 0x1200d8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x1200D8u;
    SET_GPR_U32(ctx, 31, 0x1200E0u);
    ctx->pc = 0x1200DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200D8u;
    // 0x1200dc: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x1200D8u, 0x1200E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200E0u;
label_1200e0:
    // 0x1200e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1200e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1200e4:
    // 0x1200e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1200e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1200e8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1200e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1200ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1200ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1200f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1200f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1200f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1200f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1200f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1200f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1200fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1200fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120100: 0x3e00008  jr          $ra
    ctx->pc = 0x120100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120100u;
        // 0x120104: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120108u;
    // 0x120108: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x120108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12010c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x120110: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x120110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x120114: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x120114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x120118: 0x2454de00  addiu       $s4, $v0, -0x2200
    ctx->pc = 0x120118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x12011c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x12011cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x120120: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x120120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120124: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x120124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x120128: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x120128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12012c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x120130: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x120130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x120134: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x120134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x120138: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x120138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x12013c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12013Cu;
    {
        const bool branch_taken_0x12013c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12013Cu;
        // 0x120140: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12013c) {
            ctx->pc = 0x12014Cu;
            goto label_12014c;
        }
    }
    ctx->pc = 0x120144u;
    // 0x120144: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x120144u;
    {
        const bool branch_taken_0x120144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120144u;
        // 0x120148: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120144) {
            ctx->pc = 0x1201E4u;
            goto label_1201e4;
        }
    }
    ctx->pc = 0x12014Cu;
label_12014c:
    // 0x12014c: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x12014cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x120150: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x120150u;
    SET_GPR_U32(ctx, 31, 0x120158u);
    ctx->pc = 0x120154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120150u;
    // 0x120154: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x120150u, 0x120158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120158u;
label_120158:
    // 0x120158: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120158u;
    {
        const bool branch_taken_0x120158 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120158u;
        // 0x12015c: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120158) {
            ctx->pc = 0x120168u;
            goto label_120168;
        }
    }
    ctx->pc = 0x120160u;
    // 0x120160: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x120160u;
    {
        const bool branch_taken_0x120160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120160u;
        // 0x120164: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120160) {
            ctx->pc = 0x1201E4u;
            goto label_1201e4;
        }
    }
    ctx->pc = 0x120168u;
label_120168:
    // 0x120168: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x120168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12016c: 0x2470de80  addiu       $s0, $v1, -0x2180
    ctx->pc = 0x12016cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958720));
    // 0x120170: 0x2442e300  addiu       $v0, $v0, -0x1D00
    ctx->pc = 0x120170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959872));
    // 0x120174: 0xac73de80  sw          $s3, -0x2180($v1)
    ctx->pc = 0x120174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958720), GPR_U32(ctx, 19));
    // 0x120178: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12017c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x12017cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x120180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x120180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120184: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x120184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x120188: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x120188u;
    SET_GPR_U32(ctx, 31, 0x120190u);
    ctx->pc = 0x12018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120188u;
    // 0x12018c: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x120188u, 0x120190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120190u;
label_120190:
    // 0x120190: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x120190u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x120194: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x120194u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x120198: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x120198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12019c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201a0: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x1201a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x1201a4: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x1201a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x1201a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1201a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1201ac: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1201acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1201b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1201b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1201b4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1201b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1201b8: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1201B8u;
    SET_GPR_U32(ctx, 31, 0x1201C0u);
    ctx->pc = 0x1201BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1201B8u;
    // 0x1201bc: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x1201B8u, 0x1201C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1201C0u;
label_1201c0:
    // 0x1201c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1201c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201c4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1201C4u;
    {
        const bool branch_taken_0x1201c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1201C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201C4u;
        // 0x1201c8: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201c4) {
            ctx->pc = 0x1201D8u;
            goto label_1201d8;
        }
    }
    ctx->pc = 0x1201CCu;
    // 0x1201cc: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1201ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1201d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1201D0u;
    {
        const bool branch_taken_0x1201d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1201d0) {
            ctx->pc = 0x1201E0u;
            goto label_1201e0;
        }
    }
    ctx->pc = 0x1201D8u;
label_1201d8:
    // 0x1201d8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x1201D8u;
    SET_GPR_U32(ctx, 31, 0x1201E0u);
    ctx->pc = 0x1201DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1201D8u;
    // 0x1201dc: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x1201D8u, 0x1201E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1201E0u;
label_1201e0:
    // 0x1201e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1201e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1201e4:
    // 0x1201e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1201e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1201e8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1201e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1201ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1201ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1201f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1201f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1201f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1201f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1201f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1201f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1201fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1201fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120200: 0x3e00008  jr          $ra
    ctx->pc = 0x120200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120200u;
        // 0x120204: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120208u;
}
