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

// Function: sub_0025DC38
// Address: 0x25dc38 - 0x25dea8
void sub_0025DC38_0x25dc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DC38_0x25dc38");
#endif

    switch (ctx->pc) {
        case 0x25dc38u: goto label_25dc38;
        case 0x25dc3cu: goto label_25dc3c;
        case 0x25dc40u: goto label_25dc40;
        case 0x25dc44u: goto label_25dc44;
        case 0x25dc48u: goto label_25dc48;
        case 0x25dc4cu: goto label_25dc4c;
        case 0x25dc50u: goto label_25dc50;
        case 0x25dc54u: goto label_25dc54;
        case 0x25dc58u: goto label_25dc58;
        case 0x25dc5cu: goto label_25dc5c;
        case 0x25dc60u: goto label_25dc60;
        case 0x25dc64u: goto label_25dc64;
        case 0x25dc68u: goto label_25dc68;
        case 0x25dc6cu: goto label_25dc6c;
        case 0x25dc70u: goto label_25dc70;
        case 0x25dc74u: goto label_25dc74;
        case 0x25dc78u: goto label_25dc78;
        case 0x25dc7cu: goto label_25dc7c;
        case 0x25dc80u: goto label_25dc80;
        case 0x25dc84u: goto label_25dc84;
        case 0x25dc88u: goto label_25dc88;
        case 0x25dc8cu: goto label_25dc8c;
        case 0x25dc90u: goto label_25dc90;
        case 0x25dc94u: goto label_25dc94;
        case 0x25dc98u: goto label_25dc98;
        case 0x25dc9cu: goto label_25dc9c;
        case 0x25dca0u: goto label_25dca0;
        case 0x25dca4u: goto label_25dca4;
        case 0x25dca8u: goto label_25dca8;
        case 0x25dcacu: goto label_25dcac;
        case 0x25dcb0u: goto label_25dcb0;
        case 0x25dcb4u: goto label_25dcb4;
        case 0x25dcb8u: goto label_25dcb8;
        case 0x25dcbcu: goto label_25dcbc;
        case 0x25dcc0u: goto label_25dcc0;
        case 0x25dcc4u: goto label_25dcc4;
        case 0x25dcc8u: goto label_25dcc8;
        case 0x25dcccu: goto label_25dccc;
        case 0x25dcd0u: goto label_25dcd0;
        case 0x25dcd4u: goto label_25dcd4;
        case 0x25dcd8u: goto label_25dcd8;
        case 0x25dcdcu: goto label_25dcdc;
        case 0x25dce0u: goto label_25dce0;
        case 0x25dce4u: goto label_25dce4;
        case 0x25dce8u: goto label_25dce8;
        case 0x25dcecu: goto label_25dcec;
        case 0x25dcf0u: goto label_25dcf0;
        case 0x25dcf4u: goto label_25dcf4;
        case 0x25dcf8u: goto label_25dcf8;
        case 0x25dcfcu: goto label_25dcfc;
        case 0x25dd00u: goto label_25dd00;
        case 0x25dd04u: goto label_25dd04;
        case 0x25dd08u: goto label_25dd08;
        case 0x25dd0cu: goto label_25dd0c;
        case 0x25dd10u: goto label_25dd10;
        case 0x25dd14u: goto label_25dd14;
        case 0x25dd18u: goto label_25dd18;
        case 0x25dd1cu: goto label_25dd1c;
        case 0x25dd20u: goto label_25dd20;
        case 0x25dd24u: goto label_25dd24;
        case 0x25dd28u: goto label_25dd28;
        case 0x25dd2cu: goto label_25dd2c;
        case 0x25dd30u: goto label_25dd30;
        case 0x25dd34u: goto label_25dd34;
        case 0x25dd38u: goto label_25dd38;
        case 0x25dd3cu: goto label_25dd3c;
        case 0x25dd40u: goto label_25dd40;
        case 0x25dd44u: goto label_25dd44;
        case 0x25dd48u: goto label_25dd48;
        case 0x25dd4cu: goto label_25dd4c;
        case 0x25dd50u: goto label_25dd50;
        case 0x25dd54u: goto label_25dd54;
        case 0x25dd58u: goto label_25dd58;
        case 0x25dd5cu: goto label_25dd5c;
        case 0x25dd60u: goto label_25dd60;
        case 0x25dd64u: goto label_25dd64;
        case 0x25dd68u: goto label_25dd68;
        case 0x25dd6cu: goto label_25dd6c;
        case 0x25dd70u: goto label_25dd70;
        case 0x25dd74u: goto label_25dd74;
        case 0x25dd78u: goto label_25dd78;
        case 0x25dd7cu: goto label_25dd7c;
        case 0x25dd80u: goto label_25dd80;
        case 0x25dd84u: goto label_25dd84;
        case 0x25dd88u: goto label_25dd88;
        case 0x25dd8cu: goto label_25dd8c;
        case 0x25dd90u: goto label_25dd90;
        case 0x25dd94u: goto label_25dd94;
        case 0x25dd98u: goto label_25dd98;
        case 0x25dd9cu: goto label_25dd9c;
        case 0x25dda0u: goto label_25dda0;
        case 0x25dda4u: goto label_25dda4;
        case 0x25dda8u: goto label_25dda8;
        case 0x25ddacu: goto label_25ddac;
        case 0x25ddb0u: goto label_25ddb0;
        case 0x25ddb4u: goto label_25ddb4;
        case 0x25ddb8u: goto label_25ddb8;
        case 0x25ddbcu: goto label_25ddbc;
        case 0x25ddc0u: goto label_25ddc0;
        case 0x25ddc4u: goto label_25ddc4;
        case 0x25ddc8u: goto label_25ddc8;
        case 0x25ddccu: goto label_25ddcc;
        case 0x25ddd0u: goto label_25ddd0;
        case 0x25ddd4u: goto label_25ddd4;
        case 0x25ddd8u: goto label_25ddd8;
        case 0x25dddcu: goto label_25dddc;
        case 0x25dde0u: goto label_25dde0;
        case 0x25dde4u: goto label_25dde4;
        case 0x25dde8u: goto label_25dde8;
        case 0x25ddecu: goto label_25ddec;
        case 0x25ddf0u: goto label_25ddf0;
        case 0x25ddf4u: goto label_25ddf4;
        case 0x25ddf8u: goto label_25ddf8;
        case 0x25ddfcu: goto label_25ddfc;
        case 0x25de00u: goto label_25de00;
        case 0x25de04u: goto label_25de04;
        case 0x25de08u: goto label_25de08;
        case 0x25de0cu: goto label_25de0c;
        case 0x25de10u: goto label_25de10;
        case 0x25de14u: goto label_25de14;
        case 0x25de18u: goto label_25de18;
        case 0x25de1cu: goto label_25de1c;
        case 0x25de20u: goto label_25de20;
        case 0x25de24u: goto label_25de24;
        case 0x25de28u: goto label_25de28;
        case 0x25de2cu: goto label_25de2c;
        case 0x25de30u: goto label_25de30;
        case 0x25de34u: goto label_25de34;
        case 0x25de38u: goto label_25de38;
        case 0x25de3cu: goto label_25de3c;
        case 0x25de40u: goto label_25de40;
        case 0x25de44u: goto label_25de44;
        case 0x25de48u: goto label_25de48;
        case 0x25de4cu: goto label_25de4c;
        case 0x25de50u: goto label_25de50;
        case 0x25de54u: goto label_25de54;
        case 0x25de58u: goto label_25de58;
        case 0x25de5cu: goto label_25de5c;
        case 0x25de60u: goto label_25de60;
        case 0x25de64u: goto label_25de64;
        case 0x25de68u: goto label_25de68;
        case 0x25de6cu: goto label_25de6c;
        case 0x25de70u: goto label_25de70;
        case 0x25de74u: goto label_25de74;
        case 0x25de78u: goto label_25de78;
        case 0x25de7cu: goto label_25de7c;
        case 0x25de80u: goto label_25de80;
        case 0x25de84u: goto label_25de84;
        case 0x25de88u: goto label_25de88;
        case 0x25de8cu: goto label_25de8c;
        case 0x25de90u: goto label_25de90;
        case 0x25de94u: goto label_25de94;
        case 0x25de98u: goto label_25de98;
        case 0x25de9cu: goto label_25de9c;
        case 0x25dea0u: goto label_25dea0;
        case 0x25dea4u: goto label_25dea4;
        default: break;
    }

    ctx->pc = 0x25dc38u;

label_25dc38:
    // 0x25dc38: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x25dc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_25dc3c:
    // 0x25dc3c: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x25dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_25dc40:
    // 0x25dc40: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x25dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_25dc44:
    // 0x25dc44: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x25dc44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25dc48:
    // 0x25dc48: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x25dc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_25dc4c:
    // 0x25dc4c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x25dc4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25dc50:
    // 0x25dc50: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x25dc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_25dc54:
    // 0x25dc54: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25dc54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25dc58:
    // 0x25dc58: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x25dc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_25dc5c:
    // 0x25dc5c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x25dc5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25dc60:
    // 0x25dc60: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x25dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_25dc64:
    // 0x25dc64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25dc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25dc68:
    // 0x25dc68: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x25dc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_25dc6c:
    // 0x25dc6c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x25dc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_25dc70:
    // 0x25dc70: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x25dc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_25dc74:
    // 0x25dc74: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x25dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_25dc78:
    // 0x25dc78: 0xc08c0ca  jal         func_230328
label_25dc7c:
    if (ctx->pc == 0x25DC7Cu) {
        ctx->pc = 0x25DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC78u;
        // 0x25dc7c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DC80u;
        goto label_25dc80;
    }
    ctx->pc = 0x25DC78u;
    SET_GPR_U32(ctx, 31, 0x25DC80u);
    ctx->pc = 0x25DC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC78u;
    // 0x25dc7c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25DC78u, 0x25DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC80u;
label_25dc80:
    // 0x25dc80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25dc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25dc84:
    // 0x25dc84: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_25dc88:
    if (ctx->pc == 0x25DC88u) {
        ctx->pc = 0x25DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC84u;
        // 0x25dc88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DC8Cu;
        goto label_25dc8c;
    }
    ctx->pc = 0x25DC84u;
    {
        const bool branch_taken_0x25dc84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC84u;
        // 0x25dc88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc84) {
            ctx->pc = 0x25DC94u;
            goto label_25dc94;
        }
    }
    ctx->pc = 0x25DC8Cu;
label_25dc8c:
    // 0x25dc8c: 0x10000078  b           . + 4 + (0x78 << 2)
label_25dc90:
    if (ctx->pc == 0x25DC90u) {
        ctx->pc = 0x25DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC8Cu;
        // 0x25dc90: 0x24160009  addiu       $s6, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DC94u;
        goto label_25dc94;
    }
    ctx->pc = 0x25DC8Cu;
    {
        const bool branch_taken_0x25dc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC8Cu;
        // 0x25dc90: 0x24160009  addiu       $s6, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc8c) {
            ctx->pc = 0x25DE70u;
            goto label_25de70;
        }
    }
    ctx->pc = 0x25DC94u;
label_25dc94:
    // 0x25dc94: 0xc0973a6  jal         func_25CE98
label_25dc98:
    if (ctx->pc == 0x25DC98u) {
        ctx->pc = 0x25DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC94u;
        // 0x25dc98: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DC9Cu;
        goto label_25dc9c;
    }
    ctx->pc = 0x25DC94u;
    SET_GPR_U32(ctx, 31, 0x25DC9Cu);
    ctx->pc = 0x25DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC94u;
    // 0x25dc98: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE98u, 0x25DC94u, 0x25DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC9Cu;
label_25dc9c:
    // 0x25dc9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25dc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dca0:
    // 0x25dca0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x25dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_25dca4:
    // 0x25dca4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x25dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_25dca8:
    // 0x25dca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25dcac:
    // 0x25dcac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_25dcb0:
    // 0x25dcb0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x25dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_25dcb4:
    // 0x25dcb4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x25dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_25dcb8:
    // 0x25dcb8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x25dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_25dcbc:
    // 0x25dcbc: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_25dcc0:
    if (ctx->pc == 0x25DCC0u) {
        ctx->pc = 0x25DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCBCu;
        // 0x25dcc0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DCC4u;
        goto label_25dcc4;
    }
    ctx->pc = 0x25DCBCu;
    {
        const bool branch_taken_0x25dcbc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x25DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCBCu;
        // 0x25dcc0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcbc) {
            ctx->pc = 0x25DCF8u;
            goto label_25dcf8;
        }
    }
    ctx->pc = 0x25DCC4u;
label_25dcc4:
    // 0x25dcc4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x25dcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25dcc8:
    // 0x25dcc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_25dccc:
    // 0x25dccc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25dcd0:
    // 0x25dcd0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25dcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25dcd4:
    // 0x25dcd4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x25dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_25dcd8:
    // 0x25dcd8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25dcdc:
    // 0x25dcdc: 0x4400064  bltz        $v0, . + 4 + (0x64 << 2)
label_25dce0:
    if (ctx->pc == 0x25DCE0u) {
        ctx->pc = 0x25DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCDCu;
        // 0x25dce0: 0x24160016  addiu       $s6, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DCE4u;
        goto label_25dce4;
    }
    ctx->pc = 0x25DCDCu;
    {
        const bool branch_taken_0x25dcdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCDCu;
        // 0x25dce0: 0x24160016  addiu       $s6, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcdc) {
            ctx->pc = 0x25DE70u;
            goto label_25de70;
        }
    }
    ctx->pc = 0x25DCE4u;
label_25dce4:
    // 0x25dce4: 0x4600062  bltz        $v1, . + 4 + (0x62 << 2)
label_25dce8:
    if (ctx->pc == 0x25DCE8u) {
        ctx->pc = 0x25DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCE4u;
        // 0x25dce8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DCECu;
        goto label_25dcec;
    }
    ctx->pc = 0x25DCE4u;
    {
        const bool branch_taken_0x25dce4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCE4u;
        // 0x25dce8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dce4) {
            ctx->pc = 0x25DE70u;
            goto label_25de70;
        }
    }
    ctx->pc = 0x25DCECu;
label_25dcec:
    // 0x25dcec: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x25dcecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_25dcf0:
    // 0x25dcf0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_25dcf4:
    if (ctx->pc == 0x25DCF4u) {
        ctx->pc = 0x25DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCF0u;
        // 0x25dcf4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DCF8u;
        goto label_25dcf8;
    }
    ctx->pc = 0x25DCF0u;
    {
        const bool branch_taken_0x25dcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCF0u;
        // 0x25dcf4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcf0) {
            ctx->pc = 0x25DCC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25dcc8;
        }
    }
    ctx->pc = 0x25DCF8u;
label_25dcf8:
    // 0x25dcf8: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x25dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_25dcfc:
    // 0x25dcfc: 0x27a80024  addiu       $t0, $sp, 0x24
    ctx->pc = 0x25dcfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_25dd00:
    // 0x25dd00: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x25dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_25dd04:
    // 0x25dd04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25dd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25dd08:
    // 0x25dd08: 0x3400a  movz        $t0, $zero, $v1
    ctx->pc = 0x25dd08u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_25dd0c:
    // 0x25dd0c: 0x8fb20010  lw          $s2, 0x10($sp)
    ctx->pc = 0x25dd0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_25dd10:
    // 0x25dd10: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x25dd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_25dd14:
    // 0x25dd14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25dd14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25dd18:
    // 0x25dd18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25dd18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dd1c:
    // 0x25dd1c: 0x40f809  jalr        $v0
label_25dd20:
    if (ctx->pc == 0x25DD20u) {
        ctx->pc = 0x25DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD1Cu;
        // 0x25dd20: 0x26890018  addiu       $t1, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD24u;
        goto label_25dd24;
    }
    ctx->pc = 0x25DD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25DD24u);
        ctx->pc = 0x25DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD1Cu;
        // 0x25dd20: 0x26890018  addiu       $t1, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DD1Cu, 0x25DD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DD24u;
label_25dd24:
    // 0x25dd24: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x25dd24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25dd28:
    // 0x25dd28: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
label_25dd2c:
    if (ctx->pc == 0x25DD2Cu) {
        ctx->pc = 0x25DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD28u;
        // 0x25dd2c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD30u;
        goto label_25dd30;
    }
    ctx->pc = 0x25DD28u;
    {
        const bool branch_taken_0x25dd28 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD28u;
        // 0x25dd2c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd28) {
            ctx->pc = 0x25DD5Cu;
            goto label_25dd5c;
        }
    }
    ctx->pc = 0x25DD30u;
label_25dd30:
    // 0x25dd30: 0x10d20006  beq         $a2, $s2, . + 4 + (0x6 << 2)
label_25dd34:
    if (ctx->pc == 0x25DD34u) {
        ctx->pc = 0x25DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD30u;
        // 0x25dd34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD38u;
        goto label_25dd38;
    }
    ctx->pc = 0x25DD30u;
    {
        const bool branch_taken_0x25dd30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x25DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD30u;
        // 0x25dd34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd30) {
            ctx->pc = 0x25DD4Cu;
            goto label_25dd4c;
        }
    }
    ctx->pc = 0x25DD38u;
label_25dd38:
    // 0x25dd38: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
label_25dd3c:
    if (ctx->pc == 0x25DD3Cu) {
        ctx->pc = 0x25DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD38u;
        // 0x25dd3c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD40u;
        goto label_25dd40;
    }
    ctx->pc = 0x25DD38u;
    {
        const bool branch_taken_0x25dd38 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x25DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD38u;
        // 0x25dd3c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd38) {
            ctx->pc = 0x25DD48u;
            goto label_25dd48;
        }
    }
    ctx->pc = 0x25DD40u;
label_25dd40:
    // 0x25dd40: 0x16c20002  bne         $s6, $v0, . + 4 + (0x2 << 2)
label_25dd44:
    if (ctx->pc == 0x25DD44u) {
        ctx->pc = 0x25DD48u;
        goto label_25dd48;
    }
    ctx->pc = 0x25DD40u;
    {
        const bool branch_taken_0x25dd40 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x25dd40) {
            ctx->pc = 0x25DD4Cu;
            goto label_25dd4c;
        }
    }
    ctx->pc = 0x25DD48u;
label_25dd48:
    // 0x25dd48: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x25dd48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dd4c:
    // 0x25dd4c: 0x16c0003f  bnez        $s6, . + 4 + (0x3F << 2)
label_25dd50:
    if (ctx->pc == 0x25DD50u) {
        ctx->pc = 0x25DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD4Cu;
        // 0x25dd50: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD54u;
        goto label_25dd54;
    }
    ctx->pc = 0x25DD4Cu;
    {
        const bool branch_taken_0x25dd4c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD4Cu;
        // 0x25dd50: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd4c) {
            ctx->pc = 0x25DE4Cu;
            goto label_25de4c;
        }
    }
    ctx->pc = 0x25DD54u;
label_25dd54:
    // 0x25dd54: 0x10000002  b           . + 4 + (0x2 << 2)
label_25dd58:
    if (ctx->pc == 0x25DD58u) {
        ctx->pc = 0x25DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD54u;
        // 0x25dd58: 0x2461023  subu        $v0, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD5Cu;
        goto label_25dd5c;
    }
    ctx->pc = 0x25DD54u;
    {
        const bool branch_taken_0x25dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD54u;
        // 0x25dd58: 0x2461023  subu        $v0, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd54) {
            ctx->pc = 0x25DD60u;
            goto label_25dd60;
        }
    }
    ctx->pc = 0x25DD5Cu;
label_25dd5c:
    // 0x25dd5c: 0x2461023  subu        $v0, $s2, $a2
    ctx->pc = 0x25dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_25dd60:
    // 0x25dd60: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x25dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_25dd64:
    // 0x25dd64: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x25dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25dd68:
    // 0x25dd68: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
label_25dd6c:
    if (ctx->pc == 0x25DD6Cu) {
        ctx->pc = 0x25DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD68u;
        // 0x25dd6c: 0x8e850010  lw          $a1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD70u;
        goto label_25dd70;
    }
    ctx->pc = 0x25DD68u;
    {
        const bool branch_taken_0x25dd68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd68) {
            ctx->pc = 0x25DD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DD68u;
            // 0x25dd6c: 0x8e850010  lw          $a1, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DDB0u;
            goto label_25ddb0;
        }
    }
    ctx->pc = 0x25DD70u;
label_25dd70:
    // 0x25dd70: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x25dd70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25dd74:
    // 0x25dd74: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
label_25dd78:
    if (ctx->pc == 0x25DD78u) {
        ctx->pc = 0x25DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD74u;
        // 0x25dd78: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD7Cu;
        goto label_25dd7c;
    }
    ctx->pc = 0x25DD74u;
    {
        const bool branch_taken_0x25dd74 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x25DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD74u;
        // 0x25dd78: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd74) {
            ctx->pc = 0x25DD84u;
            goto label_25dd84;
        }
    }
    ctx->pc = 0x25DD7Cu;
label_25dd7c:
    // 0x25dd7c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_25dd80:
    if (ctx->pc == 0x25DD80u) {
        ctx->pc = 0x25DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD7Cu;
        // 0x25dd80: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD84u;
        goto label_25dd84;
    }
    ctx->pc = 0x25DD7Cu;
    {
        const bool branch_taken_0x25dd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25dd7c) {
            ctx->pc = 0x25DD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DD7Cu;
            // 0x25dd80: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DD8Cu;
            goto label_25dd8c;
        }
    }
    ctx->pc = 0x25DD84u;
label_25dd84:
    // 0x25dd84: 0x10000006  b           . + 4 + (0x6 << 2)
label_25dd88:
    if (ctx->pc == 0x25DD88u) {
        ctx->pc = 0x25DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD84u;
        // 0x25dd88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DD8Cu;
        goto label_25dd8c;
    }
    ctx->pc = 0x25DD84u;
    {
        const bool branch_taken_0x25dd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD84u;
        // 0x25dd88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd84) {
            ctx->pc = 0x25DDA0u;
            goto label_25dda0;
        }
    }
    ctx->pc = 0x25DD8Cu;
label_25dd8c:
    // 0x25dd8c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x25dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25dd90:
    // 0x25dd90: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x25dd90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_25dd94:
    // 0x25dd94: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x25dd94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_25dd98:
    // 0x25dd98: 0xc08b4f8  jal         func_22D3E0
label_25dd9c:
    if (ctx->pc == 0x25DD9Cu) {
        ctx->pc = 0x25DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD98u;
        // 0x25dd9c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDA0u;
        goto label_25dda0;
    }
    ctx->pc = 0x25DD98u;
    SET_GPR_U32(ctx, 31, 0x25DDA0u);
    ctx->pc = 0x25DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD98u;
    // 0x25dd9c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25DD98u, 0x25DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDA0u;
label_25dda0:
    // 0x25dda0: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_25dda4:
    if (ctx->pc == 0x25DDA4u) {
        ctx->pc = 0x25DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDA0u;
        // 0x25dda4: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDA8u;
        goto label_25dda8;
    }
    ctx->pc = 0x25DDA0u;
    {
        const bool branch_taken_0x25dda0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDA0u;
        // 0x25dda4: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dda0) {
            ctx->pc = 0x25DDACu;
            goto label_25ddac;
        }
    }
    ctx->pc = 0x25DDA8u;
label_25dda8:
    // 0x25dda8: 0xa2720000  sb          $s2, 0x0($s3)
    ctx->pc = 0x25dda8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 18));
label_25ddac:
    // 0x25ddac: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x25ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_25ddb0:
    // 0x25ddb0: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
label_25ddb4:
    if (ctx->pc == 0x25DDB4u) {
        ctx->pc = 0x25DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDB0u;
        // 0x25ddb4: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDB8u;
        goto label_25ddb8;
    }
    ctx->pc = 0x25DDB0u;
    {
        const bool branch_taken_0x25ddb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDB0u;
        // 0x25ddb4: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddb0) {
            ctx->pc = 0x25DE4Cu;
            goto label_25de4c;
        }
    }
    ctx->pc = 0x25DDB8u;
label_25ddb8:
    // 0x25ddb8: 0x8e920014  lw          $s2, 0x14($s4)
    ctx->pc = 0x25ddb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_25ddbc:
    // 0x25ddbc: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
label_25ddc0:
    if (ctx->pc == 0x25DDC0u) {
        ctx->pc = 0x25DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDBCu;
        // 0x25ddc0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDC4u;
        goto label_25ddc4;
    }
    ctx->pc = 0x25DDBCu;
    {
        const bool branch_taken_0x25ddbc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x25DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDBCu;
        // 0x25ddc0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddbc) {
            ctx->pc = 0x25DDCCu;
            goto label_25ddcc;
        }
    }
    ctx->pc = 0x25DDC4u;
label_25ddc4:
    // 0x25ddc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25ddc8:
    if (ctx->pc == 0x25DDC8u) {
        ctx->pc = 0x25DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDC4u;
        // 0x25ddc8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDCCu;
        goto label_25ddcc;
    }
    ctx->pc = 0x25DDC4u;
    {
        const bool branch_taken_0x25ddc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDC4u;
        // 0x25ddc8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddc4) {
            ctx->pc = 0x25DDD4u;
            goto label_25ddd4;
        }
    }
    ctx->pc = 0x25DDCCu;
label_25ddcc:
    // 0x25ddcc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_25ddd0:
    if (ctx->pc == 0x25DDD0u) {
        ctx->pc = 0x25DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDCCu;
        // 0x25ddd0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDD4u;
        goto label_25ddd4;
    }
    ctx->pc = 0x25DDCCu;
    {
        const bool branch_taken_0x25ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDCCu;
        // 0x25ddd0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddcc) {
            ctx->pc = 0x25DE44u;
            goto label_25de44;
        }
    }
    ctx->pc = 0x25DDD4u;
label_25ddd4:
    // 0x25ddd4: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x25ddd4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_25ddd8:
    // 0x25ddd8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25ddd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25dddc:
    // 0x25dddc: 0x36b5fffc  ori         $s5, $s5, 0xFFFC
    ctx->pc = 0x25dddcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65532);
label_25dde0:
    // 0x25dde0: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x25dde0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25dde4:
    // 0x25dde4: 0x0  nop
    ctx->pc = 0x25dde4u;
    // NOP
label_25dde8:
    // 0x25dde8: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x25dde8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_25ddec:
    // 0x25ddec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_25ddf0:
    if (ctx->pc == 0x25DDF0u) {
        ctx->pc = 0x25DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDECu;
        // 0x25ddf0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DDF4u;
        goto label_25ddf4;
    }
    ctx->pc = 0x25DDECu;
    {
        const bool branch_taken_0x25ddec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ddec) {
            ctx->pc = 0x25DDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DDECu;
            // 0x25ddf0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DE08u;
            goto label_25de08;
        }
    }
    ctx->pc = 0x25DDF4u;
label_25ddf4:
    // 0x25ddf4: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x25ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_25ddf8:
    // 0x25ddf8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x25ddf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25ddfc:
    // 0x25ddfc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x25ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_25de00:
    // 0x25de00: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x25de00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_25de04:
    // 0x25de04: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x25de04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_25de08:
    // 0x25de08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25de08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25de0c:
    // 0x25de0c: 0xc08b4f8  jal         func_22D3E0
label_25de10:
    if (ctx->pc == 0x25DE10u) {
        ctx->pc = 0x25DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE0Cu;
        // 0x25de10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE14u;
        goto label_25de14;
    }
    ctx->pc = 0x25DE0Cu;
    SET_GPR_U32(ctx, 31, 0x25DE14u);
    ctx->pc = 0x25DE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE0Cu;
    // 0x25de10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25DE0Cu, 0x25DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE14u;
label_25de14:
    // 0x25de14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25de18:
    // 0x25de18: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_25de1c:
    if (ctx->pc == 0x25DE1Cu) {
        ctx->pc = 0x25DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE18u;
        // 0x25de1c: 0x26020003  addiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE20u;
        goto label_25de20;
    }
    ctx->pc = 0x25DE18u;
    {
        const bool branch_taken_0x25de18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE18u;
        // 0x25de1c: 0x26020003  addiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de18) {
            ctx->pc = 0x25DE24u;
            goto label_25de24;
        }
    }
    ctx->pc = 0x25DE20u;
label_25de20:
    // 0x25de20: 0x558024  and         $s0, $v0, $s5
    ctx->pc = 0x25de20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_25de24:
    // 0x25de24: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x25de24u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_25de28:
    // 0x25de28: 0x1a400004  blez        $s2, . + 4 + (0x4 << 2)
label_25de2c:
    if (ctx->pc == 0x25DE2Cu) {
        ctx->pc = 0x25DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE28u;
        // 0x25de2c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE30u;
        goto label_25de30;
    }
    ctx->pc = 0x25DE28u;
    {
        const bool branch_taken_0x25de28 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x25DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE28u;
        // 0x25de2c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de28) {
            ctx->pc = 0x25DE3Cu;
            goto label_25de3c;
        }
    }
    ctx->pc = 0x25DE30u;
label_25de30:
    // 0x25de30: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x25de30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25de34:
    // 0x25de34: 0x5620ffec  bnel        $s1, $zero, . + 4 + (-0x14 << 2)
label_25de38:
    if (ctx->pc == 0x25DE38u) {
        ctx->pc = 0x25DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE34u;
        // 0x25de38: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE3Cu;
        goto label_25de3c;
    }
    ctx->pc = 0x25DE34u;
    {
        const bool branch_taken_0x25de34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25de34) {
            ctx->pc = 0x25DE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DE34u;
            // 0x25de38: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DDE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25dde8;
        }
    }
    ctx->pc = 0x25DE3Cu;
label_25de3c:
    // 0x25de3c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x25de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_25de40:
    // 0x25de40: 0x2629023  subu        $s2, $s3, $v0
    ctx->pc = 0x25de40u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_25de44:
    // 0x25de44: 0xae920014  sw          $s2, 0x14($s4)
    ctx->pc = 0x25de44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 18));
label_25de48:
    // 0x25de48: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25de48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_25de4c:
    // 0x25de4c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25de50:
    if (ctx->pc == 0x25DE50u) {
        ctx->pc = 0x25DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE4Cu;
        // 0x25de50: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE54u;
        goto label_25de54;
    }
    ctx->pc = 0x25DE4Cu;
    {
        const bool branch_taken_0x25de4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25de4c) {
            ctx->pc = 0x25DE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DE4Cu;
            // 0x25de50: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DE60u;
            goto label_25de60;
        }
    }
    ctx->pc = 0x25DE54u;
label_25de54:
    // 0x25de54: 0xc08a9d6  jal         func_22A758
label_25de58:
    if (ctx->pc == 0x25DE58u) {
        ctx->pc = 0x25DE5Cu;
        goto label_25de5c;
    }
    ctx->pc = 0x25DE54u;
    SET_GPR_U32(ctx, 31, 0x25DE5Cu);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25DE54u, 0x25DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE5Cu;
label_25de5c:
    // 0x25de5c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x25de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_25de60:
    // 0x25de60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_25de64:
    if (ctx->pc == 0x25DE64u) {
        ctx->pc = 0x25DE68u;
        goto label_25de68;
    }
    ctx->pc = 0x25DE60u;
    {
        const bool branch_taken_0x25de60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25de60) {
            ctx->pc = 0x25DE70u;
            goto label_25de70;
        }
    }
    ctx->pc = 0x25DE68u;
label_25de68:
    // 0x25de68: 0xc08a9d6  jal         func_22A758
label_25de6c:
    if (ctx->pc == 0x25DE6Cu) {
        ctx->pc = 0x25DE70u;
        goto label_25de70;
    }
    ctx->pc = 0x25DE68u;
    SET_GPR_U32(ctx, 31, 0x25DE70u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25DE68u, 0x25DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE70u;
label_25de70:
    // 0x25de70: 0xc0973ac  jal         func_25CEB0
label_25de74:
    if (ctx->pc == 0x25DE74u) {
        ctx->pc = 0x25DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE70u;
        // 0x25de74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE78u;
        goto label_25de78;
    }
    ctx->pc = 0x25DE70u;
    SET_GPR_U32(ctx, 31, 0x25DE78u);
    ctx->pc = 0x25DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE70u;
    // 0x25de74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEB0u, 0x25DE70u, 0x25DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE78u;
label_25de78:
    // 0x25de78: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x25de78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25de7c:
    // 0x25de7c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x25de7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_25de80:
    // 0x25de80: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x25de80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_25de84:
    // 0x25de84: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x25de84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_25de88:
    // 0x25de88: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x25de88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_25de8c:
    // 0x25de8c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x25de8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_25de90:
    // 0x25de90: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x25de90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25de94:
    // 0x25de94: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x25de94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25de98:
    // 0x25de98: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x25de98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25de9c:
    // 0x25de9c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x25de9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25dea0:
    // 0x25dea0: 0x3e00008  jr          $ra
label_25dea4:
    if (ctx->pc == 0x25DEA4u) {
        ctx->pc = 0x25DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEA0u;
        // 0x25dea4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DEA8u;
        goto label_fallthrough_0x25dea0;
    }
    ctx->pc = 0x25DEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEA0u;
        // 0x25dea4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25dea0:
    ctx->pc = 0x25DEA8u;
}
